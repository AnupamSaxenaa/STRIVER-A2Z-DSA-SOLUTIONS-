#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class s{
    queue<int>q;
    public:
    void push(int val){
        int sz = q.size();
        q.push(val);
        while (sz--)
        {
            q.push(q.front());
            q.pop();
        }
    }
    void pop() {
        if (q.empty()) return;
        q.pop();
    }
    void top() {
        if (q.empty()) return;
        cout << q.front() << endl;
    }
};

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;
    s st;
    st.push(5);
    st.push(10);
    st.push(8);
    st.top();
    st.pop();
    st.top();
    return 0;
}