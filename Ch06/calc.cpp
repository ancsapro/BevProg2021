#include "std_lib_facilities.h"

int main(){
	
	cout << "Please enter an expression\n";

	int lvar = 0, rval =0;
	char op = 0;

	int res;

	cin >> lvar >> op >> rval;

	if(op == '+')
		res = lvar + rval;
	else if (op == '-')
		res = lvar - rval;

	cout << "Result: " << res << endl;

	return 0;
}