#include <iostream>
using namespace std;
int main()
{
	long double x, n, p = 0, b,a;
	cout << "vvedite x: ";
	cin >> x;
	cout << "vvedite k: ";
	cin >> n;
	b = x;
	for (long long i = 2; i <= n+1; i++) {
		p += b;
		b = b * x * x/((2*i-1)*(2*i-2));
	}
	cout << "p= " << p << endl;
}
