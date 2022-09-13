#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> heights;

    long long left=0, right=heights.size()-1, leftMax=0, rightMax=0, n=0;
    while(left < right){
        if(heights[left] < heights[right]){
            if(heights[left] >= leftMax) leftMax = heights[left];
            else n += (leftMax - heights[left]);
            left++;
        }
        else{
            if(heights[right] >= rightMax) rightMax = heights[right];
            else n += (rightMax - heights[right]);
            right--;
        }
    }

    return n;
    

    return 0;
}