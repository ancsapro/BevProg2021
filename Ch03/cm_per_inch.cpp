#include "std_lib_facilities.h"
int main(){
	
	const double cm_per_inch = 2.54;
	double lenght = 1;

	while (lenght != 0){
		cout << "Please enter a distance in inches: ";
		cin >> lenght;
		cout << "lenght in cm: " << lenght * cm_per_inch << endl;
	}
	
	return 0;
}
