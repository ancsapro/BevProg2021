#include "../../std_lib_facilities.h"

//int gai[100];

int main()
{
	//char lac[100];
	//int lai[40];
	double lad[100];

	lad[7] = 100;

	cout << lad[7] << endl;

	for (int i = 0; i < 100; i++)
		lad[i] = i;

	for (int i = 0; i < 100; i++)
		cout << lad[i] << ' ';
	cout << endl;

	double* p = &lad[5];

	cout << *p << endl;

	cout << p[2] << endl;	
	cout << p[-3] << endl;	

	p+=2;
	cout << *p << endl;

	for (double* k = &lad[0]; k<&lad[100]; ++k)
		cout << *k << ' ';
	cout << endl;

	return 0;
}