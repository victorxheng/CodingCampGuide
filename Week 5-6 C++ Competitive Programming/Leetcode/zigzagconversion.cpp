#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string convert(string s, int r)
    {
        string output = "";
        if (r == 1) return s;
        for (int i = 0; i < r; i++)
        {
            for (int j = i; j < s.length(); j += (r - 1) * 2)
            {
                output += s[j];
                int next = (r - 1 - i) * 2;
                if (i != 0 && i != r - 1 && next + j < s.length()) output += s[next + j];
            }
        }
        return output;
    }
};