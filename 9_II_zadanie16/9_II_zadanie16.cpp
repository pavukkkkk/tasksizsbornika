#include <iostream>
using namespace std;
#include "fstream"
#include "string"

int main()
{
    ifstream in("f.txt");
    ofstream out("g.txt");
    int s1,s2;
   
    while (in>>s1>>s2)
    {
        
        out << (s1+s2)/2. << endl;


    }
    in.close();
    out.close();
    return 0;
}

