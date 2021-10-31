#include <iostream>
using namespace std;
int main()
{
	long double x, n, p = 0, b,e, a,t;
	t = pow(10, -9);
	cout << "vvedite e: ";
	cin >> e;
	b = -1/4.;
	long long i = 1;
	while (abs(b)+t>e){
		p += b;
		i++;
		b /=-4;
	}
	cout << "p= " << p << endl;
}
