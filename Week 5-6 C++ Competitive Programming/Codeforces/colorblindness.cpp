#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n; string s1, s2;
    cin >> t;
    for(int i =0; i < t; i++){
        cin >> n >> s1 >> s2;
        string o1 = "", o2 = "";
        for(int j = 0; j < n; j++){
            if(s1[j]=='R') o1 += 'R';
            else o1 += 'B';
            if(s2[j]=='R') o2 += 'R';
            else o2 += 'B';
        }
        if(o1 == o2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}