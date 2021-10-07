#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	cout << fixed << setprecision(6);
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");
	double x, y;
	cout << "ВВЕДИТЕ КООРДИНАТЫ ТОЧКИ: ";
	cin >> x >> y;
	if ((y >= -1*x) && x*x+y*y<=100){
		cout << "YES";

	}
	else {
		cout << "NO";
	}
}
//тесты
//x=0 y=0 ответ YES
//x=-10 y=0 ответ NO
//x=5 y =-6 ответ NO
