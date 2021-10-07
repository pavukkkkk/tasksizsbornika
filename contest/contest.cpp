#include <iostream>
using namespace std;
#include <iomanip>

int main()
{

	double x, y;
	cin >> x >> y;
	((pow(x,2) + (pow(y,2)) <=4)) &&  !(x<0 && y >0)  ? cout << "Yes" : cout << "No";
}
