#include <iostream>
using namespace std;
long double eps = pow(10, -9);

double f1(double x) {
	if (x > 0+eps) {
		return x;
	}
	else if(x < 0 +eps && x +eps > -1) {
		return 0;
	}
	else if (x +eps < -1) {
		return x * x;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "введите диапазон: ";
	double a, b, h;
	cin >> a >> b;
	cout << "введите шаг: ";
	cin >> h;
	for (double i = a; i < b + eps; i += h) {
		cout << "f(" << i << ")=" << f1(i) << endl;
	}
}
