#include "../../std_lib_facilities.h"

int main()
{
	double* a = new double;
	double* b = new double(0);

	cout << *a << endl;
	cout << *b << endl;

	double* c = new double[4];

	for (int i = 0; i < 4; ++i)
		cout << c[i] << endl;

	int* d = new int[4];
	cout << d[2] << endl;

	for (int i = 0; i < 4; ++i)
		cout << d[i] << endl;

	cout << d[100] << endl;
	cout << d[-3] << endl;

	double* e = new double[4] { 1.1, 2.2, 3.3, 4.4 };

	for (int i = 0; i < 4; ++i)
		cout << e[i] << endl;

	double* p0 = nullptr;

	if (p0 == nullptr) cout << "p0 is nullptr.\n";
	else cout << "Impossible.\n";	

	return 0;
}