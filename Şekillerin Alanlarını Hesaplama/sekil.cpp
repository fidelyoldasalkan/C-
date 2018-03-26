//============================================================================
// Name        : first.cpp
// Author      : Fid
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sekil.h"

using namespace std;

int secim;

void menu() {
	cout << "Alan Hesapla" << endl;
	cout << "1) Kare" << endl;
	cout << "2) Dikdörtgen" << endl;
	cout << "3) Üçgen" << endl;
	cout << "Seçiminiz :";
	cin >> secim;
}

int main() {
	Sekil* sekil;
	while (1) {
		menu();
		if (secim == 1){
			double kenar;
			cout << "Kenar uzunluğu :";
			cin >> kenar;
			Kare kare(kenar);
			sekil = &kare;
		} else if (secim == 2) {
			double kenar1;
			double kenar2;
			cout << "Kenar1 uzunluğu :";
			cin >> kenar1;
			cout << "Kenar2 uzunluğu :";
			cin >> kenar2;
			Dikdortgen dikdortgen(kenar1, kenar2);
			sekil = &dikdortgen;
		} else {
			double kenar1;
			double kenar2;
			double kenar3;
			cout << "Kenar1 uzunluğu :";
			cin >> kenar1;
			cout << "Kenar2 uzunluğu :";
			cin >> kenar2;
			cout << "Kenar3 uzunluğu :";
			cin >> kenar3;
			Ucgen ucgen(kenar1, kenar2, kenar3);
			sekil = &ucgen;
		}

		cout << "Alan :" << sekil->getAlan() << endl;

	}
	return 0;
}
