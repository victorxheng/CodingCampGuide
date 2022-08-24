#include <queue>
#include <iostream>

using namespace std;

int main() {
    // create a queue
    queue<int> q;

    // add 5 to queue
    q.push(5);

    // add 10 to queue
    q.push(10);

    // get the first element of the queue
    cout << q.front() << '\n'; // 5

    // get the last element of the queue
    cout << q.back() << '\n'; // 10

    // remove the first element of the queue
    q.pop(); // void function

    // get size of the queue
    cout << q.size() << '\n'; // 1

    // check if the queue is empty
    cout << q.empty() << '\n'; // false

    // clear the queue
    while (!q.empty()) {
        q.pop();
    }
}