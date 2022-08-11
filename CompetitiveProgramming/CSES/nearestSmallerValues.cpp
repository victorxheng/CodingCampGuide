//CREDIT: AARON
#include <bits/stdc++.h>

using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, x;
    stack<pair<int, int>> st;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        while(!st.empty() && st.top().first >= x){
            st.pop();
        }
        if(st.empty()){
            cout << "0 "; 
        }
        else{
            cout << st.top().second + 1 << " ";
        }
        st.push(make_pair(x, i));
    } 
}