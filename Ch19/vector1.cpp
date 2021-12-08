#include "std_lib_facilities.h"

class My_out_of_range{};

template<typename T>

class My_vector{

	long unsigned int sz;
	T* elem;
	int space;

public:

	My_vector(): sz{0}, elem{nullptr}, space{0} {}
	explicit My_vector(int s): sz(s), elem{new T[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}
	My_vector(initializer_list<T> lst): sz{lst.size()}, elem{new T[sz]}
	{
		copy(lst.begin(), lst.end(), elem);
	}

	My_vector(const My_vector& arg): sz{arg.sz}, elem{new T[arg.sz]}
	{
		copy(arg.elem, arg.elem+arg.sz, elem);
	}

	My_vector& operator=(const My_vector& arg)
	{
		if(this == & arg) return *this;

		if(arg.sz <= space)
		{
			for(int i = 0; i < arg.sz; ++i) elem[i] = arg.elem[i];
			sz = arg.sz;
			return *this;
		}

		T* p = new T[arg.sz];
		copy(arg.elem, arg.elem+arg.sz, p);
		delete[] elem;
		elem = p;
		space = sz = arg.sz;
		return *this;
	}

	My_vector(My_vector&& arg): sz{arg.sz}, elem{arg.elem}
	{
		arg.sz = 0;
		arg.elem = nullptr;
	}

	My_vector& operator=(My_vector&& arg){
		delete[] elem;
		elem = arg.elem;
		sz = arg.sz;
		arg.elem = nullptr;
		arg.sz = 0;
		return *this;
	}

	~My_vector()
	{
		delete[] elem;
	}

	T& operator[](int n){return elem[n];}
	T operator[](int n) const{return elem[n];}

	int size() const {return sz;}
	int capacity() const {return space;}

	void reserve(int newalloc)
	{
		if(newalloc <= space) return;
		T* p = new T[newalloc];
		for(int i = 0; i < sz; ++i) p[i] = elem[i];
		delete[] elem;
		elem = p;
		space = newalloc; 
	}

	void resize(int newsize)
	{
		reserve(newsize);
		for(int i = 0; i < newsize; ++i) elem[i] = 0;
		sz = newsize; 
	}

	void push_back(T d)
	{
		if(space == 0)
			reserve(8);
		else if (sz == space)
			reserve(2*space);
		elem[sz] = d;
		++sz;
	}

	T& at(int n)
	{
		if(n < 0 || sz <= n)throw My_out_of_range();
		return elem[n];
	}

	T& at(int n) const
	{
		if(n < 0 || sz <= n)throw My_out_of_range();
		return elem[n];
	}

};

int main(){
try{

	My_vector<string> v2;

	v2.push_back("Jack");
	v2.push_back("Jill");
	v2.push_back("Bob");

	for(int i = 0; i < v2.size(); ++i)
		cout << v2.at(i) << endl;
	return 0;
}catch(My_out_of_range){
	cerr << "out_of_range at vector\n";
	return 1;
}
}