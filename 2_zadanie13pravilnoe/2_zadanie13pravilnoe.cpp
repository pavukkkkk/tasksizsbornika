#include <iostream>
using namespace std;

void f(int &j) {
    j = (j % 10) * 100 + j / 10 % 10 * 10 + j / 100;
}

int main()
{
    int t;
    cin >> t;
    if (99 < t && t < 1000) {
        f(t);
    }
    cout << t;
    }
    
//100 otvet: 1
//123 otvet: 321
//120 otvet: 21