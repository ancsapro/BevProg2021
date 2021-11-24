//g++ vector006_debug.cpp -o vector006_debug -Wall -fno-elide-constructors

#include "../../../std_lib_facilities.h"

class My_vector {
	long unsigned int sz;
	double* elem;

	void debug(const string& s)
	{
		cerr << this << "->" << s << "; elem pointer: " << elem << endl;
	}
public:
	explicit My_vector(int s): sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
		debug("(int s) constructor");
	}
	
	My_vector(initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}
	{
		copy(lst.begin(), lst.end(), elem);
		debug("(initializer_list<double> lst) constructor");
	}

	My_vector(const My_vector& arg): sz{arg.sz}, elem{new double[arg.sz]}
	{
		copy(arg.elem, arg.elem+arg.sz, elem);
		debug("copy constructor");
	}

	My_vector& operator=(const My_vector& arg)
	{
		double *p = new double[arg.sz];
		copy(arg.elem, arg.elem+arg.sz, p);
		delete[] elem;
		elem = p;
		sz = arg.sz;
		debug("copy assignment");
		return *this;
	}

	My_vector(My_vector&& arg): sz{arg.sz}, elem{arg.elem}
	{
		arg.sz = 0;
		arg.elem = nullptr;
		debug("move constructor");
	}

	My_vector& operator=(My_vector&& arg)
	{
		delete[] elem;
		elem = arg.elem;
		sz = arg.sz;
		arg.elem = nullptr;
		arg.sz = 0;
		debug("move assignment");
		return *this;
	}
	
	~My_vector() 
	{
		debug("destructor"); 
		delete[] elem; 
	}

	double get(int n) const { return elem[n]; }
	void set(int n, double val) { elem[n] = val; }
	int size() const { return sz; }
};

My_vector fill()
{
	My_vector res = {21.2, 23.4, 2.2};
	
	return res;
}

My_vector glob(10);

int main()
{
	
	My_vector v1 {12.2, 23.3, 34.4};
	
	for (int i = 0; i < v1.size(); ++i)
		cout << v1.get(i) << endl;

	My_vector v2 (v1);

	for (int i = 0; i < v2.size(); ++i)
		cout << v2.get(i) << endl;

	My_vector v3(10);

	v3 = v2;

	for (int i = 0; i < v3.size(); ++i)
		cout << v3.get(i) << endl;

	My_vector v4 = fill();

	for (int i = 0; i < v4.size(); ++i)
		cout << v4.get(i) << endl;

	v1 = fill();

	for (int i = 0; i < v1.size(); ++i)
		cout << v1.get(i) << endl;

	return 0;
}