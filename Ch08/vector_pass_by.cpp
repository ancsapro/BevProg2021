#include "../../std_lib_facilities.h"

void print(vector<double>& v)
{
	cout << '{';
	for (int i = 0; i < v.size(); ++i)
	{
		//cout << v[i];
		//if (i != v.size()-1) cout << ", ";
	}
	cout << "}\n";
}

int main()
{
	//check system monitor!
	int x = numeric_limits<int>::max();

	vector<double> vd1(10);
	vector<double> vd2(10000);
	vector<double> vd3(x);

	print (vd3);

	return 0;
}
