#include <iostream>
using namespace std;

int main()
{
	long double eps = pow(10, -6);
	setlocale(LC_ALL, "Russian");
	cout << "введите диапазон: ";
	double a, b, h;
	cin >> a >> b;
	cout << "введите шаг: ";
	cin >> h;
	for (double i = a; i < b +eps; i += h) {
		if (i - 1 > 0+eps) {
			cout <<"f("<<i<<")="<< log(i - 1) << endl;
		}
		else {
			cout << "при значении х= " << i << " фунцкия не определена "<<endl;
		}
	}
}
