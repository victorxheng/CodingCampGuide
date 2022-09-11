#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, r, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        set<pair<int, int>> points;
        cin >> n >> k >> r >> c;
        points.insert(make_pair(r, c));
        int r2 = r - 1, c2 = c + 1;

        while (r2 >= 1)
        {
            if (r2 >= 1 && r2 <= n && c2 >= 1 && c2 <= n)
                points.insert(make_pair(r2, c2));
            r2--;
            c2++;
        }

        r2 = 1;
        c2 = c2 - k - 1;
        int r3=r2, c3=c2;
        while (c2 >= 1)
        {
            while (r2 <=n)
            {
                if (r2 >= 1 && r2 <= n && c2 >= 1 && c2 <= n)
                    points.insert(make_pair(r2, c2));
                r2++;
                c2--;
            }
            r2 = 1;
            c2 =c3 - k;
            c3=c2;
        }

        r2 = r + 1; c2 = c - 1;

        while (r2 <= n)
        {
            if (r2 >= 1 && r2 <= n && c2 >= 1 && c2 <= n)
                points.insert(make_pair(r2, c2));
            r2++;
            c2--;
        }

        r2 = n;
        c2 = c2 +k+1;
        r3=r2; c3=c2;
        while (c2 <=n)
        {
            while (r2 >=1)
            {
                if (r2 >= 1 && r2 <= n && c2 >= 1 && c2 <= n)
                    points.insert(make_pair(r2, c2));
                r2--;
                c2++;
            }
            r2 = n;
            c2 =c3 +k;
            c3=c2;
        }

        for(int row = 1; row <=n; row++){
            for(int col = 1; col <= n; col++){
                if(points.find(make_pair(row,col))!= points.end()) cout << "X";
                else cout << ".";
            }
            cout<<endl;
        }
    }
    return 0;
}