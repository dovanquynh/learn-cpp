#include <iostream>

using namespace std;

float Tinh(int n) {
	//diem dung
	if (n == 1) {
		return 1;
	}
	else {
		return n * n + Tinh(n - 1);
	}
}
void main() {
	cout << "chuong trinh tinh tong S(n) = 1*1 + 2*2 + .. + n*n" << endl;
	cout << "nhap so n :";
	int n;
	cin >> n;
	cout << Tinh(n);
	system("pause");
}