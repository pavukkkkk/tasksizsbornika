#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "ВЫБЕРИТЕ НОМЕР ЦИКЛА: ";
	int m;
	cin >> m;
	int A, B;
	cout << "ВВЕДИТЕ ДИАПАЗОН: ";
	cin >> A >> B;
	cout << "ЧЕТНЫЕ ОТРИЦАТЕЛЬНЫЕ ЧИСЛА ИЗ ДИАПАЗОНА: " << endl;
	if (m == 3)
	{
		for (A; (A <= B)&&(A<0); A++) {
			if (abs(A) %2 == 0) {
				cout << A << endl;
			}
		}
	}
	else if (m == 1)
	{
		while ((A <= B) && (A < 0)) {
			if (abs(A)%2 == 0) {
				cout << A << endl;
			}
			A++;
		}
	}
	else if (m == 2)
	{
		do {
			if ((abs(A) % 2 == 0) && A<0) {
				cout << A << endl;
			}
			A++;
		} while ((A <= B) && (A < 0));
	}
}

