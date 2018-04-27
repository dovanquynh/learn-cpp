#include <iostream>
#include <math.h>

using namespace std;

void main() {
	float a;
	float b;
	float c;
	float delta;

	cout << "Nhap vao so A:";
	cin >> a;
	cout << "Nhap vao so B: ";
	cin >> b;
	cout << "Nhap vao so C:";
	cin >> c;
	delta = b*b - 4 *a *c;

	if (delta == 0) {
		cout << "phuong trinh co nghiem kep" << -b / (2 * a);
	}
	else if (delta > 0) {
		cout << "phuong trinh co 2 nghiem phan biet" <<"x1: " << (-b - sqrt(delta) / (2 * a))<< "x2: " << (-b + sqrt(delta) / (2 * a));
	}
	else {
		cout << "phuong trinh vo nghiem";
	}
	system("pause");

}