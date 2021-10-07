#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "ВВЕДИТЕ НОМЕР КАРТЫ: ";
	int a;
	cin >> a;
	switch (a) {
	case 6: cout << "ШЕСТЕРКА"; break;
	case 7: cout << "СЕМЕРКА"; break;
	case 8: cout << "ВОСЬМЕРКА"; break;
	case 9: cout << "ДЕВЯТКА"; break;
	case 10: cout << "ДЕСЯТКА"; break;
	case 11: cout << "ВАЛЕТ"; break;
	case 12: cout << "ДАМА"; break;
	case 13: cout << "КОРОЛЬ"; break;
	case 14: cout << "ТУЗ"; break;
	}
}