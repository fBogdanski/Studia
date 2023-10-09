#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f, x, y, z;
	cout << "podaj wspolczynnik a:";
	cin >> a;
	cout << "podaj wspolczynnik b:";
	cin >> b;
	cout << "podaj wspolczynnik c:";
	cin >> c;
	cout << "podaj wspolczynnik d:";
	cin >> d;
	cout << "podaj wspolczynnik e:";
	cin >> e;
	cout << "podaj wspolczynnik f:";
	cin >> f;
	d = (a*d) - (b*c);
	
	if ( d!=0 ){
		x = ((e*d)-(f*b))/d;
		y = ((e*a)-(f*c))/d;
		cout <<"x= "<<x <<" y= "<<y<<endl;
	}else{
		printf("uklad jest sprzeczny");
	}
}
