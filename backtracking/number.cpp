/*
Generating combinations with repetitions allowed:
[1, 2, 3]
	111
	112
	113
	121
	122
	123
	131
	132
	133
	211
	212
	213
*/
/*
pseudo code

def gen(l, s, i):
	{
		if(i == len(l))
			print(s)
		for e in l:
			s.push(e)
			gen(l, s, i+1)
			s.pop()
	}
*/
#include<bits/stdc++.h>
using namespace std;

void permutations(vector<char>& l, int sel, string& s)
{
	if(sel == l.size())
	{
		cout<<s<<" ";
		return;
	}
	for(char i: l)
	{
		s.push_back(i);
		permutations(l, sel+1, s);
		//this step is backtracking
		s.pop_back();
	}
}

int main()
{
	vector<char> l = {'1', '2', '3'};
	string p = "";
	permutations(l, 0, p);
}

