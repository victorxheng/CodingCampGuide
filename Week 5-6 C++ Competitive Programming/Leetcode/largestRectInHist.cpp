#include <bits/stdc++.h>

using namespace std;

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