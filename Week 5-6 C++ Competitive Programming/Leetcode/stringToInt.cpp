#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 0;
        long num = 0;
        for(int i = 0; i < s.length(); i++){            
            if(sign == 0){                
                if(s[i] == ' '){
                    //move on
                }
                else if(s[i] == '-'){
                    sign = -1;
                }
                else if(isdigit(s[i])){
                    sign = 1;
                    num = s[i] - '0';
                }
                else{
                    //improper character
                    cout << "improper character reached";
                }
                
            }
            else{
                if(isdigit(s[i])){
                    num = num* 10 + s[i] - '0';
                }
                else{                    
                    return num > INT_MAX ? INT_MAX * sign : num * sign;
                }
            }
        }
        return num > INT_MAX ? INT_MAX * sign : num * sign;
    }
};