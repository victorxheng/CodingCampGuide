#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("pails.in");
    int x, y, m;
    fin >> x >> y >> m;
    int max = 0;
    int compare = 0;
    for(int i = 0; i <= m/y; i++) {
        compare = y * i;
        while(compare+x <= m) {
            compare += x;
        }
        if(compare > max) {
            max = compare;
        }
    }
    ofstream fout("pails.out");
    fout << max;
    return 0;
}