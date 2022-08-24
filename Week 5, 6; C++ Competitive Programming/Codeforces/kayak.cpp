// https://codeforces.com/contest/1679/problem/B
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int main()
{
    long n;
    cin >> n;

    vector<long> v;

    for (long i = 0; i < n*2; i++)
    {
        long a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    long minSum = -1;
    for(int i = 0; i < n*2; i++){
        for(int j = i+1; j < n*2; j++){
            vector<int> temp;
            for(int k = 0; k < n*2; k++){
                if(k != i && k != j){
                    temp.push_back(v[k]);
                }
            }

            long sum = 0;
            for(int k = 1; k < temp.size(); k+=2){
                sum += temp[k] - temp[k-1];
            }            
            if(sum < minSum || minSum == -1){
                minSum = sum;
            }
        }
    }
    cout<< minSum;

    return 0;
}

