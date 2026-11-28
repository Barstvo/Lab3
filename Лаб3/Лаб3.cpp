#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double x; double n = 1.0; double d = 1.0;
	cout << "Введите x: ";
	cin >> x;
	for (int k = 1; k <= 63; k += 2) {
		if (x == k) {
			cout << "нельзя делить на ноль. x не должен быть равен k";
			return 1;
		}
		n *= (x - (k + 1));
		d *= (x - k);
	}
	double y = n / d;
	cout << "y = " << y;
	return 0;
}
//test