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
        cout<<m[i]<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {

        if (m[i]<0) {
            if (k == 0 || m[i] > ma) {
                ma = m[i];
                k = 1;
            }
        }
    }
    delete[] m;
    if (k==1){
    cout << "max otricatelniy : " << ma;
    }
    else{
        cout<<"Net otricatelnih";
        
    }
}
/*
 vvedite kolichestvo elementov: 6
 vvedite elementi :
 1 2 3 4 -2 -3
 1    2    3    4    -2    -3
 max otricatelniy : -2
 */
/*
 vvedite kolichestvo elementov: 5
 vvedite elementi :
 1 2 3 4 5
 1    2    3    4    5
 Net otricatelnih
 */
/*
 vvedite kolichestvo elementov: 3
 vvedite elementi :
 1 -1 0
 1    -1    0
 max otricatelniy : -1
 */
