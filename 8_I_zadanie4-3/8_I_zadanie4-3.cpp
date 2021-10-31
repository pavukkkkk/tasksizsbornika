#include <iostream>
using namespace std;
int f(int n) {
    double s = 0;
    while (n > 0) {
        s += n % 10;
        n = n/10;
    }
    return s;
}
int main()
{
    int a, b;
    cout << "vvedite a, b: ";
    cin >> a >> b;
    cout << "chisla s nechetnoi summoi: " << endl;
    for (; a <= b; a++) {
        if (f(a) % 2 != 0) {
            cout << a  << endl;
        }
    }
}

