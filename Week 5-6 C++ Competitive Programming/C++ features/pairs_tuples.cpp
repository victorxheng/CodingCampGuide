#include <algorithm>
#include <iostream>

#include <utility> // pair
#include <tuple> // tuple
#include <vector>

using namespace std;

int main() {
    // make a pair of integers
    pair<int, int> p{1, 2};

    // get the first number
    int x = p.first;

    // get the second number
    int y = p.second;

    // make a vector of pairs
    vector<pair<int, int>> v;
    v.push_back(make_pair(1, 2));

    // sort pairs
    // pairs are sorted by first number, then second number
    sort(v.begin(), v.end());

    // loop through vector of pairs
    for (pair<int, int> element : v) {
        int a, b;
        tie(a, b) = element;
        // a is the first number, b is the second number of the pair
        cout << a << ' ' << b << endl;
    }

    // make a tuple of random types
    tuple<int, string, double> t{1, "hello", 3.14};

    // get the first number
    int a = get<0>(t);

    // get the second string
    string s = get<1>(t);

    // get the third number
    double d = get<2>(t);

    // You can use tie to get the values of a tuple
    int d;
    string e;
    double f;
    tie(d, e, f) = t;
}