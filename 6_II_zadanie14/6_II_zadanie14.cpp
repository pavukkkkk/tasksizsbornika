#include <iostream>
using namespace std;

int main()
{
    int n, a, g,k=0,ma=0;
    long long s = 0;
    cout << "vvedite kolichestvo elementov: ";
    cin >> n;
    int* m = new int[n];
    cout << "vvedite elementi : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a;
        *(m + i) = a;
    }
 
    for (int i = 0; i < n; i++) {

        if (m[i]<0) {
            if (k == 0 || m[i] > ma) {
                ma = m[i];
                k = 1;
            }
        }
    }
    delete[] m;
    cout << "max otricatelniy : " << ma;
}