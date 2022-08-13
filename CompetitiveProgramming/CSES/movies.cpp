#include <bits/stdc++.h>

using namespace std;

int main(){
    long n, start, end;
    cin >> n;
    vector<pair<long, long>> v;
    for(int i = 0; i < n; i++){
        cin>> start >> end;
        v.push_back({end, start});
    }
    sort(v.begin(), v.end());

    long currentEnd = v[0].first, movies = 1;
    for(int i = 1; i < n; i++){
        if(v[i].second >= currentEnd){
            movies++;
            currentEnd = v[i].first;
        }
    }
    cout << movies;
}