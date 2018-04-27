#include <iostream>
using namespace std;

void main() {
	/*
	Bai1 : Input: nhap 2 so x,y
	Out put: x+y, x-y,x*y,x/y
	*/
	cout << "thuc hien phep tinh \n";
	int x;
	int y;
	cout << "Nhap vao gia tri x: ";
	cin >> x;
	cout << "Nhap vao gia tri y: ";
	cin >> y;

	cout << "Tong cua 2 so la : " << x << " + " << y << " = " << x + y <<"\n" ;
	cout << "Hieu cua 2 so la : " << x << " - " << y << " = " << x - y << "\n" ;
	cout << "Tich cua 2 so la : " << x << " * " << y << " = " << x * y << "\n";
	cout << "Thuong cua 2 so la : " << x << " / " << y << " = " << x / y <<"\n" ;

	/*
	Bai 2 tinh trung binh cong cua 2 so a,b,c,d
	*/
	float a;
	float b;
	float c;
	float d;
	cout << "nhap so A : ";
	cin >> a;

	cout << "nhap vao so B : ";
	cin >> b;

	cout << "nhap vao so C : ";
	cin >> c;

	cout << "nhap vao so D : ";
	cin >> d;

	cout << "trung binh cong cua 4 so la: " << (a + b + c + d) / 4 << endl;

	system("pause");
}