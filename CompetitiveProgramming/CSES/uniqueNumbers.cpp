#include <iostream>
#include <set>

using namespace std;

int main(){
    long t, c;
    cin >> t;
    set<long> set;
    for(long i = 0 ; i < t; i++){
        cin >> c;
        set.insert(c);
    }
    cout << set.size();
}