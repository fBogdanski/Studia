#include <iostream>
using namespace std;

int main() {
	int uczniowie, cukierki, cukierki_na_osobe, cukierki_pozostale;
	cout << "podaj ilosc cukierkow: ";
	cin >> cukierki;
	cout << "podaj ilosc uczniow(bez Jasia): ";
	cin >> uczniowie;
	cukierki_na_osobe = cukierki / uczniowie;
	cukierki_pozostale = cukierki % uczniowie;
	cout << "uczniowie dostana: " << cukierki_na_osobe<< " Jasiowi pozostanie: "<< cukierki_pozostale<< endl;
}


