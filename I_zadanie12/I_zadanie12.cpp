
#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    cout << fixed << setprecision(10);
    double x,y;
    setlocale(LC_ALL, "");
    cout << "ВВЕДИТЕ Х: ";
    cin >> x;
    cout << "ВВЕДИТЕ Y: ";
    cin >>y;
    cout <<"Значение выражения равно "<<(1 + sin(sqrt(x + 1))) / cos(12 * y - 4)<<endl;
}

//ТЕСТЫ
// X=1.4649, Y==0.98783, S=92447.2
//X=1.4649, Y=0.9878319, S=-1715228.0569541289
//X=1, Y=1, S=-13.6616