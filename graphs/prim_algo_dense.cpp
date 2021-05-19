// Prim's MST algorithm for dense graphs

// Time complexity : O(n^2) 
// assuming the graph nodes numbering will start from 0

#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<vi>
#define vb vector<bool>

const int INF = 1e9;

int prim_algo(vii& adj, vi& par)
{
	int n = adj.size();

	vi mew(n, INF);

	vb selected(n, false);

	vi parent(n, -1);

	int total = 0;

	mew[0] = 0;

	for(int i = 1;i<=n;i++)
	{

		// selecting minimum out of all edges
		int mv = -1;
		for(int j = 0;j<n;j++)
		{
			if((!selected[j]) && ((mv == -1) || mew[j]<mew[mv]))
			{
				mv = j;
			}
		}
		if(mew[mv] == INF)
		{
			cout<<"NO MST exists";
			return INF;
		}
		selected[mv] = true;
		total += mew[mv];

		for(int j = 0;j<n;j++)
		{
			// this step helps to avoid cycle formation
			if(!selected[j] && (adj[mv][j] < mew[j]))
			{
				mew[j] = adj[mv][j];
			}
		}

	}
	return total;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, m;
	cin>>n>>m;

	vi h(n, INF);
	vii adj(n, h);

	for(int i = 0;i<m;i++)
	{
		int s, e, w;
		cin>>s>>e>>w;

		adj[s][e] = w;
		adj[e][s] = w;
	}

	vector<int> par;
	int min_cost = prim_algo(adj, par);

	cout<<"Cost of MST: "<<min_cost<<endl;

	return 0;
}
