//============================================================================
// Name        : ornek1.cpp
// Author      : Fid
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool ciftMi(int sayi);
int main() {
	int secim = 1;
	while(secim){
		cout << "Sayı giriniz:";
		cin >> secim;
		string cikti = (ciftMi(secim) ? "Sayı Çift" : "Sayı Tek");
		cout << cikti << endl;
	}
	cout << "Güle Güle";
	return 0;

}

bool ciftMi(int sayi){
	return sayi % 2 == 0 ? true : false;
}

