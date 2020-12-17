#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Initialization 1
	string s1("Hello world");
	cout<<s1<<endl;

	//Initialization 2
	/*
	 start from index 1 and take next 3 characters
	*/
	string s2(s1, 1, 3);
	cout<<s2<<endl;

	//Initialization 3
	/*
	Repeating a character certain number of times
	*/
	string s3(6, 'K');
	cout<<s3<<endl;

	//Initialization 4
	/*
	Range initialization
	*/
	string s4(s3.begin(), s3.begin()+3);
	cout<<s4<<endl;

	//Initialization 5
	string s5 = s4;
	cout<<s5<<endl;
	return 0;
}
