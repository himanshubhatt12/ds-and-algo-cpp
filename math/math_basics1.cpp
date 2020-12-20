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
	//double pow (double base, double exponent);
	cout<<"\npow()"<<endl;
	cout<<pow(5, 2)<<endl;

	float m = 2.5, n = 2;
	cout<<pow(m, n)<<endl;	

	//  square root
	//  double sqrt (double x);
	cout<<"\nsqrt()"<<endl;
	cout<<sqrt(25)<<endl;
	
	// cubic root
	// double cbrt  (double x);
	cout<<"\ncbrt()"<<endl;
	cout<<cbrt(125.0)<<endl;
	cout<<cbrt(27)<<endl;

	return 0;
}
