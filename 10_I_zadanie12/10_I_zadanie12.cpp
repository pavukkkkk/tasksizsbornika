#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <cmath>

struct point {
    int x, y;
    void inputxy(){
        cin>>x>>y;
    }
    
};
int main(){
    int k=0;
    double  r;
    cout << "vvedite kol-vo tochek: ";
    cin >>k;
    cout << "vvedite radius: ";
    cin >> r;
    
    point* a = new point[k];
    cout << "vvedite koordinati: ";
    a[0].x = 0;
    a[0].y = 0;
    for (int i = 0; i < k;i++) {
        a[i].inputxy();
    }
    int vsego=0;
    int t=0;
   int  minvs=100000000;
    for (int i = 0; i < k;i++) {
        vsego=0;
        for (int j = 0; j < k;j++) {
            if (pow(a[j].x - a[j].x, 2) + pow(a[j].y - a[i].y, 2) <= r * r)
            {
                vsego++;
            }
        }
        
            if (minvs>vsego){
                t=i;
                minvs=vsego;
            }
    
    }
    cout << "luchsaya tochka: ";
    cout<< a[t].x<<" "<< a[t].y<<endl;
}

/*
 vvedite kol-vo tochek: 5
 vvedite radius: 2
 vvedite koordinati: 5 10
 0 0
 0 1
 1 0
 1 1
 luchsaya tochka: 5 10
 
 
 vvedite kol-vo tochek: 3
 vvedite radius: 1
 vvedite koordinati: 0 0
 1 1
 2 3
 
 luchsaya tochka: 2 3
 */
 
 
