#include<bits/stdc++.h>
using namespace std;
void midpoint(int x1,int x2,int y1,int y2)
{
    cout<<float((x1+x2)/2)<<" ,"<<float((y1+y2)/2);
}
int main()
{
     int x1 =-1, y1 = 2  ;
    int x2 = 3, y2 = -6 ;
    midpoint(x1, x2, y1, y2);
    return 0;
}
