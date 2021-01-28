#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

void merge(vi& a, int l, int m, int h)
{
	int sz = (h-l)+1;
	vi c(sz, 0);

	int i  = l;
	int j = m+1;	
	int k = 0;
	while(i<=m && j<=h)
	{
		if(a[i]<a[j])
		{
			c[k++] = a[i++];
		}
		else if(a[i] == a[j])
		{
			c[k++] = a[i++];
			c[k++] = a[j++];
		}
		else
		{
			c[k++] = a[j++];
		}
	}
	while(i<=m)
	{
		c[k++] = a[i++];
	}
	while(j<=h)
	{
		c[k++] = a[j++];
	}

	// copy to original array
	int r = 0;
	while(r<sz)
	{
		a[l+r] = c[r];
		r++;
	}
}


void mSort(vi& a, int l, int h)
{
	if(l>=h)
		return;
	int m = l+(h-l)/2;

	mSort(a, l, m);
	mSort(a, m+1, h);

	merge(a, l, m, h);
}



void display(vi& a, int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;

	vi a(n, 0);

	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"Before  sorting "<<endl;
	display(a, n);

	mSort(a, 0, n-1);

	cout<<"After sorting "<<endl;
	display(a, n);
	
	return 0;
}

