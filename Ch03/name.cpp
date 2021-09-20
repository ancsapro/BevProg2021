#include "std_lib_facilities.h"
int main(){
	cout << "Please enter your first and last name and your age!" << endl;

	string first_name, last_name;
	int age;


	cin >> first_name >> last_name >> age;

	string name = first_name + ' ' + last_name;

	name += " Jr.";
	//name = name + " Jr.";

	age = age + 1;
	//age =+ 1;
	//age++;
	//cout << "Hello, " << first_name << ' '<< last_name << "! (" << age << ")\n";
	cout << "Hello, " << name << "! (" << age << ")\n";
	return 0;
}