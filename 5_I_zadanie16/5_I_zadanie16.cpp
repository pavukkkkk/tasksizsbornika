#include <iostream>
using namespace std;
int main()
{
	long double x, n, p=0, b;
	cout << "vvedite x: ";
	cin >> x;
	cout << "vvedite n: ";
	cin >> n;
	b = x;
	for (long long i = 1; i <= n; i++) {
		p += (i*2-1)*b;
		b = b * x * x;
	}
	cout << "p= " << p << endl;
}
