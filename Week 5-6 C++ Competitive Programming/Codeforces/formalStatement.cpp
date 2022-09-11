#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, num;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> a;
        vector<int> b;
        for(int j = 0; j < n; j++){
            cin >> num;
            a.push_back(num);
        }
        for(int j = 0; j < n; j++){
            cin >> num;
            b.push_back(num);
        }
        //cases
        //1. all numbers must be greater in B than A
        //2. all decreases cannot be more than 2
        bool yes = true;
        for(int j = 0; j < n; j++){
            if(a[j] > b[j]){
                yes = false;
                break;
            }
            else if(j > 0 && b[j] < b[j-1]-1){
                if(a[j-1]!=b[j-1]){
                yes = false;
                break;
                }
            }
            else if(j==0 && b[j] < b[n-1]-1){
                if(a[n-1] != b[n-1]){
                yes = false;
                break;
                }
            }
        }
        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}