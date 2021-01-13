// Closest distance problem from Light OJ
// algorithm used = ternary search

#include<bits/stdc++.h>
#define eps 1e-8
using namespace std;
struct point
{
    double x;
    double y;
};

point p[4];

double dist(point p1, point p2)
{
    return sqrt(((p1.x-p2.x)*(p1.x-p2.x)) + ((p1.y-p2.y)*(p1.y-p2.y))); 
}

double ternarySearch()
{
    double m1 = dist(p[0], p[2]);
    double m2 = dist(p[1], p[3]);
    point am1, am2;
    point cm1, cm2;
    while(abs(m1-m2)>eps)
    {
        am1.x = p[0].x +(p[1].x-p[0].x)/3;
        am1.y = p[0].y +(p[1].y-p[0].y)/3;

        am2.x = p[1].x - (p[1].x-p[0].x)/3;
        am2.y = p[1].y -(p[1].y-p[0].y)/3;

        cm1.x = p[2].x + (p[3].x-p[2].x)/3;
        cm1.y = p[2].y + (p[3].y-p[2].y)/3;

        cm2.x = p[3].x - (p[3].x - p[2].x)/3;
        cm2.y = p[3].y - (p[3].y - p[2].y)/3;
        
        m1 = dist(am1, cm1);
        m2 = dist(am2, cm2);
        if(m1<m2)
        {
            p[1] = am2;
            p[3] = cm2;
        }
        else{
            p[0] = am1;
            p[2] = cm1;
        }
    }
    return (m1+m2)/2;
}

int main()
{
    int t;
    cin>>t;
    for(int tc = 1;tc<=t;tc++)
    {
    	for(int i = 0;i<4;i++)
        {
            cin>>p[i].x>>p[i].y;
        }
        double res = ternarySearch();
        printf("Case %d: %.6lf\n", tc, res);
    }
    return 0;
}   
  
