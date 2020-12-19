#include<bits/stdc++.h>

using namespace std;

int main()
{
	// absolute value
	//this will work only for integer values
	// int abs(int);
	int a = -5, b = 40;
	cout<<"abs()"<<endl;
	cout<<abs(a)<<endl;
	cout<<abs(b)<<endl;

	// absolute value
	// works for any number
	//double fabs(double)
	float c = -5.4;
	cout<<"\nfabs()"<<endl;
	cout<<fabs(a)<<endl;
	cout<<fabs(b)<<endl;
	cout<<fabs(c)<<endl;

	// power 
	//double pow (double base     , double exponent);
	cout<<"pow()"<<endl;
	cout<<pow(5, 2)<<endl;

	float m = 2.5, n = 2;
	cout<<pow(m, n)<<endl;	

	
	return 0;
}
