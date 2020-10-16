#include<bits/stdc++.h>
using namespace std;
void makeLPS(int* lps, int n, string & patt)
{
	int i = 0, j = 1;
	for(int i = 0;i<n;i++)
	{
		lps[i] = 0;
	}
	while(j<n)
	{
		if(patt[i] == patt[j])
		{
			lps[j] = i+1;
			i += 1;
			j += 1;
		}
		else if(i == 0)
			j++;
		else{
			while(i>0)
			{
				i = lps[i-1];
				if(patt[i] == patt[j])
				{
					lps[j] = i+1;
					j += 1;
					i += 1;
					break;
				}
			}
			if(i == 0)
			{
				lps[j] = 0;
				j++;
			}
		}
	}
}
int myfind(string text, string pattern, int* lps)
{
	int j = 0;
	int i;
	for(i = 0;i<text.length() && j<pattern.length();)
	{
		if(text[i] == pattern[j])
		{
			i+=1;
			j+=1;
		}
		else{
			bool matched = false;
			while(j>0)
			{
				j = lps[j-1];
				if(text[i] == pattern[j])
				{
					i+=1;
					j+=1;
					matched = true;
					break;
				}
			}
			if((j == 0) && (matched == false))
			{
				i+=1;
			}
			
		}
		if(j == pattern.length())
				return i -pattern.length();
	}

	return -1;
}

int main()
{
	string text, pattern;
	cout<<"Enter the text"<<endl;
	getline(cin, text);
	cout<<"Enter the pattern"<<endl;
	getline(cin, pattern);
	int m = text.length();
	int n = pattern.length();
	int lps[n];
	makeLPS(lps, n, pattern);
	cout<<"LPS array is "<<endl;
	for(auto i:lps)
		cout<<i<<" ";
	cout<<endl;
	int ind  = myfind(text, pattern, lps);
	if(ind == -1)
			cout<<"pattern not found"<<endl;
	else
		cout<<"Pattern found at index "<<ind<<endl;
	return 0;
}

