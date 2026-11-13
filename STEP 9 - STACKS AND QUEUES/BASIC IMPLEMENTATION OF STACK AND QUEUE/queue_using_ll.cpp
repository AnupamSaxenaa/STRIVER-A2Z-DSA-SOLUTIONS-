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

class q{
    node* back = nullptr;
    node* front = nullptr;
    int size = 0;
    public:
    void push(int val)
    {
        node* temp = new node(val);
        if(back==nullptr) front = back = temp;
        else{
            back->next = temp;
            back = temp;
        }
        size++;
    }
    void pop()
    {
        if(size==0){return;}
        node* temp = front;
        front = front->next;
        if(front==nullptr) back = nullptr;
        delete(temp);
        size--;
    }
    void length() {cout<<"SIZE : "<<size<<endl;}
    void frontElement() {if(size==0){return;} cout<<"FRONT : "<<front->val<<endl;}
    void display() {
        if(size==0) {return;}
        node* temp = front;
        while (temp)
        {
            cout<<temp->val<<"<-";
            temp = temp->next;
        }
        cout<<"BACK REACHED!\n";
    }
    ~q() {
        while (front) {
            node* temp = front;
            front = front->next;
            delete temp;
        }
        back = nullptr;
    }
};

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;
    q qu;
    qu.push(5);
    qu.push(6);
    qu.push(9);
    qu.display();
    return 0;
}