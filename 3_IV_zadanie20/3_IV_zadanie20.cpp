

#include <iostream>
using namespace std;

int main()
{
    int A = 5;
    int C = 3;
    for (; A > -2; A-=1) {
        int B = 0;
        for (int B=0; B < A; B++) {
            cout << "2 ";
        }
        cout << endl;
        int D = C;
        for (int B=0; B < A; B++) {
            cout << D++<<" ";
        }
        cout << endl;
        C -= 1; 
    }
}

