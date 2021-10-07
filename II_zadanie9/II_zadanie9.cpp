#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    cout << fixed << setprecision(6);
    double S;
    setlocale(LC_ALL, "");
    cout << "ВВЕДИТЕ ПЛОЩАДЬ ПОЛНОЙ ПОВЕРХНОСТИ КУБА S: ";
    cin >> S;
    std::cout << "СТОРОНА КУБА а РАВНА: " << sqrt(S/6);
}
//ТЕСТЫ
// S=600, a=10 
//S=486, a=9
//S=24,a=2