#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    map<char,int> letterNumber;
    letterNumber['I'] = 1;
    letterNumber['V'] = 5;
    letterNumber['X'] = 10;
    letterNumber['L'] = 50;
    letterNumber['C'] = 100;
    letterNumber['D'] = 500;
    letterNumber['M'] = 1000;
    for(int i = 0; i < s.length(); i++){
        if(i + 1 < s.length() && letterNumber[s[i+1]] > letterNumber[s[i]]){
            sum += letterNumber[s[i+1]] - letterNumber[s[i]];
            i++;
        }
        else{
            sum += letterNumber[s[i]];
        }
    }
    cout << sum;
    return 0;
}