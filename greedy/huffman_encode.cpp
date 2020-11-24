#include<bits/stdc++.h>
using namespace std;


struct Node{
	char c; //character 
	int f; //frequency
	Node* left;
	Node* right;

	Node()
	{
		this->c = '#';
		this->f = 0;
	}
	Node(char c, int f)
	{
		this->c = c;
		this->f = f;
		this->left = NULL;
		this->right = NULL;
	}
};

class comp{
public:
	bool operator () (Node* first, Node* second)
	{
		return first->f > second->f;
	}
};

void showarr(vector<Node*> arr, int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]->c<<"-->"<<arr[i]->f<<endl;
	}
}

void showpq(priority_queue<Node*, vector<Node*>, comp> pq)
{
	cout<<"Priorty queue is "<<endl;
	while(!pq.empty())
	{
		Node* data = pq.top();
		cout<<data->c<<"-->"<<data->f<<endl;
		pq.pop();
	}
}

Node* generate_tree(priority_queue<Node*, vector<Node*>, comp>& pq)
{
	while(pq.size() > 1)
	{
		Node* left = pq.top();
		pq.pop();
		Node* right = pq.top();
		pq.pop();
		Node* new_node = new Node('$', left->f + right->f);
		new_node->left = left;
		new_node->right = right;
		pq.push(new_node); 
	}
	return pq.top();
}

void generate_codes(Node* root, unordered_map<char, string>& cmap, string& code)
{

	if(!root->left && !root->right)
	{
		char ch = root->c;
		cmap[ch] = code;
		return;
	}
	code.push_back('0');
	generate_codes(root->left, cmap, code);
	code.pop_back();
	code.push_back('1');
	generate_codes(root->right, cmap, code);
	code.pop_back();
}

void show_codes(unordered_map<char, string>& cmap)
{
	cout<<"Codes are:\n";
	for(auto i: cmap)
	{
		cout<<i.first<<"-->"<<i.second<<endl;
	}
}

void bfs(Node* root)
{
	if(!root) return;
	queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		int n = q.size();
		while(n--)
		{
			Node* tmp = q.front();
			q.pop();
			cout<<tmp->c<<"--->"<<tmp->f<<"    ";
			if(tmp->left)
				q.push(tmp->left);
			if(tmp->right)
				q.push(tmp->right);
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the number of characters"<<endl;
	cin>>n;
	vector<Node*> arr;
	for(int i = 0;i<n;i++)
	{
		char c;
		int f;
		cout<<"Enter the character"<<endl;
		cin>>c;
		cout<<"Enter the frequency"<<endl;
		cin>>f;
		arr.push_back(new Node(c, f));
	}
	if(n == 1)
	{
		cout<<"Codes are:\n";
		cout<<arr[0]->c<<"-->0"<<endl;
	}
	else{
		priority_queue<Node*, vector<Node*>, comp> pq(arr.begin(), arr.end());
		Node* root = generate_tree(pq);
		unordered_map<char, string> cmap;
		string code = "";
		generate_codes(root, cmap, code);
		show_codes(cmap);
	}
	return 0;
}
