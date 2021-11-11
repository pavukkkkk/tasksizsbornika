#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, b,k1,k2,k;
    cout << "vvedite razmer marici n: ";
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
    k = k2 - k1;
    for (int j = k1-1; j < n-1; j++) {
                a[j] = a[j + k+1];
            }
    cout << "novaya matrica: " << endl;
    for (int i = 0; i < n-k-1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}