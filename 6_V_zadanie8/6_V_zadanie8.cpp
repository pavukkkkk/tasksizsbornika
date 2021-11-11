#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, b,c, k;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    cout << "vvedite chislo: ";
    cin >> c;
    cout << "vvedite massiv: " << endl;
    int* a = new int[n * 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int h = 0;
    while (h < n)
    {
        if (a[h]%2 == 0) {
            for (int i = n; i > h; i--) {
                a[i] = a[i - 1];
            }
            n++;
            a[h ] = c;
            h++;
        }
        h++;
    }

    cout << "noviy massiv: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}