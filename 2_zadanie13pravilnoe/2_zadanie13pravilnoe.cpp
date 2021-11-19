#include <iostream>
using namespace std;

void f(int &j) {
    int e = 1;
    if (j < 0) {
        e = -1;
    }
    j = abs(j);
    j = e*((j % 10) * 100 + j / 10 % 10 * 10 + j / 100);
}

int main()
{
    int t;
    cin >> t;
    if (99 < abs(t) && abs(t) < 1000) {
        f(t);
    }
    cout << t;
    }
    
//100 otvet: 1
//123 otvet: 321
//-120 otvet: -21