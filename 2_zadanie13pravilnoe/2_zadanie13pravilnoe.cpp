#include <iostream>
using namespace std;

bool treugolnik(long double a, long double b, long double c) {
    if (a + b > c && b + c > a && a + c > b) {
        return true;
    }
    else {
        return false;
    }
}

long double plos(long double a, long double b, long double c) {
    long double p = ((a + b + c) / 2);
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");
    cout << "Введит длины сторон от а до g: ";
    long double s = 0,a,b,c,d,e,f,g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    if (treugolnik(a, b, f) && treugolnik(f, c, g) && treugolnik(g, d, e)) {
        cout << "Площадь фигуры равна " << plos(a, b, f) + plos(f, c, g) + plos(g, d, e);
    }
    else {
        cout << "Фигура невозможна";
    }
    
}
//1 2 3 4 5 6 7 otvet: невозможно
//1 1 1 1 1 1 1 otvet: 1.29904
//0 0 0 0 0 0 0 otvet: невозможно