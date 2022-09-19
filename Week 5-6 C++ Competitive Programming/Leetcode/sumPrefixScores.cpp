#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        vector<int> index(words.size(),0);
        vector<int> scores(words.size(),0);
        for(int i =0; i < words.size(); i++){
            
            //cout << "i: " << index[i] << endl;
            //cout << "words[i]: " << words[i] << endl;
            //cout << "index[i]: " << index[i] << endl;
            //cout << "scores[i]: " << scores[i] << endl;
            int score = 0;
            vector<vector<int>> indexes;
            vector<int> ii;
            for(int j = i+1; j<words.size();j++){
                ii.push_back(j);
                //cout << "j " << j << endl;
            }
            indexes.push_back(ii);
            for(int j = index[i]; j< words[i].length(); j++){
                string sub = words[i].substr(0,j+1);
                vector<int> ij;
                //cout << "sub: " << sub << endl;
                int matching = 1;
                for(int k : indexes[indexes.size()-1]){
                //cout << "words[k].substr(0,j+1): " << words[k].substr(0,j+1) << endl;
                    if(words[k].substr(0,j+1)==sub){
                        matching++;
                        ij.push_back(k);
                    }
                }

                
                score += matching;
                //cout << "matching: " << matching << endl;
                for(int k : ij){
                    scores[k] += matching;
                    index[k] = j+1;
                }        
                indexes.push_back(ij);        
            }
            scores[i] += score;
            //cout << "score: " << score << endl;
        }
        return scores;
    }
};