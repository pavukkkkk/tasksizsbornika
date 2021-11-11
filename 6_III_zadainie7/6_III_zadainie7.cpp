#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, a, b;
    double s = 0;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    int** m = new int* [n];
    cout << "vvedite maricu: "<<endl;
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    int* d = new int[n];
    if (n % 2 == 0) {
        d = m[n / 2 - 1];
        m[n / 2 - 1] = m[n / 2];
        m[n / 2] = d;
    }
    else {
        d = m[0];
        m[0] = m[n / 2];
        m[n / 2] = d;
    }

    cout << "novaya matrica:  ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}