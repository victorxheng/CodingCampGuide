#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
       int longest = 1;
        int startIndex = 0, startingPivot = 0;
        if (s.length() == 0)
            cout << "";
        else if (s.length() > 0 && s[1] == s[0])
            longest = 2;
        vector<double> pivots;
        

        for (int i = 2; i < s.length(); i++)
        {
            for (int j = startingPivot; j < pivots.size(); j++)
            {
                int otherIndex = i - ((double)i - pivots[j]) * 2.0;
                if (otherIndex >= 0 && s[i]== s[otherIndex])
                {
                    if (i - otherIndex + 1 > longest)
                    {
                        startIndex = otherIndex;
                        longest = i - otherIndex + 1;
                    }
                }
                else
                {
                    swap(pivots[startingPivot], pivots[j]);
                    startingPivot++;
                }
            }
            if (s[i] == s[i - 1])
            {
                pivots.push_back(i - 0.5);
                if (2 > longest)
                {
                    startIndex = i - 1;
                    longest = 2;
                }
            }
            if (s[i] == s[i - 2])
            {
                pivots.push_back(i - 1);
                if (3 > longest)
                {
                    startIndex = i - 2;
                    longest = 3;
                }
            }
        }
        string output = "";
        for (int i = startIndex; i < startIndex + longest; i++)
        {
            output += s[i];
        }
        return output;
    }
};