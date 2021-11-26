#include <iostream>
using namespace std;

int main()
{
    int n, a,v;
    long long s = 1;
    cin >> v;
    if (v == 0) {
        cout << "vvedite kolichestvo elementov: ";
        cin >> n;
        int* m = new int[n];
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
        int u;
        cout << "vvedite kolichestvo strochek: ";
        cin >> n;
        cout << "vvedite kolichestvo stolbcov: ";
        cin >> u;
        cout << "vvedite elementi : " << endl;
        int** w = new int* [n];
        for (int i = 0; i < n; i++) {
            w[i] = new int[u];
            for (int j = 0; j < u; j++) {
                cin >> w[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < u; j++) {
                s*= w[i][j];
            }
        }
    }
    if (abs(s) > 99 && abs(s) < 1000) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
/*
 
 vvedite kolichestvo strochek: 2
 vvedite kolichestvo stolbcov: 3
 vvedite elementi :
 1 1 1 -123 1 1
 YES
 
 vvedite kolichestvo strochek: 2
 vvedite kolichestvo stolbcov: 1
 vvedite elementi :
 2 49
 NO
 */
