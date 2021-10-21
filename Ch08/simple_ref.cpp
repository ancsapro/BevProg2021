#include "../../std_lib_facilities.h"

int main(){

	int i = 7;
	cout << "i: " << i << endl;

	int &r = i;
	r = 9;
	cout << "r: " << r << endl;
	cout << "i: " << i << endl;

	i = 10;
	cout << "r: " << r << endl;
	cout << "i: " << i << endl;

	const int &c = r;
	//c = 100;
	cout << "c: " << c << endl;
	cout << "r: " << r << endl;
	cout << "i: " << i << endl;

	i = 100;
	cout << "c: " << c << endl;
	cout << "r: " << r << endl;
	cout << "i: " << i << endl;

	return 0;

}