#include <iostream>

using namespace std;

void main() {
	/*
	Sap xep so tang dan
	-input so nguyen 3 chu so : 196
	-out : sap xep 169

	THuat toan:
	+ tach hang tram : x/100;
	+ tach hang chuc: (x%100)/10;
	+ tach hang don vi: (x%100)%10;
	+tim Min;
	+ tim Max;
	+ xuat theo thu tu;
	*/

	int x;
	int tram;
	int chuc;
	int dv;
	cout << "sap xep so";
	cout << "nhap vao so co 3 chu so : ";
	cin >> x;
	tram = x / 100;
	chuc = (x % 100) / 10;
	dv = (x % 100) % 10;

	int min = tram;
	int max = tram;

	//tim Min
	if (min > chuc) {
		min = chuc;
	}
	if (min > dv) {
		min = dv;
	}

	//tim max
	if (max < chuc) {
		max = chuc;
	}
	if (max < dv) {
		max = dv;
	}

	//in ra man hinh
	if (max == tram && min == dv) {
		cout << dv << chuc << tram;
	}
	else if (max == tram && min == chuc) {
		cout << chuc << dv << tram;
	}
	else if (max == chuc && min == tram) {
		cout << tram << dv << chuc;
	}
	else if (max == chuc && min == dv) {
		cout << dv << tram << chuc;
	}
	else if (max == dv && min == chuc) {
		cout << chuc << tram << dv;
	}
	else{
		cout << dv << chuc << tram;
	}
	system("pause");
}