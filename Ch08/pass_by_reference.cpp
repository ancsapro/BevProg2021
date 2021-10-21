#include "../../std_lib_facilities.h"

int f(int& x)
{
	x = x + 1;
	return x;
}

int main()
{

	int xx = 42;

	cout << f(xx) << endl;
	cout << xx << endl;

	return 0;
}
