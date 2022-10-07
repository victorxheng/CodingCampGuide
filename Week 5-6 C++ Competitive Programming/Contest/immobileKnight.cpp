#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        if(n==1 || m == 1){
            cout << "1 1" << endl;
        }
        else{
            cout << "2 2" << endl;
        }
    }    

    return 0;
}