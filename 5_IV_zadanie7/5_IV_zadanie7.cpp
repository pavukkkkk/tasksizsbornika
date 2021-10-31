#include <iostream>
using namespace std;
int main()
{
	long double x, n, p = 0, b = 0.9, e, a = 0, k = 0, t, h = 0.1;
	t = pow(10, -9);

	cout << "vvedite e: ";
	cin >> e;
	int i = 1;
	cout << "\t" << "x" << "\t" << "F(x)" << "\t\t" << "n"<<endl;
	for (a; a <= b; a += h) {
		n = 1;
		x = a;
		p = 0;
		cout << i << ") ";
		i++;
		int k = 0;
		while (abs(n) + t > e) {
			k++;
			p += n;
			n = n* x / 3;
		}
		cout << "\t" << a <<"\t"<< p << "\t\t" << k<< endl;
	}
}
