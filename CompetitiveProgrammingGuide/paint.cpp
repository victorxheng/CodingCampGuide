#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin ("paint.in");

    int a, b, c, d;
    fin >> a >> b >> c >> d;

    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        if (i >= a && i < b || i >= c && i < d) {
            sum++;
        }
    }

    ofstream fout ("paint.out");
    fout << sum;

    return 0;
}
