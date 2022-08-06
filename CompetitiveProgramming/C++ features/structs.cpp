#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;

    // implement a comparison operator for Point
    bool operator<(const Point &other) const {
        return x < other.x;
    }
};

int main() {
    Point p{1, 2};

    cout << p.x << ' ' << p.y << endl; // 1 2

    p.x = 3;
    p.y = 4;

    // store on heap
    Point *q = new Point{5, 6};
    delete q;

    Point p2{7, 8};

    bool less = p < p2; // true

    vector<Point> points{p, p2};
    sort(points.begin(), points.end());
}