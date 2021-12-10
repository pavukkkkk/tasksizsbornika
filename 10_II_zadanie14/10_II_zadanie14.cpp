#include <iostream>
using namespace std;
#include "fstream"
#include "string"
#include "cmath"
ifstream in("input.txt");
ofstream out("output.txt");
int n;

struct vec {
    string nazv;
    double cena, nizh, verh;
    double f(int n) {
        return cena - cena / 100 * n;

    }
    void inputc(){
        in >> nazv >> cena >> nizh >> verh;
    }
    void outc(int n){
        out<<nazv <<" "<< f(n)<<" " << nizh<<" " <<verh << endl;
    }
};
int main()
{
    vec* a = new vec[1000000];
    
    int i = 0;
    
    cout << "vvedite x%: ";
    cin >> n;
    a[i].inputc();
    while (!in.eof()) {
        a[i].outc(n);
        i++;
        a[i].inputc();
       
    }
    in.close();
    out.close();
    return 0;
}
