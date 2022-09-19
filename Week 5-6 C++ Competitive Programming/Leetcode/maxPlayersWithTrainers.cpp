#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int trainersIndex = 0, matching = 0;

        for(int i = 0; i < players.size(); i++){
            while(trainersIndex < trainers.size() && trainers[trainersIndex] < players[i]){
                trainersIndex++;
            }
            if(trainersIndex >= trainers.size())break;
            matching++;
            trainersIndex++;
        }
        return matching;

    }
};