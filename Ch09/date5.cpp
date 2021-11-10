#include "std_lib_facilities.h"


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

enum class Month {
	jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
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
	int year;
	Month month;
	int day;
public:
	class Invalid {};
	Date(int y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
	bool is_valid();
	void add_day(int n);
	int get_year(){ return year; }
	Month get_month(){ return month; }
	int get_day(){ return day; }
};

bool Date::is_valid()
{
	if (year < 0 || day < 1 || day > 31) return false;
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
			year++;
		}
	}
}

int main()
try {
	Date today {2021, Month::aug, 31};

	cout << "Date: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ".\n";

	today.add_day(1);

	cout << "Date: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ".\n";

	Date my_birthday {2021,Month::dec,31};

	cout << "Date: " << my_birthday.get_year() << ". " << my_birthday.get_month() << " " << my_birthday.get_day() << ".\n";

	my_birthday.add_day(1);

	cout << "Date: " << my_birthday.get_year() << ". " << my_birthday.get_month() << " " << my_birthday.get_day() << ".\n";

	return 0;

} catch (Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1; 
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 2;
}