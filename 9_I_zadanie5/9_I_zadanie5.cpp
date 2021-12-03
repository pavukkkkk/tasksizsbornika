#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main()
{
    ifstream in("f.txt");
    string s;
    long int m=0,k = 0,i=0;
    while (getline(in, s))
    {
        i++;
        if (m < s.length()) {
            m = s.length();
            k = i;
        }
        
    }
    cout << k;
    in.close();
    return 0;
}
