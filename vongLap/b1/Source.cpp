#include <iostream>

using namespace std;



float tinhTongFor(int);
float tinhTongWhile(int);
float tinhTongDoWhile(int);
double tinhTongCacTichFor(int);
double tinhTongCacTichWhile(int);
double tinhTongCacTichDoWhile(int);

void main() {
	int n;
	cout << "nhap N : ";
	cin >> n;

	/*float tong1;
	float tong2;
	float tong3;

	tong1 = tinhTongFor(n);
	tong2 = tinhTongWhile(n);
	tong3 = tinhTongDoWhile(n);

	cout << tong1 << endl;
	cout << tong2 << endl;
	cout << tong3 << endl;*/

	double tongCacTich = tinhTongCacTichDoWhile(n);
	cout << tongCacTich;
	system("pause");
}

#pragma region Ham tinh tong s = 13 + 23 + 33 + ...+n3
float tinhTongFor(int n) {
	float S = 0;
		for (int i = 1; i <= n; i++) {
			S += i * 10 + 3;
		}
		return S;
	}

float tinhTongWhile(int n) {
	float S = 0;
	int i = 1;
	while (i <= n) {
		S += i * 10 + 3;
		i++;
	}
	return S;
}

float tinhTongDoWhile(int n) {
	float S = 0;
	int i = 1;
	do{
		S += i * 10 + 3;
		i++;
	} while (i <= n);
	return S;
}
#pragma endregion

#pragma region TinhTongCacTich
//Tinh tong : S = 1 + 1.2 + 1.2.3 + ... + 1.2.3....n
double tinhTongCacTichFor(int n) {
	double S = 0;
	float P = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			P = P * j;//P *= j
		}
		S = S + P;// S += P;
		P = 1;
	}
	return S;
}

double tinhTongCacTichWhile(int n) {
	double S = 0;
	float P = 1;
	int i = 1;
	int j = 1;

	while (i <= n) {
		j = 1;
		while (j <= i) {
			P = P * j;//P *= j
			j++;
		}
		S = S + P;// S += P;
		P = 1;
		i++;
	}
	return S;
}

double tinhTongCacTichDoWhile(int n) {
	double S = 0;
	float P = 1;
	int i = 1;
	int j = 1;

	do {
		j = 1;
		while (j <= i) {
			P = P * j;//P *= j
			j++;
		}
		S = S + P;// S += P;
		P = 1;
		i++;
	} while (i <= n);
	return S;
}
#pragma endregion
