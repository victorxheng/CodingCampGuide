#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long n, l, lamp, r;
    cin >> n >> l;
    vector<unsigned long long> street;
    for(int i = 0; i < n; i++){
        cin >> lamp;
        street.push_back(lamp);
    }
    sort(street.begin(), street.end());
    r = max(street[0], l - street[n-1]) * 2;
    for(int i = 0; i < n - 1; i++){
        r = max(r, street[i+1] - street[i]);
    }
    if(r % 2 == 0){
        cout << r / 2;
    }
    else{
        cout << r / 2 << ".5";
    }
}