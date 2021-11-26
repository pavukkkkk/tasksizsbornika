#include <iostream>
#include <iomanip>
using namespace std;
int** vvod(int n,int k) {
    int** m = new int* [n];
    cout << "vvedite maricu: " << endl;
    for (int i = 0; i < n; i++) {
        m[i] = new int[k];
        for (int j = 0; j < k; j++) {
            cin >> m[i][j];
        }
    }
    return m;
}

void vivod(int** m, int n, int k) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}


int main()
{
    int n, k, p, a = 0;
    cout << "vvedite razmer matrici: ";
    cin >> n >> k;
    int** m = vvod(n, k);
    cout << "matrica:  " << endl;
    vivod(m, n, k);

    int j = 0;
    while (j < k) {
        if (m[0][j] > m[n - 1][j]) {
            for (int u = 0; u < n; u++) {
                for (int g = j; g < k - 1; g++) {
                    m[u][g] = m[u][g + 1];
                }
            }
            k--;
        }
        else {
            j++;
        }

    }
    cout << "novaya matrica:  " << endl;
    vivod(m, n, k);
    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

}
/*
 vvedite razmer matrici: 3 3
 vvedite maricu:
 1 2 3
 4 5 6
 7 8 9
 matrica:
 1    2    3
 4    5    6
 7    8    9
 novaya matrica:
 1    2    3
 4    5    6
 7    8    9
 */
/*
 vvedite razmer matrici: 3 4
 vvedite maricu:
 1 2 3 4
 8 7 6 5
 9 10 11 12
 matrica:
 1    2    3    4
 8    7    6    5
 9    10    11    12
 novaya matrica:
 1    2    3    4
 8    7    6    5
 9    10    11    12
 */
/*
 vvedite razmer matrici: 3 3
 vvedite maricu:
 1 7 3
 0 0 0
 3 2 5
 matrica:
 1    7    3
 0    0    0
 3    2    5
 novaya matrica:
 1    3
 0    0
 3    5
 */
