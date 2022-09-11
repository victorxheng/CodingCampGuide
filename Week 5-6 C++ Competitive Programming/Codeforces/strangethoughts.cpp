#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long fives = n / 3;
        long threes = n / 2 - fives;
        long ones = n - fives - threes;

        cout << fives * 5 + threes * 3 + ones << endl;
    }
    return 0;
}