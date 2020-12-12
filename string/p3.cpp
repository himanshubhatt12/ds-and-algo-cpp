//	Character  array to string

#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[] = {'c', 'o', 'd', 'e'};
	int n = sizeof(a)/sizeof(char);
	//using constructor of string class
	string s(a, a+n);

	cout<<s<<endl;
	cout<<s.length()<<endl;

	string p(a, a+2);
	cout<<p<<endl;
	cout<<p.length()<<endl;
	return 0;
}
