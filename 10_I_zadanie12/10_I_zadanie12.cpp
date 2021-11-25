#include <iostream>
using namespace std;
#include "fstream";
#include "string";
#include "cmath";

struct point {
	int x, y;
};
int main(){
	double n, r;
	cout << "vvedite kol-vo tochek: ";
	cin >>n;
	cout << "vvedite radius: ";
	cin >> r;
	
	point* a = new point[n];
	cout << "vvedite koordinati: ";
	a[0].x = 0;
	a[0].y = 0;
	for (int i = 1; i < n+1;i++) {
		cin >> a[i].x>>a[i].y;
		while  (pow(a[i].x - a[0].x, 2) + pow(a[i].y - a[0].y, 2) <= r * r) {
			a[0].x += 5;
			a[0].y += 5;
		}
	}
	cout << "koordinati tochki: ";
	cout<< a[0].x<<" "<< a[0].y<<endl;
}
/*
3
5
0 0
1 2
-3 -4
10 10*/
/*1
0
0 0
5 5*/
/*
5
100
12 20
-40 4
35 2
78 9
1 1
110 110*/
