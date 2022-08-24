#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, arr, q;
    ifstream fin("cowqueue.in");
    fin >> n;
    int sum = 0;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        fin >> arr >> q;
        v.push_back(make_pair(arr, q));
    }
    sort(v.begin(), v.end());
    for(int j = 0; j < n; j++) {
        if(sum < v[j].first) {
            sum = v[j].first + v[j].second;
        }
        else{
            sum += v[j].second;
        }
    }
    ofstream fout("cowqueue.out");
    fout << sum;
}