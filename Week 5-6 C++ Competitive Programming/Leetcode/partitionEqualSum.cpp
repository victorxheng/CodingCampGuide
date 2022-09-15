#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;

    int sum = 0;
    for(int i:nums){
        sum+=i;
    }
    if(sum%2==1) return false;
    sum/=2;
    bool dp[nums.size()+1][sum+1];
    //initialize column 1 to all true
    for(int i = 0; i < nums.size()+1; i++){
        dp[i][0] = true;
    }
    //initialize row 1 to false
    for(int i = 1; i < sum+1; i++){
        dp[0][i] = false;
    }
    for(int i = 1; i < nums.size()+1; i++){
        for(int j = 1; j<sum+1; j++){
            //check if not include by looking at row above
            if(dp[i-1][j]){
                dp[i][j]=true;
                //if(j == sum) return true;
            } 
            else{//if you do include, check if the numbers before it can sum up to the num
                int remaining = j - nums[i-1];
                if(remaining >= 0 && dp[i-1][remaining]) {
                    dp[i][j] = true;     
                    //if(j == sum) return true;
                }     
                else{
                    dp[i][j] = false;
                }      
            }              
        }
    }
    return dp[nums.size()][sum];

    
    return 0;
}