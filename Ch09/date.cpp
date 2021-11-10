#include "std_lib_facilities.h"

struct Date{
	int y, m, d;
};

void init_date(Date& date, int y, int m, int d){
	if (y > 0)
		date.y = y;
	else
		error("invalid year");

	if(m <= 12 && m > 0)
		date.m = m;
	else
		error("invalid month");

	if(d <= 31 && d > 0)
		date.d = d;
	else
		error("invalid day");
}

void add_day(Date& date, int n){
	date.d += n;

	if (date.d > 31){
		date.m++;
		date.d -= 31;
		if(date.m > 12){
			date.y++;
			date.m -=12;
		}
	}
}

int main(){
try{
	Date today;

	today.y = 2021;
	today.m = 10;
	today.d = 28;

	cout << "Date :" << today.y << '.' << today.m << '.' << today.d << endl;

	Date x;
	init_date(x, 2021, 12, 28);
	//x.y = -1000;
	//x.m = 15;
	//x.d = 32;

	cout << "Date :" << x.y << '.' << x.m << '.' << x.d << endl;

	add_day(x, 10);

	cout << "Date :" << x.y << '.' << x.m << '.' << x.d << endl;

	return 0;
}catch(exception& e){
	cout << e.what() << endl;
	return 1;
}
}	