#include "../../std_lib_facilities.h"

int main()
{
	int var = 17;
	int *ptr = &var;

	int x = 17;
	int* pi = &x;

	double e = 2.71828;
	double* pd = &e;

	cout << "pi==" << pi << "; contents of pi==" << *pi << endl;
	cout << "pd==" << pd << "; contents of pd==" << *pd << endl;

	*pi = 27;
	*pd = 3.14159;

	cout << "pi==" << pi << "; contents of pi==" << *pi << endl;
	cout << "pd==" << pd << "; contents of pd==" << *pd << endl;

	*pd = *pi;

	cout << "pi==" << pi << "; contents of pi==" << *pi << endl;
	cout << "pd==" << pd << "; contents of pd==" << *pd << endl;

	//int i = pi; 		//error!
	//pi = 7; 			//error!
	//char* pc = pi;		//error!

	return 0;
}
