#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        if(word1 == "") return word2.length();
        else if (word2 == "") return word1.length();

        int dp[word1.length()+1][word2.length()+1];
        dp[0][0] = 0;
        for(int i = 1; i < word1.length()+1; i++){
            dp[i][0] = i;
        }
        for(int i = 1; i < word2.length()+1; i++){
            dp[0][i] = i;
        }
        for(int i = 1; i < word1.length()+1; i++){
            for(int j = 1; j < word2.length()+1; j++){
                if(word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]) + 1;                
            }
        }
        return dp[word1.length()][word2.length()];
    }
};