#include <set> // include the set library
// sets are sorted while unordered sets are not.
// unordered sets use hashtables while sets
// use binary search trees.
#include <unordered_set>
#include <iostream>
using namespace std;

// sets are unordered collections of unique elements

int main() {
    set<int> s; // create a set of ints
    
    // add 5 to the set
    s.insert(5);
    
    // add 10 to the set
    s.insert(10);

    // check if 5 is in the set
    // find will return an iterator to the element if in set
    // otherwise it will return an iterator to the end of the set
    if (s.find(5) != s.end()) {
        cout << "5 is in the set" << endl;
    }    
    
    // Remove 10 from the set
    s.erase(10);
    // you can use an iterator to remove an element
    s.erase(s.find(10));

    // create an unordered set
    // unordered set has basically the same
    // methods, but begin is not the smallest element
    unordered_set<int> us;

    // create a multiset (part of set library)
    // multisets allow you to have duplicate elements
    multiset<int> ms;

    // add 5 to the multiset
    ms.insert(5);

    // remove 5 from the multiset (removes all instances)
    ms.erase(5);

    // remove the first instance of 5 from the multiset
    ms.erase(ms.find(5));

    // count number of 5s in the multiset
    cout << ms.count(5) << endl;

    // loop through the multiset (also works with set/unordered_set)
    for (int element : ms) {
        cout << element << endl;
    }

    // just know that unordered_multiset exists
}