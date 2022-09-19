#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<int> output(nums.size(),1);
        if(nums.size() == 1) return output;
        /*int maximum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            maximum = maximum | nums[i];
        }*/

        int maximum = nums[nums.size()-1];  
        int leading = nums[nums.size()-1];  
        int trailingIndex = nums.size()-1;


        for(int i = nums.size()-2; i >= 0; i--){
            leading = nums[i] | leading;
            maximum = max(maximum, leading);
            int bit = nums[i];
            int index = i;
            if(trailingIndex > i&& nums[trailingIndex] == bit){
                while(trailingIndex > i&&nums[trailingIndex] == bit){
                    trailingIndex--;
                }
                output[i] = trailingIndex - i+1;
            }
            else{
            while(index < nums.size() && bit != maximum){
                index++;
                bit = bit | nums[index];
            }
            output[i] = index - i+1;
            trailingIndex = index;
            }
        }
        return output;


    }
};

