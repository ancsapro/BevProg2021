#include "std_lib_facilities.h"

int main(){
	
	cout << "Please enter an expression (+, -, *, /)\n";
	cout << "Please enter an x to end of expression\n";

	int lvar = 0, rval =0;

	cin >> lvar;
	if (!cin) error("No lvar");

	for(char op; cin >> op;){

		if(op != 'x') cin >> rval;
		if(!cin) error("No rval");

		switch(op){
			case '+':
				lvar += rval;
				break;
			case '-':
				lvar -= rval;
				break;
			case '*':
				lvar *= rval;
				break;
			case '/':
				lvar /= rval;
				break;
			default:
				cout << "Result: " << lvar << endl;
				return 0;

		}
	}

	error("bad expression");

	return 0;
}