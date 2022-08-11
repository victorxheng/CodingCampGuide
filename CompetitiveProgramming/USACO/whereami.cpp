#include <bits/stdc++.h>

using namespace std;
int main(){
    ifstream fin("whereami.in");
    ofstream fout("whereami.out");
    int f, k;
    string a, sequenceOfNumbers;
    set<string> s;
    fin >> f;
    fin >> sequenceOfNumbers;
    for(int i = 1; i <= sequenceOfNumbers.length(); i++){
        bool isGood = true;
        for(int j = 0; j < sequenceOfNumbers.length() - i + 1; j++){
            a = sequenceOfNumbers.substr(j,i);
            if(s.count(a)){
                s.clear();
                isGood = false;
                break;
            }
            else{
                s.insert(a);
            }
        }
        if (isGood) {
            k = i;
            break;
        }     
    }
    fout << k;
    return 0;
}