#include <iostream>
using namespace std;

int main()
{
    int n, a,g,v;
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
    if (s > 99 && s < 1000) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

