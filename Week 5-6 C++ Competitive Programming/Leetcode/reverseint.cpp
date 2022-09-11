#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int r = 0;
    int sign = x >= 0 ? 1 : -1;
    while (x != 0)
    {
        r = r * 10 + x % 10;
        x /= 10;
    }
    cout << r ;
    return 0;
}