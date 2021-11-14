#include <iostream>
using namespace std;
#include "fstream";
#include "string";

int main()
{
	ifstream in("f.txt");
	string s;
	int m=0,k = 0,i=0;
	while (in.peek() != EOF)
	{
		i++;
		getline(in, s);
		if (m < s.size()) {
			m = s.size();
			k = i;
		}
		
	}
	cout << k;
	in.close();
	return 0;
}