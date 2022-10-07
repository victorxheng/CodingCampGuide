#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, prev, curr;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> prev;
        string s = to_string(prev);
        bool works = true;

        for(int j = 0; j < n-1; j++){
            cin >> curr;
            if(curr <= prev && curr != 0){
                works = false;                
            }           
            else{
                s = s + " " + to_string(prev + curr);
                prev = prev + curr;
            } 
        }
        if(works){
            cout << s << endl;
        }
        else{
            cout << "-1" << endl;
        }

    }    

    return 0;
}