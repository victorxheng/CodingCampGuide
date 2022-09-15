#include <bits/stdc++.h>

using namespace std;

int findMaxArea(vector<int> h){
    //easy method
    /*set<int> s; int maximumArea = 0;
    for(int i : h){
        if(i>0)s.insert(i);
    }
    for(int i: s){
        int maxLength = 0, currentLength = 0, area = 0;
        for(int j:h){
            if(j >= i){
                currentLength++;
                maxLength = max(maxLength,currentLength);                
            }
            else currentLength = 0;            
        }
        area = maxLength * i;
        maximumArea = max(maximumArea,area);        
    }
    return maximumArea;*/
    
    //stack math

}


int largestRectangleArea(vector<int> h) {
    h.push_back(0);
    stack<int> s;
    int maxArea = 0;
    for(int i =0; i < h.size(); i++){
        while(!s.empty() && h[s.top()] > h[i]){   
            int height = h[s.top()], width = i; 
            s.pop();
            if(!s.empty()) width = i - s.top() - 1;       
            maxArea = max(maxArea, width * height);
        }
        s.push(i);
    }
    return maxArea;
}

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> h(matrix[0].size(),0);
        int maxArea = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size();j++){
                if(matrix[i][j]=='0') h[j] = 0;
                else h[j]++;
            }        
            int a = largestRectangleArea(h);
            maxArea = max(maxArea,a);
        }
        return maxArea;
    }
};