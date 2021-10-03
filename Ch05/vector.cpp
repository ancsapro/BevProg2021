#include "std_lib_facilities.h"

int main(){
	
	try {vector<int> v;

	for(int x; cin >> x;)
		v.push_back(x);

	for(int i = 0; i <= v.size(); ++i)
		cout << "v[" << i << "] == " << v[i] << endl;

	return 0;
} catch (out_of_range){
	cerr << "Range error" << endl;
	return 1;
} catch(...){
	cerr << "Exeption: something went wrong" << endl;
	return 2; 
}
}