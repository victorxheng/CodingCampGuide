#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, t;
    cin >> t;
    for(int i = 0; i < t; i ++){
        cin >> a >> b >> c;
        int aTime = a - 1;
        int bTime = abs(b - c) + c - 1;
        if(aTime < bTime) cout << 1 << endl;
        else if(bTime < aTime) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}