#include <iostream>

using namespace std;

void main() {
	cout << "Ve hinh tam giac \n";
	int chieuDai;
	int chieuRong;
	cout << "nhap vao chieu dai : ";
	cin >> chieuDai;
	cout << "nhap vao chieu rong : ";
	cin >> chieuRong;


	//ve hinh chu nhat
	for (int i = 0; i < chieuRong; i++) {
		cout << "\n";
		for (int j = 0; j < chieuDai; j++) {
			cout << "*";
		}
	}
	cout << "\n";
	system("pause");
}