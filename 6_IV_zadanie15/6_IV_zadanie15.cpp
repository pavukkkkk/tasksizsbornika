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
    int n,k1,k2,s;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    cout << "vvedite nomer k1 & k2(nomera vkluchitelno): ";
    cin >> k1 >> k2;
    int** m = vvod(n);
    cout<<"Ishodnaya matrica: \n";
    vivod(m,n);
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
/*
 vvedite razmer marici n: 3
 vvedite nomer k1 & k2(nomera vkluchitelno): 1 2
 vvedite maricu:
 1 2 3
 4 5 6
 7 8 9
 Ishodnaya matrica:
 novaya matrica:
 1    2    3
 4    5    6
 7    8    9
 massiv proizvedenyi: 4 10 18
 vvedite razmer marici n: 3
 vvedite nomer k1 & k2(nomera vkluchitelno): 1 1
 vvedite maricu:
 1 2 3
 4 5 6
 7 8 9
 Ishodnaya matrica:
 novaya matrica:
 1    2    3
 4    5    6
 7    8    9
 massiv proizvedenyi: 1 2 3
 vvedite razmer marici n: 2
 vvedite nomer k1 & k2(nomera vkluchitelno): 1 2
 vvedite maricu:
 0 1
 2 0
 Ishodnaya matrica:
 novaya matrica:
 0    1
 2    0
 massiv proizvedenyi: 0 0
 */
