#include <iostream>

using namespace std;

int main() {
    int x = 0;
    
    // make a pointer pointing to x
    int *p = &x;

    // print the location of x
    cout << p << '\n';

    // print the value of x
    cout << *p << '\n';

    // modify x using p
    *p = 1;

    // print the value of x
    cout << x << '\n'; // x is 1

    // you can make pointer pointing to another pointer
    int **q = &p;

    **q = 2; // modify x using q

    
    // You can treat arrays as pointers
    int arr[3] = {1, 2, 3};

    cout << *arr << '\n'; // 1
    cout << *(arr + 1) << '\n'; // 2
}