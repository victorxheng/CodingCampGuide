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

    // check if key 5 is in map
    // use count method
    bool hasfive = mp.count(5);

    // loop through map (lowest to greatest key)
    for (auto it = mp.begin(); it != mp.end(); it++) {
        // first is the key, second is the value
        cout << it->first << " " << it->second << endl;
    }

    // C++17 has a better way to loop through maps
    for (auto [key, value] : mp) {
        cout << key << " " << value << endl;
    }

    // loop from greatest to least key
    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // create an unordered map (it is not ordered and faster)
    unordered_map<int, int> ump;
    
    // you can use unordered maps in almost the same way
    // as maps
    ump[5] = 6;

    // loop through unordered map (not in order)
    for (auto [key, value] : ump) {
        cout << key << " " << value << endl;
    }
}