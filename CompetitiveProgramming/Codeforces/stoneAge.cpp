// https://codeforces.com/contest/1679/problem/B
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    unsigned long long int n, q, setVal = 0, timestamp  = 0;
    cin >> n >> q;

    unordered_map<long, pair<long, long>> m;

    unsigned long long int counter = 0;
    // populate array with values
    for (long i = 1; i <= n; i++)
    {
        long a;
        cin >> a;
        m[i] = {a, timestamp};
        counter += a; // increase counter
    }

    for (long i = 0; i < q; i++)
    {
        // loop through all queries
        int startInt;
        cin >> startInt;

        if (startInt == 1)
        {
            long ind, val;
            cin >> ind >> val;
            if (m[ind].second == timestamp)
            {
                // set value is updated correctly. it's been reset then changed already
                counter += (val - m[ind].first); // increase counter by differece between new value - old value
            }
            else
            {
                // set value has not been updated, so it's outdated after reset
                counter += (val - setVal); // increase counter by new value - value everything is set to
            }
            // set index to value
            m[ind] = {val, timestamp};
        }
        else
        {
            cin >> setVal;
            ++timestamp;
            counter = setVal * n;            
        }
        cout << counter << endl;
    }
    return 0;
}
