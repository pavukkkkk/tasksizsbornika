#include <iostream>
using namespace std;
#include "fstream";
#include "string";

int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	string s1,s2;
	int m = 0, k = 0, i = 0,e;
	while (in.peek() != EOF)
	{
		getline(in, s1);
		getline(in, s2);
		out << (atoi(s1.c_str()) + atoi(s2.c_str()))/2. << endl;


	}
	in.close();
	out.close();
	return 0;
}