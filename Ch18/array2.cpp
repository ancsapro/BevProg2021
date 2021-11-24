#include "../../std_lib_facilities.h"

void print_array(const double p[], int n)
{
	for (int i = 0; i < n; i++)
		cout << p[i] << ' ';
	cout << endl;
}

int stringlen(const char* a)
{
	int n = 0;
	while(a[n]) ++n;
	return n;
}

int main()
{
	double lad[100];

	for (int i = 0; i < 100; i++)
		lad[i] = i;

	print_array(lad, 100);

	cout << "sizeof(lad): " << sizeof(lad) << endl;

	char ac[] = "Howdy"; 

	cout << "len of ac is " << stringlen(ac) << endl;

	return 0;
}