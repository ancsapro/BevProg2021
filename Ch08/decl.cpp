#include "std_lib_facilities.h" //előfordító direktíva pl. define

int f(int); //csak deklarálás.. nincs definiálás

int main(){
	int i = 2;

	cout << f(i) << '\n';

	//int i = 2;
}	

int f(int x){
	return 2*x;
}
