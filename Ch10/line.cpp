#include "../../std_lib_facilities.h"

int main()
{
	string name;
	//cin >> name;
	getline(cin, name);
	cout << name << endl;

	string first_name, second_name;
	stringstream ss {name};
	ss >> first_name;
	ss >> second_name;

	cout << "First name: " << first_name << ", second_name: " << second_name << endl;

	return 0;
}