#include<bits/stdc++.h>
using namespace std;

/*
Heapify = constructing heap in O(n) from given array
*/

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
	vector<int> v= {20, 30, 10, 50, 40};
	priority_queue<int> pq(v.begin(), v.end());
	cout<<"Heap made from vector"<<endl;
	showpq(pq);

	set<int> s = {1, 4, 3, 5, 2, 3};
	priority_queue<int> pq1(s.begin(), s.end());
	cout<<"Heap made from set"<<endl;
	showpq(pq1);

	int arr[] = {20, 30, 10, 50, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	priority_queue<int> pq3(arr, arr+n);
	cout<<"Heap made from array"<<endl;
	showpq(pq3);

	return 0;
}

           