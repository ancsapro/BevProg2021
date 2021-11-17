#include "../../std_lib_facilities.h"

struct Reading {
	int hour;
	double temperature;
};

int main()
try {
	cout << "Please enter input file name: ";
	string iname;
	cin >> iname;

	ifstream ist {iname};

	if (!ist) error ("can't open input file ", iname);

	vector<Reading> temps;
	int hour;
	double temperature;
	while (ist >> hour >> temperature){
		if (hour < 0 || hour > 23) error("hour out of range");
		temps.push_back(Reading{hour,temperature});
	}

	cout << "Please enter output file name: ";
	string oname;
	cin >> oname;

	ofstream ost {oname};

	if (!ost) error ("can't open output file ", oname);

	for (const auto& t : temps)
		ost << t.hour << ' ' << t.temperature << endl;

	return 0;

} catch (runtime_error& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened\n";
	return 2;
}
