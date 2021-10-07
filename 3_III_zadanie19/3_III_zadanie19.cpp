
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "ВЫБЕРИТЕ НОМЕР ЦИКЛА: ";
	int a;
	cin >> a;
	cout << "ТРЕХЗНАЧНЫЕ ЧИСЛА, У КОТОРЫХ РАВНЫ ПЕРВАЯ И ПОСЛЕДНЯЯ ЦИФРА: " << endl;
	int i=100;
	if (a==3)
	{ 
		for (i = 100; i < 1000; i++) {
			if (i / 100 == i % 10) {
				cout << i << endl;
			}
		}
	}
	else if (a == 1)
	{
		while (i <1000) {
			if (i / 100 == i % 10) {
				cout << i << endl;
			}
			i++;
		}
	}
	else if (a == 2)
	{
		do {
			if (i / 100 == i % 10) {
				cout << i << endl;
			}
			i++;
		}while (i < 1000);
	}
}

