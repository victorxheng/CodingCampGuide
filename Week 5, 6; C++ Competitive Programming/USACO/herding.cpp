#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ifstream fin("herding.in");
    ofstream fout("herding.out");
    vector<int> v (3);
    fin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    if(v[2] - v[0] == 2) {
        fout << "0" << endl << "0";
        return 0;
    }
    else if(v[1] - v[0] == 2 || v[2] - v[1] == 2) {
        fout << "1" << endl;
    }
    else {
        fout << "2" << endl;
    }
    int max1 = v[1] - v[0] - 1;
    int max2 = v[2] - v[1] - 1;
    if(max1 > max2) {
        fout << max1;
    }
    else {
        fout << max2;
    }
    return 0;
}