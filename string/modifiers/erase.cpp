#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "helloworld";
	
	/*
	Erase a single character

	erase (const_iterator p);
	*/
	s.erase(s.begin()+1);
	cout<<s<<endl;  // e gets removed
	//"hlloworld"

	/*
	Erase a sequence

	erase (size_t pos = 0, size_t len = npos);

	from pos erase len characters
	*/

	s.erase(1, 3); // "hworld"
	cout<<s<<endl;

	/*
	Erase a range 

	erase (const_iterator first, const_iterator last);

	[first, last)

	*/
	string a = "helloworld";

	a.erase(a.begin()+1, a.begin()+4); //"howorld"

	cout<<a<<endl;

	return 0;
}

