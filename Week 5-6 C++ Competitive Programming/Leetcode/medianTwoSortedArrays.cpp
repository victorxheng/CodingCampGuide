#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int first = 0, second = 0;
        vector<int> merge;
        for(int i = 0; i < nums1.size() + nums2.size(); i++){
            if(first >= nums1.size()) {
                merge.push_back(nums2[second]);
                second++;
            }
            else if(second >= nums2.size()) {
                merge.push_back(nums1[first]);
                first++;
            }
            else if(nums1[first] <= nums2[second]) {
                merge.push_back(nums1[first]);
                first++;
            }
            else {
                merge.push_back(nums2[second]);
                second++;
            }

        }        
        return merge.size()%2 == 0 ? (double)(merge[merge.size()/2] + merge[merge.size()/2-1]) / 2.0 : merge[(merge.size()-1)/2];
    }
};