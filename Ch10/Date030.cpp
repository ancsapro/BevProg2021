#include "../../std_lib_facilities.h"

namespace UDChrono {

	class Year {
		static constexpr int min = 1800;
		static constexpr int max = 2200;
	public:
		class Invalid{};
		Year (int x): y{x} { if (x<min || x>max) throw Invalid{}; }
		int year(){ return y; }
		void increment() { y++; }
	private:
		int y;
	};

	Year operator++(Year& year)
	{
		year.increment();
	}

	ostream& operator<< (ostream& os, Year year)
	{
		return os << year.year();
	}

	enum class Month {
		jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
	};

	const vector<string> months = 
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	Month operator++(Month& m)
	{
		m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
		return m;
	}

	ostream& operator<<(ostream& os, Month m)
	{
		return os << months[int(m)];
	}

	class Date {
		Year year;
		Month month;
		int day;
	public:
		class Invalid {};
		Date(): year(Year{2001}), month(Month::jan), day(1) {}
		Date(Year y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
		bool is_valid();
		void add_day(int n);
		Year get_year() const { return year; }
		Month get_month() const { return month; }
		int get_day() const { return day; }
	};

	bool Date::is_valid()
	{
		if (day < 1 || day > 31) return false;
		return true;
	}

	void Date::add_day(int n)
	{
		day += n;
		if (day > 31) 
		{
			++month;
			day -= 31;
			if (month == Month::jan)
			{
				++year;
			}
		}
	}
} // End namespace

ostream& operator<< (ostream& os, UDChrono::Date& d)
{
	return os << d.get_year()
		<< ". " << d.get_month()
		<< ' ' << d.get_day() << ".";
}

istream& operator>> (istream& is, UDChrono::Date& dd)
{
	int y,m,d;
	char ch1, ch2;
	is >> y >> ch1 >> m >> ch2 >> d;
	if (!is) return is;
	if (ch1 != '.' || ch2 != '.')
	{
		is.clear(ios_base::failbit);
		return is;
	}

	dd = UDChrono::Date{y,UDChrono::Month(m),d};
	return is;
}

int main()
try {
	
	UDChrono::Date today { UDChrono::Year{2020}, UDChrono::Month::aug, 31 };

	cout << "Date: " << today << endl;

	UDChrono::Date new_date;

	cout << "Please enter a day in the YYYY.MM.DD format\n";
	cin >> new_date;

	cout << "Entered date: " << new_date << endl;

	return 0;

} catch (UDChrono::Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1; 
} catch (UDChrono::Year::Invalid) {
	cout << "Error: Invalid year\n";
	return 2; 
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 3;
}