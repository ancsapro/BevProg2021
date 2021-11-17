#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
	int n = 0;
	while (cin >> n) {
		if (1 <= n && n <= 10) break;
		cout << "Sorry " << n << " is not in the [1:10] range; please try again\n";
	}

	cout << "Thanks: " << n << endl;

	return 0;
}
