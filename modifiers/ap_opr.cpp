//  APPEND
//  operator +=
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "he";

	/*
	adding c style string
	operator+= (const char* s);
	*/

	s += "llo";
	cout<<s<<endl;

	/*
	adding character
	operator+= (char c);
	*/
	s += 'i';
	cout<<s<<endl;
	
	/*
	adding another c++ string
	operator+= (const string& str);
	*/
	string p = "Bye";
	s += p;
	cout<<s<<endl;

	return 0;
}
