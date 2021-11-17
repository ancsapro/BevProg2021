#include "../../std_lib_facilities.h"

int main()
{
	cout << 1234 << "\t(decimal)\n"
		<< hex << 1234 << "\t(haxadecimal)\n"
		<< oct << 1234 << "\t(octal)\n";
	cout << showbase << dec;
	cout << 1234 << "\t(decimal)\n"
		<< hex << 1234 << "\t(haxadecimal)\n"
		<< oct << 1234 << "\t(octal)\n";

	cout << noshowbase << dec;

/*
	int a, b, c, d;

	cin >> a >> hex >> b >> oct >> c >> d;

	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
*/

	cout << 1234.56789 << "\t(defaultfloat)\n"
		<< fixed << 1234.56789 << "\t(fixed)\n"
		<< scientific << 1234.56789 << "\t(scientific)\n";

	cout << defaultfloat << setprecision(8) << 1234.56789 << "\t(defaultfloat)\n"
		<< fixed << 1234.56789 << "\t(fixed)\n"
		<< scientific << 1234.56789 << "\t(scientific)\n";

	cout << 12345
		<< '|' << setw(4) << 123456 << '|'
		<< setw(8) << 12345 << '|'
		<< 123456 << '\n';

	return 0;
}