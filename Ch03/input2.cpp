#include "std_lib_facilities.h"
int main(){
	cout << "Please enter you first name and age!" << endl;
	string first_name;
	int age;
	cin >> first_name >> age;
	cout << "Hello, " << first_name << "! (" << age << ")\n";
	
	return 0;
}