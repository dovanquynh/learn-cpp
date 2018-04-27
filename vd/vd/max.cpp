#include <iostream>

using namespace std;

void main() {
	/*
	bai1 . nhap vao 2 so nguyen duong in ra man hinh so nguyen lon nhat
	-input 2 so a,b
	-output: so lon nhat 
	*/
	cout << "tim 2 so lon nhat trong a,b";
	int a;
	int b;
	cout << "nhap vao so a : ";
	cin >> a;
	cout << "nhap vao so b : ";
	cin >> b;

	if (a > b) {
		cout << "So lon nhat la a = "<< a;
	}
	else {
		cout << "So lon nhat la b = " << b;
	}
	system("pause");
}