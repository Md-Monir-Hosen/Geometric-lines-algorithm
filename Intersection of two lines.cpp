#include<bits/stdc++.h>
using namespace std;
#define pdd pair<double,double>
void displayPoint(pdd p)
{
     cout << "(" << p.first << ", " << p.second
         << ")" << endl;
}
pdd lineLineIntersection(pdd A,pdd B,pdd C,pdd D)
{
    double a1=A.second - B.second;
    double b1=A.first-B.first;
    double c1=a1*(A.first)+b1*(A.second);

     double a2 = D.second - C.second;
    double b2 = C.first - D.first;
    double c2 = a2*(C.first)+ b2*(C.second);

    double determinant=a1*b2-a2*b1;

    if(determinant==0)
    {
        return make_pair(FLT_MAX,FLT_MAX);
    }
    else
    {
         double x = (b2*c1 - b1*c2)/determinant;
        double y = (a1*c2 - a2*c1)/determinant;
        return make_pair(x, y);
    }
}
int main()
{
     pdd A = make_pair(1, 1);
    pdd B = make_pair(4, 4);
    pdd C = make_pair(1, 8);
    pdd D = make_pair(2, 4);

    pdd intersection = lineLineIntersection(A, B, C, D);

    if (intersection.first == FLT_MAX &&
        intersection.second==FLT_MAX)
    {
        cout << "The given lines AB and CD are parallel.\n";
    }

    else
    {
        cout << "The intersection of the given lines AB "
                "and CD is: ";
        displayPoint(intersection);
    }

    return 0;
}
