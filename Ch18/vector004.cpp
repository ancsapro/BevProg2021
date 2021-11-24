#include "../../../std_lib_facilities.h"

class My_vector {
	long unsigned int sz;
	double* elem;
public:
	My_vector(int s): sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}
	
	My_vector(initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}
	{
		copy(lst.begin(), lst.end(), elem);
	}
	
	~My_vector() { delete[] elem; }

	double get(int n) const { return elem[n]; }
	void set(int n, double val) { elem[n] = val; }
	int size() const { return sz; }
};

int main()
{
	My_vector v1 {12.2, 23.3, 34.4};

	for (int i = 0; i < v1.size(); ++i)
		cout << v1.get(i) << endl;

	//My_vector v2 = v1; //oops!

	

	return 0;
}