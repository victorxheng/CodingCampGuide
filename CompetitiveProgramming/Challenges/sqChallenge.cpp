#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void stackMethod(stack<int> st){
    stack<int> st2;
    int t = st.size();
    for(int i = 0; i < t; i++){
        st2.push(st.top());
        cout << st.top() << " ";
        st.pop();
    }
    for(int i = 0; i < t; i++){
        st.push(st2.top());
        st2.pop();
    }
}

void queueMethod(queue<int> q){
    queue<int> q2;
    int t = q.size();
    for(int i = 0; i < t; i++){
        q2.push(q.front());
        cout << q.front() << " ";
        q.pop();
    }
    for(int i = 0; i < t; i++){
        q.push(q2.front());
        q2.pop();
    }
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    stackMethod(st);
    cout << endl;
    queue<int> q;
    q.push(4);
    q.push(5);
    queueMethod(q);
}