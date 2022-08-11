#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

// maps are containers that store
// key value pairs. The keys are unique
// unless it is a multimap.

int main() {
    map<int, int> mp;
    
    // set key 5 to 6
    mp[5] = 6;

    // access the value of key 5
    int six = mp[5];

    // if key doesn't exist, map will give you the default
    // value of the type (0 for int)
    // set 1 to 0 and return 0
    int zero = mp[1];

    // remove five from map
    mp.erase(5);

}