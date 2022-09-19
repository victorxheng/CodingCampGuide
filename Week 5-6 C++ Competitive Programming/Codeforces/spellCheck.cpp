#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> s;
        if(n== 5){
            vector<char> timur = {'T','i','m','u','r'};
            bool isYes = true;
            for(int i =0; i < 5; i++){
                bool contains = false;
                for(int j = 0; j < timur.size(); j++){
                    if(timur[j]==s[i]){
                        contains = true;
                        timur.erase(timur.begin()+j);
                        break;
                    }
                }
                if(!contains){
                    isYes = false;
                    break;
                }
            }
            if(!isYes){                
                cout << "NO" << endl;
            }
            else{ 
                cout << "YES" << endl;
            }

            
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}