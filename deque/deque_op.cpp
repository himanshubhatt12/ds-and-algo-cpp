#include<bits/stdc++.h>
using namespace std;

void showdq(const deque<int>& dq)
{
	cout<<"Deque is: "<<endl;
	for(const auto& i:dq)
		cout<<i<<" ";
	cout<<endl;
}

int main()
{
	deque<int> dq;
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(30);
	dq.push_front(40);

	showdq(dq);
	cout<<"Front: "<<dq.front()<<endl;
	cout<<"Rear/Back: "<<dq.back()<<endl;

	dq.pop_back();
	dq.pop_back();
	showdq(dq);
	return 0;
}