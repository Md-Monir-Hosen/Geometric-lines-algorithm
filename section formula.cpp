#include<bits/stdc++.h>
using namespace std;
void section(double x1,double x2,double y1,double y2,double m,double n)
{
    double x=((n*x1)+(m*x2))/(n+m);
    double y=((n*y1)+(m*y2))/(n+m);
    cout<<"("<<x<<","<<y<<")"<<"\n";
}
int main()
{
      double x1 = 2, x2 = 4, y1 = 4,
           y2 = 6, m = 2, n = 3;
    section(x1, x2, y1, y2, m, n);
    return 0;
}
