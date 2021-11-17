#include "../../std_lib_facilities.h"

int main()
try {
	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;

	ifstream ist {iname};

	if (!ist) error ("can't open input file ", iname);

	cout << "Please enter output file name: ";
	string oname;
	cin >> oname;

	ofstream ost {oname};

	if (!ost) error ("can't open input file ", oname);

	return 0;

} catch (runtime_error& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened\n";
	return 2;
}
