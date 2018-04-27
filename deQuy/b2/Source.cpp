#include <iostream>

using namespace std;

float Tinh(int n) {
	//diem dung
	if (n == 1) {
		return 4/3;
	}
	else {
		return Tinh(n - 1) + 1/(2 * n + 1);
	}
}

long giaiThua(int n) {
	if (n == 1) {
		return 1;
	}
	return giaiThua(n - 1)*n;
}

long TongGT(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return TongGT(n - 1) + giaiThua(n - 1) * n;
	}
}
void main() {
	cout << "chuong trinh tinh tong S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3.n" << endl;
	cout << "nhap so n :";
	int n;
	cin >> n;
	cout << TongGT(n);
	system("pause");
}