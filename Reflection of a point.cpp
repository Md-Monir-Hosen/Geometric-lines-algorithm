#include<bits/stdc++.h>
using namespace std;
typedef complex<double> point;
#define x real()
#define y imag()
#define PI 3.1415926535897932384626
void displayPoint(point p)
{
     cout << "(" << p.x << ", " << p.y << ")" << endl;
}
point reflect(point p,point a,point b)
{
    point pt=p-a;
    point bt=b-a;
    point pr=pt/bt;
    return conj(pr)*pt+a;
}
int main()
{
     point P(4.0, 7.0);
    point A(1.0, 1.0);
    point B(3.0, 3.0);


    point P_reflected = reflect(P, A, B);
    cout << "The point P on reflecting about AB becomes:";
    cout << "P_reflected";
    displayPoint(P_reflected);


    return 0;
}
