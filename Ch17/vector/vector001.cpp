#include "../../../std_lib_facilities.h"

class My_vector {
	int sz;
	double* elem;
public:
	My_vector(int s) :sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}
	//~My_vector() { delete[] elem; }
	int size() const { return sz; }
};

int main()
{
	My_vector v(10);
	return 0;
}