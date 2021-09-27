#include "std_lib_facilities.h"

int main(){
	
	const double cm_per_inch = 2.54;

	double lenght = 1;
	char unit = 0;

	cout << "Plese enter a lenght followed by a unit!" << endl;

	cin >> lenght >> unit;

	/*if(unit == 'i')
		cout << lenght << " in ==" << lenght*cm_per_inch << " cm" << endl;
	else if (unit == 'c')
		cout << lenght << " cm ==" << lenght/cm_per_inch << " i" << endl;
	else
		cout << "Error, invalid char!" << endl;*/

	switch(unit){
		case 'i':
			cout << lenght << " in ==" << lenght*cm_per_inch << " cm" << endl;
			break;
		case 'c':
			cout << lenght << " cm ==" << lenght/cm_per_inch << " i" << endl;
			break;
		default:
			cout << "Error, invalid char!" << endl;
	}

	return 0;
}