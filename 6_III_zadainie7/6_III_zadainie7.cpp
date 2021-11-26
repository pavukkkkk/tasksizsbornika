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

void vivod(int** m, int n) {
    cout << "novaya matrica:  " << endl;;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}


int main()
{
    int n;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    int **m = vvod(n);
    vivod(m,n);
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

  
    vivod(m, n);
    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;
}
/*
 vvedite razmer marici n: 3
 vvedite maricu:
 1 2 3
 3 4 5
 6 7 8
 novaya matrica:
 1    2    3
 3    4    5
 6    7    8
 novaya matrica:
 3    4    5
 1    2    3
 6    7    8
 vvedite razmer marici n: 4
 vvedite maricu:
 1 2 3 4
 5 6 7 8
 9 10 11 12
 13 14 15 16
 novaya matrica:
 1    2    3    4
 5    6    7    8
 9    10    11    12
 13    14    15    16
 novaya matrica:
 1    2    3    4
 9    10    11    12
 5    6    7    8
 13    14    15    16
 */
