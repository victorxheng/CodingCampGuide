#include <vector> // include the vector library
#include <iostream>

// vectors are dynamic arrays that can be resized

using namespace std; // use the standard namespace

int main() {
    vector<int> v; // create a vector of ints

    // add 5 to the vector
    v.push_back(5);

    // add 10 to the vector
    v.push_back(10);

    // add 3 to the front of the vector
    // v.begin() is the iterator pointing to the first element of the vector
    v.insert(v.begin(), 3);

    // loop through the vector and print each element
    // a for each loop
    for (int element : v) {
        cout << element << endl;
    }
    // a for loop
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    // using iterators
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }

    // erase the first element of the vector
    v.erase(v.begin());

    // set the second element of the vector to 4
    v[1] = 4;

    // get the size of the vector
    cout << v.size() << endl;

    // check if vector is empty
    bool isempty = v.empty();
}