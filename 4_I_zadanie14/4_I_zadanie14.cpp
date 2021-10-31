#include <iostream>
using namespace std;

long double f1(long double x1, long double x2) {
		return (((2. / 3) * x1)- ((1. / 3) * pow(x2, 2)));
	}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "введите количество: ";
	long double h,b1=2,b2=1,b;
	cin >> h;
	for (int i = 1; i <= h; i ++) {
		cout <<"b" <<i<<"= "<< b1 << endl;
		b= f1(b1,b2);
		b1 = b2;
		b2 = b;
	}
}