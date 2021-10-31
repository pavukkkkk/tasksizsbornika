#include <iostream>
using namespace std;

int main()
{
    int n, a,g;
    long long s = 0;
    cout << "vvedite kolichestvo elementov: ";
    cin >> n;
    int* m = new int[n];
    cout << "vvedite elementi : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a;
        *(m + i) = a;
    }
    cout << "vvedite chislo : " ;
    cin >> g;
    for (int i = 0; i < n-1; i++) {

        if (abs((*(m + i)  - *(m + i+1)))==g) {
            s ++;
        }
    }
    cout << "kolichestvo par : " << s;
}

