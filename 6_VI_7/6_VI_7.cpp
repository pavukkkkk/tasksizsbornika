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
    cout << "novaya matrica:  " << endl;;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int n, k, p, a = 0, b;
    cout << "vvedite razmer matrici: ";
    cin >> n >> k;
    int** m = vvod(n, k);
    int d;
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

    vivod(m, n, k);
    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;

}