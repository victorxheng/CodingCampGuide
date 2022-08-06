#include <iostream>

using namespace std;

int main() {
    // normal way of initializing an int
    int x = 0;

    // make an int on the heap
    int *p = new int;
    *p = 5;

    // to avoid memory leaks,
    // delete the pointer
    delete p;

    // You might be wondering why vectors
    // don't need to be deleted.
    // The reason is that vectors are
    // automatically deleted when the program
    // exits. (C++ classes can have a destructor)

    // Let's create an array on the heap
    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    // delete the array
    delete[] arr;
}