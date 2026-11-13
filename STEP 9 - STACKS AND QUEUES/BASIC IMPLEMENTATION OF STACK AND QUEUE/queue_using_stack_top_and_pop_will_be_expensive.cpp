
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class q {
    stack<int> s1, s2;

public:
    void push(int val) {
        s1.push(val);
    }

    void pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) return;
        s2.pop();
    }

    void front() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) {
            cout << "QUEUE IS EMPTY!" << endl;
            return;
        }

        cout << "FRONT: " << s2.top() << endl;
    }
};

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;

    q qu;
    qu.push(5);
    qu.push(10);
    qu.push(8);

    qu.front();  // 5
    qu.pop();

    qu.front();  // 10
    qu.pop();

    qu.front();  // 8

    return 0;
}
