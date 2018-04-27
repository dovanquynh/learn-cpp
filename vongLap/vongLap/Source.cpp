#include <iostream>
#include <math.h>

using namespace std;

void main() {
	//chuong trinh cho phep nguoi dung nhap vao 1 so va xuat thong bao " xin chao + so da nhap"
	//neu nhap vao 0 thi dung
	/*cout << "nhap vao 1 so: . nhap 0 de ket thuc " << endl;

	int soNguyen;

	do {
	cout << "nhap vao 1 so : ";
	cin >> soNguyen;
	cout << "Xin chao " << soNguyen << endl;
	} while (soNguyen != 0);
	*/


	// chuong trinh nhap 2 so bat ky khac 0, tinh cong tru nhan chia theo menu
	cout << "Nhap vao 2 so: " << endl;
	int a;
	int b;
	int menu;

	do {
		cout << "chon cac menu de thuc hien : \n";
		cout << "nhap 1 de tinh a + b \n";
		cout << "nhap 2 de tinh a - b \n";
		cout << "nhap 3 de tinh a * b \n";
		cout << "nhap 4 de tinh a / b \n";
		cout << "nhap 0 de thoat chuong trinh \n";
		cin >> menu;
		if (menu != 0) {
			cout << "nhap vao 2 so a,b khac 0 \n";
			cout << "So a: ";
			cin >> a;
			cout << "So b: ";
			cin >> b;

			int kq;
			if (menu == 1) {
				kq = a + b;
			}
			else if (menu == 2) {
				kq = a - b;
			}
			else if (menu == 3) {
				kq = a * b;
			}
			else if (menu == 4) {
				kq = a / b;
			}
			cout << "ket qua cua phep tinh  :" << kq << endl;
		}

	} while (menu != 0);

	system("pause");
}