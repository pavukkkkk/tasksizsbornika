#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, b,k1,k2;
    cout << "vvedite razmer massiva n: ";
    cin >> n;
    cout << "vvedite chisla k1 & k2( ne vkluchitelno): ";
    cin >> k1 >> k2;
    cout << "vvedite massiv: "<<endl;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> b;
        a[i] = b;
    }
    int h = 0;
    cout << "massiv: " << endl;
    for (int i = 0; i < n; i++) {
            cout<<a[i]<<"\t";
        }
    cout<<endl;
    while (h < n) {
        if (a[h] <k2 && a[h]>k1) {
            for (int j = h; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n = n - 1;
        }
        else {
            h++;
        }
    }
    cout << "noviy massiv: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
/*
 vvedite razmer massiva n: 5
 vvedite chisla k1 & k2( ne vkluchitelno): 1 3
 vvedite massiv:
 1 2 3 4 5
 massiv:
 1    2    3    4    5
 noviy massiv:
 1 3 4 5
 */
/*
 vvedite razmer massiva n: 6
 vvedite chisla k1 & k2( ne vkluchitelno): 3 4
 vvedite massiv:
 1 2 3 4 5 6
 massiv:
 1    2    3    4    5    6
 noviy massiv:
 1 2 3 4 5 6
 */
/*
 vvedite razmer massiva n: 5
 vvedite chisla k1 & k2( ne vkluchitelno): 0 6
 vvedite massiv:
 1 2 3 4 5
 massiv:
 1    2    3    4    5
 noviy massiv:

 */
