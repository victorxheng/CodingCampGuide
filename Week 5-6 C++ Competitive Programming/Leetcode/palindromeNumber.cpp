#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if(x < 0 || (x!= 0 && x%10 == 0))return false;

    int r = 0;
    while(x > r){
        r = r * 10 + x % 10;
        x /= 10;
    }
    return r == x || r / 10 == x;

    /*if (x < 0)
        return false;
    while (x > 9)
    {
        if ((int)x / (int)pow(10, (int)log10(x)) != x % 10)
        {
            return false;
        }
        else
        {
            int size = log10(x);
            x = x % (int)pow(10, (int)log10(x));
            x /= 10;
            if(x == 0) return true;
            if((int)log10(x) != size - 2){
                int projectedSize = (int)log10(x) - ((size - 2) - (int)log10(x));
                while(((int)log10(x)) > projectedSize && x > 9 ){
                    if(x % 10 != 0) return false;
                    else x/=10;
                }
            }
        }
    }
    return true;*/

    return 0;
}