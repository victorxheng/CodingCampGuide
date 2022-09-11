#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
    
public:
    int lengthOfLongestSubstring(string s) {
        int longestSubstring = 1, currentSubstringLength = 1, repeatingIndex = 0;
        unordered_map<char, int> characterIndex;
        if(s.length() == 0){
            return 0;
        }
        for(int i = 1; i < s.length(); i++){
            if((characterIndex[s[i]] != 0 || s[i] == s[0]) && characterIndex[s[i]] >= repeatingIndex){                
                currentSubstringLength = i - characterIndex[s[i]]-1;
                repeatingIndex = characterIndex[s[i]];
            }            
            currentSubstringLength++;            
            characterIndex[s[i]] = i;            
            longestSubstring = max(longestSubstring, currentSubstringLength);
        }
        int i = s.length()-1;;
        return longestSubstring;
    }
};