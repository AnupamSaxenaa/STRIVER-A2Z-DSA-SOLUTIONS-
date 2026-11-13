#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node(int val,node* next = nullptr){
        this->val = val;
        this->next = next;
    }
};

class s{
    public:
    node* top = nullptr;
    int currS = 0;

    void push(int val){
        node *temp = new node(val,top);
            top = temp;
        currS++;
    }

    void pop(){
        if(top==nullptr) return;
        node* temp = top;
        top = top->next;
        delete(temp);
        currS--;
    }

    void size()
    {
        cout<<"SIZE : "<<currS<<endl;
    }

    void peek()
    {
        if(top==nullptr) {
            cout<<"STACK IS EMPTY!!"<<endl;
            return;
        }
        cout<<"TOP ELEMENT : "<<top->val<<endl;
    }

    void display()
    {
        while(top){
            cout<<top->val<<"->";
            top = top->next;
        }
        cout<<"END REACHED!"<<endl;
    }

    ~s(){
        while (top)
        {
            node* temp = top;
            top = top->next;
            delete(temp);
        }
    }
};

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;
    s st;
    st.push(10);
    st.push(5);
    st.display();
    return 0;
}