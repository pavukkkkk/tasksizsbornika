#include <iostream>
#include <iomanip>
using namespace std;

int** vvod(int n) {
    int** m = new int* [n];
    cout << "vvedite maricu: " << endl;
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    return m;
}

int main()
{
    int n,k1,k2,s;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    cout << "vvedite nomer k1 & k2(nomera vkluchitelno): ";
    cin >> k1 >> k2;
    int** m = vvod(n);
    int* d = new int[n];
    for (int j = 0; j < n; j++) {
        s = 1;
        for (int i = k1-1; i < k2; i++) {
            s *= m[i][j];
            }
        *(d + j) = s;
        }
    cout << "massiv proizvedenyi: ";

    for (int i = 0; i < n; i++) {
        cout<<*(d+i)<<" ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;
    delete[] d;
}
