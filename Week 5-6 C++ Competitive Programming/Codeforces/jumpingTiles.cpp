#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        vector<pair<char, int>> ci;
        char start = s[0], end = s[s.length() - 1];
        if (start < end)
        {
            for (int j = 1; j < s.length() - 1; j++)
            {
                if (s[j] >= start && s[j] <= end)
                    ci.push_back(make_pair(s[j], j + 1));
            }
            sort(ci.begin(), ci.end());
        }
        else if (start > end)
        {
            for (int j = 1; j < s.length() - 1; j++)
            {
                if (s[j] <= start && s[j] >= end)
                    ci.push_back(make_pair(s[j], j + 1));
            }
            sort(ci.rbegin(), ci.rend());
        }
        else{
            for (int j = 1; j < s.length() - 1; j++)
            {
                if (s[j] ==start)
                    ci.push_back(make_pair(s[j], j + 1));
            }
        }        
        cout << abs(start - end) << " " << ci.size() + 2 << endl
             << "1 ";

        for (pair<char, int> p : ci)
        {
            cout << p.second << " ";
        }
        cout << s.length() << endl;
    }
    return 0;
}