#include <iostream>

using namespace std;

float Tinh(int n) {
	//diem dung
	if (n == 1) {
		return 4 / 3;
	}
	else {
		return Tinh(n - 1) + 1 / (2 * n + 1);
	}
}

void chuyen(int n, char A, char B) {
	cout << "\n Chuyen dia thu " << n << " tu coc " << A << " sang coc " << B << endl;
	
}
void ThapHN(int n, char A, char B, char C) {
	if (n == 1) {
		chuyen(1, A, C);
	}
	else {
		ThapHN(n - 1, A, C, B);
		chuyen(n, A, C);
		ThapHN(n - 1, B, A, C);
	}
}
void main() {
	cout << "Thap Ha Noi" << endl;
	cout << "nhap so dia n = :";
	int n;
	cin >> n;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	ThapHN(n, a, b, c);
	system("pause");
}