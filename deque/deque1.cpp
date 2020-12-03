#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int> dq({5, 6, 7}); //constructor with initializer list
	for(auto i:dq)
		cout<<i<<" ";
	cout<<endl;

	dq = {1, 2, 3}; //assignment operator initializer list
	for(auto i:dq)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}
