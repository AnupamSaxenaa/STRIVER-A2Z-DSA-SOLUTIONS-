#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

public:
    Node(int val1, Node *next1 = nullptr, Node *prev1 = nullptr)
    {
        val = val1;
        next = next1;
        prev = prev1;
    }
};

void traversal(Node *&head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *convertToDll(vector<int> &v)
{
    Node *head = new Node(v[0]);
    Node *prev = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *dummy = new Node(v[i], nullptr, prev);
        prev->next = dummy;
        prev = dummy;
    }
    return head;
}
// reversing algos
void extremeSolution(Node *&head) //tc-o(2n) sc-o(n)
{
    if (head == nullptr)
        return;

    Node *temp = head;
    stack<int> s;
    while (temp)
    {
        s.push(temp->val);
        temp = temp->next;
    }

    temp = head;
    while (temp)
    {
        temp->val = s.top();
        s.pop();
        temp = temp->next;
    }
}

void optimalSolution(Node *&head) //tc-o(n) sc-o(1)
{
    if (head == nullptr)
        return;

    Node *temp = head;
    while (temp->next!=nullptr)
    {
        Node* a = temp->next;
        temp->next = temp->prev;
        temp->prev = a;
        temp = temp->prev;
    }
    temp->next = temp->prev;
    temp->prev = nullptr;

    head = temp;
}

int main()
{
    cout << "PROGRAM RUNNING FINE!" << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    Node *head = convertToDll(v);
    extremeSolution(head);
    traversal(head);
    optimalSolution(head);
    traversal(head);
    return 0;
}