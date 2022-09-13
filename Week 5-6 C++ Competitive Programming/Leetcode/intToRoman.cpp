#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    vector<pair<int, char>> numLetter;
    numLetter.push_back(make_pair(1000, 'M'));
    numLetter.push_back(make_pair(500, 'D'));
    numLetter.push_back(make_pair(100, 'C'));
    numLetter.push_back(make_pair(50, 'L'));
    numLetter.push_back(make_pair(10, 'X'));
    numLetter.push_back(make_pair(5, 'V'));
    numLetter.push_back(make_pair(1, 'I'));

    string s = "";

    for (int i = 0; i < numLetter.size(); i++)
    {
        while (num - numLetter[i].first >= 0)
        {
            num -= numLetter[i].first;
            s += numLetter[i].second;
        }
        if (numLetter[i].first > 1 && num - numLetter[i].first >= -1 * pow(10, (int)log10(numLetter[i + 1].first))&& num - numLetter[i].first <= 0)
        {
            if (pow(10, (int)log10(numLetter[i].first)) == numLetter[i].first)
            {
                num -= (numLetter[i].first - numLetter[i+2].first);
                s = s + numLetter[i + 2].second + numLetter[i].second;
            }
            else
            {
                num -= (numLetter[i].first - numLetter[i+1].first);
                s = s + numLetter[i + 1].second + numLetter[i].second;
            }
        }
        cout << num << endl;
    }

    return 0;
}