#include <iostream>

using namespace std;

void main() {
	cout << "ve tam giac can";
	int chieuCao;
	cout << "nhap chieu cao : ";
	cin >> chieuCao;
	for (int i = 0; i < chieuCao; i++) {
		cout << "\n";
		for (int j = 0; j < 2 * chieuCao; j++) {
			if (j < chieuCao - i || j > chieuCao + i) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
	}
	cout << "\n";






	system("pause");
}