#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ifstream fin ("paint.in");
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		if (i >= a && i < b || i >= c && i < d) {
			sum++;
		}
	}
	
	//ofstream fout ("paint.out");
	cout << sum;
	
    return 0;
}

