#include <iostream>
using namespace std;
#include "fstream"
#include "string"
#include "cmath"
struct vec {
    string nazv;
    double cena, nizh, verh;
    double f(int n) {
        return cena - cena / 100 * n;

    }
};
int main()
{
    vec* a = new vec[1000000];
    ifstream in("input.txt");
    ofstream out("output.txt");
    int i = 0;
    int n;
    cout << "vvedite x%: ";
    cin >> n;
    in >> a[i].nazv >> a[i].cena >> a[i].nizh >> a[i].verh;
    while (!in.eof()) {
        out<< a[i].nazv <<" "<<  a[i].f(n)<<" " << a[i].nizh<<" " << a[i].verh << endl;
        i++;
        in >> a[i].nazv >> a[i].cena >> a[i].nizh >> a[i].verh;
       
    }
    in.close();
    out.close();
    return 0;
}
