#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define vi vector<int>
#define pi pair<int, int>
#define vl vector<ll>
const ll INF  = 1e11+7;


void dijkstra(vector<vector<pi>>& adj, int s, int e, vi& p)
{
	int n = adj.size();
	set<pair<ll, int>> q;
	
	vl d(n+1, INF);
	q.insert({0, s});
	d[s] = 0;

	while(!q.empty())
	{
		int v = q.begin()->second;
		ll ds = d[v];
		
		q.erase(q.begin());

		for(auto& nb: adj[v])
		{
			int ewt = nb.second;
			int vt = nb.first;
			if(ds+ewt<d[vt])
			{
				p[vt] = v;
 				q.erase(make_pair(d[vt], vt));
				d[vt] = ds+ewt;
				q.insert(make_pair(d[vt], vt));
			}
		}
	}
}





int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n, m;
	cin>>n>>m;

	vector<vector<pi>> adj(n+1, vector<pi> ());

	for(int i = 0;i<m;i++)
	{
		int s, e, w;
		cin>>s>>e>>w;
		adj[s].push_back({e, w});
		adj[e].push_back({s, w});
	}
	vl d;
	vi p(n+1, -1);
	dijkstra(adj, 1, n, p);
	vector<int> path;

	int nxt = n;
	if(p[nxt] == -1)
	{
		cout<<-1;
		return 0;
	}
	while(nxt != -1)
	{
		path.push_back(nxt);
		nxt = p[nxt];
	}

	for(auto it = path.rbegin();it != path.rend();it++)
	{
		cout<<(*it)<<" ";
	}
	return 0;
}
