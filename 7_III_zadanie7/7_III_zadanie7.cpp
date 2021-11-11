#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
int main()
{
    string s;
    char s1;
    cout << "vvedite stroku: ";
    getline(cin,s);
    cout << "vvedite peovuyu bukvu: ";
    cin >> s1;
    long long int i = 0, k = 0;

    while (true) {
        i = s.find(" ", i);
        if (i < s.size()) {
            i++;
            if (s[i]==s1)
            k++;
            i++;
        }
        else {
            break;
        }
    }
    cout << "kolichestvo slov: ";
    cout << k;
}
