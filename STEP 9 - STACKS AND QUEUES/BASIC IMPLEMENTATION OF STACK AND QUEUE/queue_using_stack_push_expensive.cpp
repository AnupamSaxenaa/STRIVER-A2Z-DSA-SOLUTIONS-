#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class q{
    stack<int>s1,s2;
    public:
    void push(int val){
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop() {
        if (s1.empty()) return;
        s1.pop();
    }
    void top() {
        if (s1.empty()) return;
        cout << s1.top() << endl;
    }
};

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;
    q qu;
    qu.push(5);
    qu.push(10);
    qu.push(8);
    qu.top();
    qu.pop();
    qu.top();
    return 0;
}