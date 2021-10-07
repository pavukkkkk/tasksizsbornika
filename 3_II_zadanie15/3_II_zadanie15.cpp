
#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	cout << fixed << setprecision(6);
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");
	char A;
	double a, b, c;
	cout << "ВВЕДИТЕ КОД ФИГУРЫ: ";
	cin >> A;
	if (A == 'к') {
		cout << "ВВЕДИТЕ РАДИУС ОКРУЖНОСТИ: ";
		cin >> a;
		cout <<"ПЛОЩАДЬ ФИГУРЫ РАВНА "<< acos(-1) * pow(a, 2);
	}
	else if (A == 'п') {
		cout << "ВВЕДИТЕ СТОРОНЫ ПРЯМОУГОЛЬНИКА: ";
		cin >> a >> b;
		cout << "ПЛОЩАДЬ ФИГУРЫ РАВНА " << a * b;
	}
	else if (A == 'т') {
		cout << "ВВЕДИТЕ СТОРОНЫ ТРЕУГОЛЬНИКА: ";
		cin >> a >> b >> c;
		double p;
		p = (a + b + c) / 2.;
			cout << "ПЛОЩАДЬ ФИГУРЫ РАВНА " << sqrt(p*(p-a)*(p-c)*(p-b));
	}

}
//тесты
//т 3 4 5 S=6.000000
//к 100 S=31415.926536
//п 0.5 90 S =45.000000

