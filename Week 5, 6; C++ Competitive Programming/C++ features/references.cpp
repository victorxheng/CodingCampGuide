#include <iostream>

using namespace std;

// create a function to swap two integers
void swap(int &a, int &b) {
    // a and b are passed by reference
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 0;

    // make a reference to x
    int &r = x;

    r = 5;
    cout << x << '\n'; // 5
}