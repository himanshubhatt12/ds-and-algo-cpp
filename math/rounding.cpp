#include<bits/stdc++.h>
using namespace std;

int main()
{
	// ceil function
	// double ceil (double x);
	// rounds x upward (smallest integer greater than or equal to x)
	// round up
	cout<<"ceil()\n"<<endl;
	double x = 3.5;
	double y = 4.2;

	cout<<ceil(x)<<endl;
	cout<<ceil(y)<<endl;
	cout<<ceil(-2.3)<<endl;

	// floor function
	// double floor (double x);
	// rounds x downwards (largest integer less than or equal to x)
	// round down
	cout<<"floor()\n"<<endl;

	cout<<floor(x)<<endl;
	cout<<floor(y)<<endl;
	cout<<floor(-2.3)<<endl;

	// round function
	// double round (double x);
	// if fraction part >= 0.5 then round up
	// else round down

	cout<<"round()\n"<<endl;
	cout<<round(x)<<endl;
	cout<<round(y)<<endl;
	cout<<round(2.8)<<endl;	

	return 0;
}