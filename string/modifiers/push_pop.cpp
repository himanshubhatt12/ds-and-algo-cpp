/*
**push_back
-Complexity
Unspecified; Generally amortized constant, but up to linear in the new string length.

**pop_back

-Complexity
Unspecified, but generally constant.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "hello";

	s.push_back('e');
	cout<<s<<endl;

	s.pop_back();
	cout<<s<<endl;
	return 0;
}