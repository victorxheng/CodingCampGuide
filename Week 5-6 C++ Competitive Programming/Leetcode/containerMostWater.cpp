#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> height;

    int left = 0, right = height.size()-1, a = 0;
    while(left < right){
        if(height[left] > height[right]){
            a = max(a,height[left]*(right-left));
            int temp = left;
            while(left < right && height[left] <= height[temp]){
                left++;
            }
        }
        else{
            a = max(a,height[right]*(right-left));            
            int temp = right;
            while(left < right && height[right] <= height[temp]){
                right++;
            }
        }
    }
    return a;

    return 0;
}