#include <iostream>
using namespace std;

int main()
{
    int n, a,g,v;
    long long s = 1;
    cin >> v;
    cout << "vvedite kolichestvo elementov: ";
    cin >> n;
    int* m = new int[n];
    if (v == 0) {
        int m[5000];
        cout << "vvedite elementi : " << endl;
        for (int i = 0; i < n; i++) {
            cin >> a;
            *(m + i) = a;
        }

        for (int i = 0; i < n; i++) {
                s *= *(m + i);
            
        }
    }
    else{
        int** w = new int* [1];
        w[0] = new int[n];
        cout << "vvedite elementi : " << endl;
        for (int i = 0; i < n; i++) {
            cin >> a;
            w[0][i] = a;
        }

        for (int i = 0; i < n; i++) {
            cout << w[0][i];
            s *= w[0][i];
        }
    }
    cout << "kolichestvo par : " << s;
}

