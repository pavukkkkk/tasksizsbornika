#include <iostream>
using namespace std;

int main()
{
    int m[10000];
    int n,a;
    long long s=0;
    cout << "vvedite kolichestvo elementov: ";
    cin >> n;
    cout << "vvedite elementi : "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> a;
        *(m+i) = a;
    }
    for (int i = 0; i < n; i++) {

        if (*(m + i) < 0) {
            s += *(m + i);
        }
    }
    cout <<"summa otricatelnih: "<< s;
}

