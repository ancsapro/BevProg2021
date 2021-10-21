#include "../../std_lib_facilities.h"

int main()
{
	int in_scope = 42; //local in main()
	{
		cout << in_scope << endl;
		{
			int in_scope = 100; //local in the scope between {}
			cout << in_scope << endl;
			
			++in_scope;
			cout << in_scope << endl;
		}
		cout << in_scope << endl;
	}
	cout << in_scope << endl;

	return 0;
}