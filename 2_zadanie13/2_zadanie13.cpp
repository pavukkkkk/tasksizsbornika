// 2_zadanie13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

double otrezok(double x, double y, double x0, double y0) {
    return sqrt(pow(x - x0, 2) + pow(y - y0, 2));
}
int treugolnik(double a,double b, double c) {
    if (a+b>c && b+c>a && a+c>b) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите координаты 4 точек: ";
    int s=0;
    double x1, x2, x3, x4, y1, y2, y3, y4,a,b,c,d,e,f;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    a = otrezok(x1, y1, x2, y2);
    b= otrezok(x3, y3, x2, y2);
    c = otrezok(x3, y3, x4, y4);
    d = otrezok(x1, y1, x2, y1);
    e = otrezok(x1, y1, x3, y3);
    f = otrezok(x2, y2, x4, y4);
    s += treugolnik(a, b, c);
    s += treugolnik(a, b, d);
    s += treugolnik(a, b, e);
    s += treugolnik(a, b, f);
    s += treugolnik(a, d, c);
    s += treugolnik(a, e, c);
    s += treugolnik(a, f, c);
    s += treugolnik(a, d, f);
    s += treugolnik(a, d, e);
    s += treugolnik(a, f, e);
    s += treugolnik(b, d, c);
    s += treugolnik(b, e, c);
    s += treugolnik(b, f, c);
    s += treugolnik(b, d, f);
    s += treugolnik(b, d, e);
    s += treugolnik(b, e, f);
    s += treugolnik(c, d, e);
    s += treugolnik(c, d, f);
    s += treugolnik(c, e, f);
    s += treugolnik(d, e, f);
    cout << "из отрезков, чьими концами явлются эти точки, можно составить "<< s << " треугольник(ов)";
}


//0 0 3 0 3 -3 0 -3 otvet: 20
//0 0 0 1 0 3 0 5 otvet: 4
//0 0 0 1 0 1000 0 10000000 otvet: 1