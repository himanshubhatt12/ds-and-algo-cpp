#include<bits/stdc++.h>
using namespace std;

int main()
{
	bitset<8> b1(11);

	cout<<b1<<endl;

	cout<<"Total bits: "<<b1.size()<<endl;
	cout<<"Number of 1's "<<b1.count()<<endl;

	return 0;
}
