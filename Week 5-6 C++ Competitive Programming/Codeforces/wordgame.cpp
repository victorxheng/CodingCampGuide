#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string s;
    unordered_map<string, int> map;
    vector<string> words;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> s;
            words.push_back(s);
            map[s]++;
        }        
        for(int j = 0; j < n; j++){
            
        }
    }
    return 0;
}