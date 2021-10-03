#include "std_lib_facilities.h"

int area(int lenght, int width){

	if(lenght <= 0 || width <= 0){
		return -1;
	}
	return lenght*width;
}

int framed_area(int x, int y){

	return area(x-2,y-2);
}

int main(){

	int x = 2;
	int y = -4;

	//if( x <= 0 || y <= 0) error("Non_positive args!");

	int area1 = area(x, y);
	cout << "area1: " << area1 << endl;

	int area2 = area(3, 6);
	cout << "area2: " << area2 << endl;
	

	int area3 = framed_area(3, y);
	cout << "area3: " << area3 << endl;


	double ratio = double(area2)/area1;
	cout << "ratio: " << ratio << endl;
	return 0;
}