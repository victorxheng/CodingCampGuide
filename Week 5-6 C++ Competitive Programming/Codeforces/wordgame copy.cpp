#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, j; 
    cin >> t;
    for(int i = 0; i < t; i++){
        map<string,int> combos; string s; vector<string> p1, p2, p3;
        cin >> j;
        for(int k = 0; k < j; k++){
            cin >> s;
            combos[s]++;
            p1.push_back(s);
        }
        for(int k = 0; k < j; k++){
            cin >> s;
            combos[s]++;
            p2.push_back(s);
        }
        for(int k = 0; k < j; k++){
            cin >> s;
            combos[s]++;
            p3.push_back(s);
        }
        int score1 = 0,score2=0,score3=0;
        for(string s : p1){
            score1 += (combos[s] == 1 ? 3 : (combos[s]==2 ? 1 : 0));
        }
        for(string s : p2){
            score2 += (combos[s] == 1 ? 3 : (combos[s]==2 ? 1 : 0));
        }
        for(string s : p3){
            score3 += (combos[s] == 1 ? 3 : (combos[s]==2 ? 1 : 0));
        }
        cout << score1 << " " << score2 << " " << score3 << endl;      
    }

    return 0;
}