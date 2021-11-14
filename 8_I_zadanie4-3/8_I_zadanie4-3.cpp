#include <iostream>
using namespace std;
int f(int n) {
    double s = 0;
    while (n > 0) {
        s += n % 10;
        n = n/10;
    }
    return s;
}
int main()
{
    int a, b;
    cout << "vvedite a, b: ";
    cin >> a >> b;
    cout << "chisla s nechetnoi summoi: " << endl;
    for (; a <= b; a++) {
        if (f(abs(a)) % 2 != 0) {
            cout << a  << endl;
        }
    }
}

/* 0 10
chisla s nechetnoi summoi:
1
3
5
7
9
10*/
/*-10 10
chisla s nechetnoi summoi:
-10
-9
-7
-5
-3
-1
1
3
5
7
9
10*/
/*-100 100
chisla s nechetnoi summoi:
-100
-98
-96
-94
-92
-90
-89
-87
-85
-83
-81
-78
-76
-74
-72
-70
-69
-67
-65
-63
-61
-58
-56
-54
-52
-50
-49
-47
-45
-43
-41
-38
-36
-34
-32
-30
-29
-27
-25
-23
-21
-18
-16
-14
-12
-10
-9
-7
-5
-3
-1
1
3
5
7
9
10
12
14
16
18
21
23
25
27
29
30
32
34
36
38
41
43
45
47
49
50
52
54
56
58
61
63
65
67
69
70
72
74
76
78
81
83
85
87
89
90
92
94
96
98
100*/