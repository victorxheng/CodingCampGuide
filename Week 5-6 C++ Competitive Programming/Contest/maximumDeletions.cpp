#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int deleteString(string s) {
        string curr = "";
        string next = "";
        int num = 1;
        for(int i = 0; i < s.length(); i++){
            curr = curr + s[i];
            next = s.substr(i+1,curr.size());
            if(curr == next){
                num++;
                curr = "";
            } 
        }
        return num;
 
    }
};