#include<bits/stdc++.h>
using namespace std;

using Edge = pair<int, int>;

class Graph{
	public:
		vector<vector<int>> adj_list;
		int vertices;
		Graph(vector<Edge>& e, int n)
		{
			vertices = n;
			//expanding the size of vector to accomodate vertices
			adj_list.resize(n);
			//assuming undirected graph
			for(auto& i: e)
			{
				adj_list[i.first].push_back(i.second);
				adj_list[i.second].push_back(i.first);
			}
		}
		void printGraph()
		{
			vector<vector<int>>& ad = adj_list;
			for(int i = 0;i<vertices;i++)
			{
				cout<<i<<"---->";
				for(int j: ad[i])
				{
					cout<<j<<" ";
				}
				cout<<endl;
			} 
			cout<<endl;
		}
};

void dfs(Graph & g, int source, bool* visited)
{
	//empty graph
	if(g.vertices == 0)
		return;
	vector<vector<int>>& ad_lst = g.adj_list;
	cout<<source<<" ";
	//mark current vertex as visited
	visited[source] = true;

	//exploration of neighbours
	for(int i: ad_lst[source])
	{
		if(!visited[i])
			dfs(g, i, visited);
	}
}

void dfs_iterative(Graph & g, int source)
{
	stack<int> s;
	int n = g.vertices;
	bool visited[n];
	for(auto& i:visited) i = false;
	vector<vector<int>>& alist = g.adj_list;
	s.push(source);
	while(!s.empty())
	{
		int cv = s.top();
		if(!visited[cv])
		{
			visited[cv] = true;
			cout<<cv<<" ";
		}
		s.pop();
		//exploring the neighbours
		for(int i:alist[cv])
		{
			if(!visited[i])
				s.push(i);
		}
	} 
	cout<<endl;
}


int main()
{
	//constructing user defined graph
	vector<Edge> edges; //to store edges
	int n, e;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	cout<<"Enter the number of edges\n";
	cin>>e;
	cout<<"Enter the edges\n";
	for(int i = 0;i<e;i++)
	{
		int start, end;
		cin>>start>>end;
		Edge e = make_pair(start, end);
		edges.push_back(e);
	}


	Graph g1(edges, n);


	cout<<"Your graph is"<<endl;
	g1.printGraph();


	bool visited[n];
	for(bool& i: visited) i = false;
	cout<<"DFS traversal"<<endl;
	dfs(g1, 0, visited);
	cout<<endl;
	cout<<"DFS traversal iterative"<<endl;
	dfs_iterative(g1, 0);
}
