#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("breedflip.in");
    ofstream fout("breedflip.out");
    int n, currentCounter = 0, counter = 0;
    string first, second;
    fin >> n >> first >> second;
    for(int i=0; i<n; i++){
        if(first.at(i) != second.at(i)){
            currentCounter++;
        }
        else{
            if(currentCounter != 0){
                counter++;
                currentCounter = 0;
            }
        }
    }
    fout << counter << endl;
}