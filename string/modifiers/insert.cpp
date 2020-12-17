#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a = "hello";
	/*Insert single character
		insert (size_t pos, const char* s);
		insert (const_iterator p, char c);
	*/
	a.insert(0, "t");
	cout<<a<<endl; // "thello"
	a.insert(a.begin()+2, 'y'); // "thyello"
	cout<<a<<endl;

	/*
	Insert c style string.
		insert (size_t pos, const char* s);
	*/
	string b = "hello";

	b.insert(1, "ee");

	cout<<b<<endl; //"heeello"

	const char* s = "hii"; //for mutable string use char s[] = "hii";
	b.insert(0, s);
	cout<<b<<endl; //hiiheeello

	/*
	Insert c++ string
	*/
	string c = "sing";
	string d = "tr";

	c.insert(1, d); //"string"
	
	cout<<c<<endl;

	return 0;
}