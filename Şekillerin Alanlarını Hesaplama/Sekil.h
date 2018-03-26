/*
 * Sekil.h
 *
 *  Created on: 26 Mar 2018
 *      Author: fidel
 */

#ifndef SEKIL_H_
#define SEKIL_H_
#endif /* SEKIL_H_ */
#include <string>
#include <math.h>
using namespace std;

class Sekil {
public:
	Sekil(string adi = "Sekil") : alan(0), adi(adi) {}
	virtual ~Sekil() {};
	virtual void alanHesapla() = 0;
	double getAlan() {
		return alan;
	}
	string getAdi() {
		return adi;
	}

protected:
	double alan;

private:
	string adi;
};

class Kare : public Sekil {
public:
	Kare(double kenar) : Sekil("Kare"), kenar(kenar) { alanHesapla(); }
	void alanHesapla() {
		alan = kenar * kenar;
	}

private:
	double kenar;
};

class Dikdortgen : public Sekil {
public:
	Dikdortgen(double kenar1, double kenar2) : Sekil("Dikdortgen"), kenar1(kenar1), kenar2(kenar2) { alanHesapla(); }
	void alanHesapla() {
		alan = kenar1 * kenar2;
	}

private:
	double kenar1;
	double kenar2;

};

class Ucgen : public Sekil {
public:
	Ucgen(double kenar1, double kenar2, double kenar3) : Sekil("Üçgen"), kenar1(kenar1), kenar2(kenar2), kenar3(kenar3) { alanHesapla(); }
	void alanHesapla() {
		double u = (kenar1 + kenar2 + kenar3) / 2;
		alan = sqrt(u * (u - kenar1) * (u - kenar2) * (u - kenar3));
	}
private:
	double kenar1;
	double kenar2;
	double kenar3;
};
