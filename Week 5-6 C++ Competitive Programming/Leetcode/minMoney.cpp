#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long minimumMoney(vector<vector<int>>& transactions) {
        vector<pair<int,int>> values;
        int maximumCost = 0;
        for(vector<int> t : transactions){
            values.push_back(make_pair(t[1],t[0]));
        }
        int startingMoney = maximumCost, track = startingMoney;
        sort(values.begin(),values.end());
        for(int i = 0; i <values.size(); i++){
            track = track - values[i].second;
            if(track < 0){
                startingMoney = startingMoney - track;
                track = 0;
            }
            track = track + values[i].first;
        }
        return startingMoney;
    }
};