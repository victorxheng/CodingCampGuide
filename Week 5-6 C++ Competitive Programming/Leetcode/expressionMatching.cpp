#include <bits/stdc++.h>

using namespace std;

string s, p; 

//method using memoization (top-down) dynamic programming

bool dfs(int i, int j){// i -> s, j -> p
    //edge cases
    if(i >= s.length() && j >= p.length()){
        return true;
    }
    else if(j >= p.length()) {
        return false;
    }

    //check if they match
    bool match = i < s.length() && (s[i] == p[j] || p[j] == '.');
    if(j+1 < p.length() && p[j+1] == '*'){
        return  (match && dfs(i+1, j)) || dfs(i, j+2);

    }
    else{
        if(match) {
            return dfs(i+1,j+1); //matches, move 
        }
        else {
            return false; //does not match
        }
    }
}

//method using tabulation (bottom-up) dynamic programming
int main()
{
    cin >> s >> p;
    //save the lengths of each dimension, create grid
    int n = s.length(), m = p.length();
    bool dp[n+1][m+1];
    //0,0 is always true
    dp[0][0] = true;
    //fill in first row
    for(int j = 1; j < m+1; j++){//i always used for s, j always used for p
        //fills in true if pattern 0 -> j can be made into empty
        //NOTE: when looking up a character ie p[j-1], the -1 must always be used because the table is 1 index ahead of the strings due to the empty squares
        dp[0][j] = (p[j-1]=='*'&&dp[0][j-2]);//if it is a star, we check to see if the pattern works if the * pattern is used 0 times. done by checking if j-2 works
    }
    for(int i = 1; i < n+1; i++){
        for(int j = 0; j< m+1; j++){
            if(j==0) dp[i][0] = false; //matching any string with an empty pattern will not work
            else if(s[i-1]==p[j-1] || p[j-1]=='.') dp[i][j] = dp[i-1][j-1];//if they match, dp(i,j) works if dp(i-1,j-1) always works [aka it works if the pattern preceding it also works]
            else if(p[j-1]=='*') dp[i][j] = ((s[i-1] == p[j-2] || p[j-2]=='.')&& dp[i-1][j]) || dp[i][j-2]; 
            //if it's a star and matching, if we use the starred char once, the pattern dp(i,j) works if dp(i-1,j) also works, as the pattern dp(i-1,j) works with zero or more matches of the starred char
            //OR if it's a star, check if it works if the matched char is empty; if star, dp(i,j) works if dp(i,j-2) also works for if we make the star part 0.
            else dp[i][j] = false; //if not matching and not a star, dp(i,j) will not work
        }
    }
    cout << dp[n][m];
    return dp[n][m];

    return 0;
}