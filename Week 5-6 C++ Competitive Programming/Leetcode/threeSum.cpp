#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        nums.push_back(n);
    }

    unordered_set<int> diffs;
    unordered_set<int> vals;

    for(int i : nums){
        diffs.insert(0-i);
        vals.insert(i);
    }

    

    return 0;
}