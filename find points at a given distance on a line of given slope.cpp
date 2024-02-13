#include<bits/stdc++.h>
using namespace std;
struct Point {

    float x, y;
    Point() { x = y = 0; }
    Point(float a, float b) { x = a, y = b; }
};
void printPoints(Point source, float l, int m)
{

    Point a, b;
    if (m == 0) {
        a.x = source.x + l;
        a.y = source.y;

        b.x = source.x - l;
        b.y = source.y;
    }
    else if (m == numeric_limits<float>::max()) {
        a.x = source.x;
        a.y = source.y + l;

        b.x = source.x;
        b.y = source.y - l;
    }
    else {
        float dx = (l / sqrt(1 + (m * m)));
        float dy = m * dx;
        a.x = source.x + dx;
        a.y = source.y + dy;
        b.x = source.x - dx;
        b.y = source.y - dy;
    }
    cout << a.x << ", " << a.y << endl;
    cout << b.x << ", " << b.y << endl;
}
int main()
{
     Point p(2, 1), q(1, 0);
    printPoints(p, sqrt(2), 1);
    cout << endl;
    printPoints(q, 5, 0);
    return 0;
}
