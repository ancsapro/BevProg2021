#include "../../std_lib_facilities.h"

int main()
try {
	cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
	int n = 0;
	while (true) 
	{
		cin >> n;
		if (cin)
		{
			if (1 <= n && n <= 10) break;
			cout << "Sorry " << n << " is not in the [1:10] range; please try again!\n";
		}
		else if (cin.fail()) // if not integer!
		{
			cin.clear();
			cout << "Sorry, that was not a number!\n";
			for (char ch; cin >> ch && !isdigit(ch); ) 
				;
			if (!cin) error ("no input");
			cin.unget();
		}
		else
		{
			error("no input");
		}
	}

	cout << "Thanks: " << n << endl;

	return 0;
} catch (runtime_error& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened\n";
	return 2;
}
