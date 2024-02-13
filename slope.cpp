#include<bits/stdc++.h>
using namespace std;
float slope(float x1,float y1,float x2,float y2)
{
    if(x1-x2!=0)
        return (y2-y1)/(x2-x1);
    return INT_MAX;
}
int main()
{
     float x1 = 4, y1 = 2;
    float x2 = 2, y2 = 5;
    cout << "Slope is: " << slope(x1, y1, x2, y2);
    return 0;
}
