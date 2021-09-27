#include "std_lib_facilities.h"

int main(){
	
	vector<int> v = {5, 7, 2, 9, 1};

	for (int i = 0; i < v.size(); ++i){

		cout << v[i] << endl;
	}

	vector<string> names = {"Imi", "Kati", "Pisti"};

	for(auto name: names)
		cout << name << endl;

	vector<double> dv;
	cout << "Vector size: " << dv.size() << endl;

	dv.push_back(5.7);
	dv.push_back(3.1);
	dv.push_back(9.73485763498756483);

	for (double number:dv)
	{
		cout << number << endl;
	}

	cout << "Vector size: " << dv.size() << endl;

	cout << dv[1] << endl;
	return 0;
}