//CREDIT: AARON
#include <bits/stdc++.h>

using namespace std;
int main(){
    map<int, int> s;
    int n, x, num, diff;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> num;
        diff = x - num;
        if(s.count(diff)){
            cout << i + 1 << " " << s[diff];
            return 0;
        }
        else{
            s[num] = i + 1;
        } 
    }
    cout << "IMPOSSIBLE";
}