#include <iostream>

using namespace std;

int timSoNguyenNhoNhat(int);
int const GIA_TRI = 2000;

void main() {
	int soNhoNhat = timSoNguyenNhoNhat(GIA_TRI);
	cout << soNhoNhat;
	system("pause");
}

#pragma region TimSoNguyenNhoNhat
int timSoNguyenNhoNhat(int giaTri) {
	int n = 0;
	int tong = 0;
	while (tong < giaTri) {
		tong += n;
		n++;
	}
	return n - 1;
}

#pragma endregion
