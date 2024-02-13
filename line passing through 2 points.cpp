#include<bits/stdc++.h>
using namespace std;
#define pdd pair<double,double>
void lineFromPoints(pdd p,pdd q)
{
    double a=p.second-q.second;
    double b=p.first-q.first;
    double c=a*(p.first)+b*(p.second);
    if(b<0)
        {
        cout << "The line passing through points P and Q "
                "is: "
             << a << "x - " << b << "y = " << c << endl;
    }
    else
     {
        cout << "The line passing through points P and Q "
                "is: "
             << a << "x + " << b << "y = " << c << endl;
    }
}
int main()
{
    pdd P = make_pair(3, 2);
    pdd Q = make_pair(2, 6);
    lineFromPoints(P, Q);
    return 0;
}
