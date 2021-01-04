#include<bits/stdc++.h>
using namespace std;

#define M 8

int main()
{
	bitset<M> b1(25);
	bitset<M> b2(18);
	cout<<"25: "<<b1<<endl;
	cout<<"18: "<<b2<<endl;

	// bitwise not
	cout<<"not 25: "<<~b1<<endl;
	cout<<"not 18: "<<~b2<<endl;

	// bitwise or
	cout<<"or: "<<(b1|b2)<<endl;

	// bitwise and
	cout<<"and: "<<(b1&b2)<<endl;

	// bitwise xor
	cout<<"xor: "<<(b1^b2)<<endl;

	// bitwise xnor
	cout<<"xnor: "<<~(b1^b2)<<endl;

	// bitwise left shift
	cout<<"lshift 25: "<<(b1<<1)<<endl;
	bitset<M> ans = (b1<<1);
	cout<<"lshift 25: "<<ans.to_ulong()<<endl;


	//bitwise right shift
	// bitwise left shift
	cout<<"rshift 18: "<<(b2>>1)<<endl;
	bitset<M> ans2 = (b2>>1);
	cout<<"rshift 18: "<<ans2.to_ulong()<<endl;

	return 0;
}