#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    
    // push 3 into stack
    st.push(3);
    // push 5 into stack
    st.push(5);

    // print the top element of the stack
    cout << st.top() << '\n'; // 5

    // pop the top element of the stack
    st.pop(); // is a void function

    // get size of the stack
    cout << st.size() << '\n'; // 1

    // check if the stack is empty
    cout << st.empty() << '\n'; // false

    // clear the stack
    while (!st.empty()) {
        st.pop();
    }
}