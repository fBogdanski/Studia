#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

int main (){

	int a, r, kat_w_radianach, pole;
	cout << "podaj kat a: ";
	cin >> a;
	cout << "podaj Promien: ";
	cin >> r;
	
	kat_w_radianach = (M_PI*a)/180;
	pole = ((r*r)/2)*(kat_w_radianach - sin(a));
	cout <<"pole= "<<pole <<endl;
}
	
	
