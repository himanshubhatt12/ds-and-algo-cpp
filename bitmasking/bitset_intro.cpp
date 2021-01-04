#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Initializing using numbers
	// This gives the binary representation of numbers
	bitset<8> b1;
	cout<<b1<<endl;

	bitset<16> b2(5);
	cout<<b2<<endl;

	b1[0] = 1;
	b1[1] = 1;
	cout<<b1<<endl;

	// negative numbers are represented as 2's complement

	bitset<8> bn(-1);
	cout<<bn<<endl;

	// Initializing using c style string

	bitset<8> b3("010101");
	cout<<b3<<endl;

	const char* s1 = "10101";
	bitset<8> b4(s1);
	cout<<b4<<endl;

	// Initializing using c++ strings

	string s2 = "10001";
	bitset<8> b5(s2);
	cout<<b5<<endl;


	return 0;
}
