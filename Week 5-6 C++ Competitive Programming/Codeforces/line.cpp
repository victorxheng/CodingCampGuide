#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n; string s;
    cin >> t;
    for(int i =0; i < t; i++){
        cin >> n >> s;
        int half1 = n/2, half2Start = n%2==0 ? n/2+1:n/2+2;
        vector<int> diff;
        int score = 0;
        for(int j = 0; j <half1; j++){
            if(s[j] == 'L'){
                diff.push_back(n-1-2*j);
                score += j;
            }
            else{
                score += (n-1-j);
            }
            cout << "j: " << j << ", score: " << score;
        }
        for(int j = half2Start; j <n; j++){
            if(s[j] == 'R'){
                diff.push_back(2*j-n+1);
                score += (n-1-j);
            }
            else{
                score += (j);
            }
            cout << "j: " << j << ", score: " << score;
        }
        sort(diff.begin(),diff.end());
        for(int a : diff){
            cout << a << " " << endl;
        }
        int index = diff.size()-1;
        for(int b =0; b < n; b++){
            if(index >= 0){
                score += diff[index];
                index--;
            }
            cout << score << " ";
        }
        cout << endl;
    }
    return 0;
}