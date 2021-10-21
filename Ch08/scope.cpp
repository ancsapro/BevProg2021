#include "../../std_lib_facilities.h"

void f(int x)
{
	int z = x + 7;
	x += 10;
	cout << "f-ben z: " << z << " f-ben x: " << x << endl;
}

int g(int x)
{
	int z = x + 2;
	cout << "g-ben z: " << z << " g-ben x: " << x << endl;	
	return 2 * z;
}

int main()
{
	int z = 10;
	cout << "mainben z: " << z << endl;
	f(z);
	cout << "mainben z: " << z << endl;
	int x = g(z);
	cout << "mainben x: " << x << endl;

	return 0;
}