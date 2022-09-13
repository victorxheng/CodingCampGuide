#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, f, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> f;
        vector<long long> top;
        vector<long long> pos;
        vector<long long> negs;
        vector<long long> zs;

        for (int j = 0; j < f; j++)
        {
            cin >> k;
            top.push_back(k);
        }
        for (int j = 0; j < f; j++)
        {
            cin >> k;
            if (k - top[j] > 0)
            { // pos
                pos.push_back(k - top[j]);
            }
            else if (k - top[j] < 0)
            { // neg
                negs.push_back(top[j] - k);
            }
            else
            {
                zs.push_back(0);
            }
        }

        sort(pos.begin(), pos.end());
        sort(negs.begin(), negs.end());
        long long pp = 0, pairs = 0, totalP = pos.size();
        // pair negatives
        for (int j = 0; j < negs.size(); j++)
        {
            if (pos.size() > 0 && pos[pos.size() - 1] >= negs[j] && pp < pos.size())
            {
                while (pp < pos.size())
                {
                    if (pos[pp] >= negs[j])
                        break;
                    pp++;
                }
                totalP--;
                pp++;
                pairs++;
            }
        }
        long long remaining = totalP + zs.size();
        pairs = pairs + remaining / 2;
        cout << pairs << endl;
    }
    return 0;
}