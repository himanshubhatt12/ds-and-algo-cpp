#include<bits/stdc++.h>
using namespace std;

class comp{
	public:
		bool operator () (int f, int s)
		{
			return f>s;
		}
};

void showpq(priority_queue<int, vector<int>, comp> pq)
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
	priority_queue<int, vector<int>, comp> pq;
	pq.push(8);
	pq.push(10);
	pq.push(2);
	pq.push(40);
	pq.push(20);
	showpq(pq);

	return 0;
}