#include "std_lib_facilities.h"
int main(){
	
	cout << "Please enter a real number!" << endl;
	double n;
	cin >> n;
	cout << "The number is: " << n << endl
		<< "n+1 = " << n + 1 << endl
		<< "n*3 = " << n * 3 << endl
		<< "n+n = " << n + n << endl
		<< "n*n = " << n * n << endl
		<< "n/2 = " << n / 2 << endl
		<< "sqrt(n) = " << sqrt(n) << endl;

	return 0;
}