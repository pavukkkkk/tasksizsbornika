#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
int main()
{
    string s,s1;
    cout << "vvedite stroku: ";
    cin >> s;
    cout << "vvedite podstroku: ";
    cin >> s1;
    long long int i = 0,k=0;
 
    while (true) {
        i = s.find(s1, i);
        if (i<s.size()) {
            k++;
            i++;
        }
        else {
            break;
        }
    }
    cout << "kolichestvo vhojdeniy: ";
    cout << k;
}


