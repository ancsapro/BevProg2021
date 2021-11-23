#include "../../../std_lib_facilities.h"

class My_vector {
	int sz;
	double* elem;
public:
	My_vector(int s) :sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}
	~My_vector() { delete[] elem; }

	double get(int n) const { return elem[n]; }
	void set(int n, double val) { elem[n] = val; }
	int size() const { return sz; }
};

int main()
{
	My_vector v(10);

	v.set(3, 2.2);

	//cout << v.get(3) << endl;

	for (int i = 0; i < 10; ++i)
		cout << v.get(i) << endl;		

	return 0;
}