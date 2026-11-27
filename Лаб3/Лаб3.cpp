#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	long double a, x, y;

	cout << "Введите x и y:";
	cin >> a >> x;
	y = a + x;

	for (int i = 0; i < 7; ++i)
		y = a + y * y;

	cout << y;
	return 0;
}