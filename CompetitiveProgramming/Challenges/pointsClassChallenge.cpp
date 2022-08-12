// credit: Gloria Chang

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class Point
{
    double x;
    double y;

public:
    Point(double ex, double why)
        : x(ex),
          y(why) {}

    ~Point() {}
    friend ostream &operator<<(ostream &out, const Point &c);
    double distanceFrom(Point &p)
    {
        double dist = sqrt(((p.x - x) * (p.x - x)) + ((p.y - y) * (p.y - y)));
        return dist;
    }
    Point add(Point &p)
    {
        return Point(x + p.x, y + p.y);
    }
    bool operator<(const Point &other) const
    {
        double p = sqrt(x * x + y * y);
        double p2 = sqrt(other.x * other.x + other.y * other.y);
        return p < p2;
    }
};
ostream &operator<<(ostream &out, const Point &c)
{
    out << "(" << c.x << ", " << c.y << ")" << endl;
}
int main()
{
    vector<Point> v;
    v.emplace_back(1, 1);
    v.emplace_back(430, 19);
    v.emplace_back(8, 6);
    v.emplace_back(20, 7);
    v.emplace_back(66, 2);
    for (Point &p : v)
    {
        cout << p;
    }
    sort(v.begin(), v.end());
    for (Point &p : v)
    {
        cout << p;
    }
    Point a(1, 1);
    Point b(4, 5);
    cout << a.distanceFrom(b) << endl;
    cout << a.add(b);
}