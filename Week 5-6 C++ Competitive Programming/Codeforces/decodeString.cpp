#include <bits/stdc++.h>

using namespace std;

int main()
{
    //a = 97
    //z = 122
    int t, l;
    string s;
    cin >> t;
    for(int i = 0; i < t; i ++){
        cin >> l >> s;
        string o = "";
        for(int j = 0; j < l; j++){
            if(j+2 < l){
                if(s[j+2] == '0'){//two digit number
                    if(j+3<l && s[j+3] == '0'){
                        
                    }
                    else{
                        o = o + ((char)(stoi(string(1,s[j])+(string(1,s[j+1])))+96));
                        j+=2;
                        continue;
                    }
                }
            }
            o += (char)(stoi(string(1,s[j])) + 96);
        }
        cout << o << endl;
    }
    return 0;
}