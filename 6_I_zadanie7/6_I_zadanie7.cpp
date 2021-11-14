#include <iostream>
using namespace std;

int main()
{
    int n,a,k=0,v;
    long double s=0;
    cin >> v;
        cout << "vvedite kolichestvo elementov: ";
        cin >> n;
        cout << "vvedite elementi : " << endl;
        if (v == 0) {
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
            int w[1][1000];
        for (int i = 0; i < n; i++) {
            cin >> a;
            *(*(w)+i) = a;
        }
        for (int i = 0; i < n; i++) {

            if (*(*(w)+i) < 0) {
                s += *(*(w)+i);
                k++;
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
