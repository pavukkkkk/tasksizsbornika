#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, b, c, k;
    cout << "vvedite razmer marici n: ";
    cin >> n;
    cout << "vvedite chislo: ";
    cin >> c;
    cout << "vvedite massiv: " << endl;
    int* a = new int[n * 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int h = n;
    while (h > 0)
    {
        if (a[h] > 0) {
            for (int i = n; i > h; i--) {
                a[i] = a[i - 1];
            }
            n++;
            a[h+1] = c;
            h--;
            break;
        }
        h--;
    }

    cout << "noviy massiv: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}