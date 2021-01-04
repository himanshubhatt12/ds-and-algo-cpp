#include<bits/stdc++.h>
using namespace std;

int main()
{
	bitset<8> b(6);
	cout<<b<<endl;

	string s = b.to_string();
	cout<<"string: "<<s<<endl;

	int a = b.to_ulong();
	cout<<"Integer: "<<a<<endl;

	int c = b.to_ullong();
	cout<<"Integer: "<<c<<endl;
	return 0;
}