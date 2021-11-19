#include <iostream>
using namespace std;

int main()
{
    int n,a,k=0,v;
    long double s=0;
    cin >> v;
        if (v == 0) {
            cout << "vvedite kolichestvo elementov: ";
            cin >> n;
            cout << "vvedite elementi : " << endl;
            int m[10000];
        for (int i = 0; i < n; i++) {
            cin >> a;
            *(m + i) = a;
        }
        for (int i = 0; i < n; i++) {

            if (*(m + i) < 0) {
                s += *(m + i);
                k++;
            }
        }
        if (k > 0) {
            s = s / k;
        }
        cout << "sred arifm: " << s;
    }
        else {
            int u;
            cout << "vvedite kolichestvo strochek: ";
            cin >> n;
            cout << "vvedite kolichestvo stolbcov: ";
            cin >> u;
            cout << "vvedite elementi : " << endl;
            int w[100][100];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < u; j++) {
                    cin >> w[i][j];
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < u; j++) {

                    if (w[i][j] < 0) {
                        s += w[i][j];
                        k++;
                    }
                }

            }
            if (k > 0) {
                s = s / k;
            }
            cout << "sred arifm: " << s;
        }
}
/*1 2 3 4 5 otvet 0
-1 -2 -3 -4 -5 otvet -3
1 2 -3 -4 5 otvet -3.5*/
