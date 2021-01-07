// calculating square root of a number using binary search
// time complexity : O(log n)
// space complexity: O(1)


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	double ans;
	int low = 0;
	int high = n;

	while(low<=high)
	{
		int m = low+(high-low)/2;
		int sq = m*m;

		if(sq == n)
		{
			ans = m;
			break;
		}
		if(sq<n)
		{
			ans = m;
			low = m+1;
		}
		else{
			high = m-1;
		}
	}

	double inc = 0.1;
	int p = 3; // precision of 3 digits

	for(int i = 1;i<=p;i++)
	{
		for(int i = 0;i<=9;i++)
		{
			double frac = (ans+i*inc);
			if(frac*frac<=n)
			{
				ans = frac;
			}
		}

		inc = inc*0.1;
	}

	cout<<ans<<endl;
	return 0;
}
