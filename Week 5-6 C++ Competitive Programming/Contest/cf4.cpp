#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, k, item;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        vector<long long> result;
        vector<pair<long long, long long>> vs;
        for (long j = 0; j < n; j++)
        {
            cin >> item;
            vs.push_back(make_pair(item, j));
        }
        sort(vs.rbegin(), vs.rend());
        unordered_set<long long> indexes;

        for (pair<long long, long long> p : vs)
        {
            //cout << "% " << (p.second % k) << " p.second " << p.second << " if " << (indexes.find(p.second % k) == indexes.end()) << endl;
            if (indexes.find(p.second % k) == indexes.end())
            {
                result.push_back(p.first);
                indexes.insert(p.second % k);
            }
        }
        
        long long score = 0;
        for (long long r : result)
        {
            score += r;
        }
        cout << score << endl;
    }
    return 0;
}