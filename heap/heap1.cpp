#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int> pq)
{
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
}
int main()
{
	priority_queue<int> pq;
	pq.push(20);
	pq.push(30);
	pq.push(10);
	pq.push(50);
	pq.push(40);
	showpq(pq);
	return 0;
}