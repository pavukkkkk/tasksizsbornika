#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, b,k1,k2,k;
    cout << "vvedite razmer massiva n: ";
    cin >> n;
    cout << "vvedite nomer k1 & k2(nomera vkluchitelno): ";
    cin >> k1 >> k2;
    cout << "vvedite massiv: "<<endl;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> b;
        a[i] = b;
    }
    int h = 0;
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
    cout << "novaya matrica: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}