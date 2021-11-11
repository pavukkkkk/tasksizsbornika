#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,k1,k2,s;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    cout << "vvedite nomer k1 & k2(nomera vkluchitelno): ";
    cin >> k1 >> k2;
    int** m = new int* [n];
    cout << "vvedite  maricu: "<<endl;
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    int* d = new int[n];
    for (int i = 0; i < n; i++) {
        s = 1;
        for (int j = k1-1; j < k2; j++) {
            s *= m[i][j];
            }
        *(d + i) = s;
        }
    cout << "massiv proizvedenyi: ";
    for (int i = 0; i < n; i++) {
        cout<<*(d+i)<<" ";
    }
    cout << endl;
}