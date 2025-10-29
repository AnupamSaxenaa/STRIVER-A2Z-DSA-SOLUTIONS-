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

void reverseTraversal(Node *&head)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    while (temp->prev != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << temp->val << " ";
    cout << endl;
}

// deletion

void deleteHead(Node *&head)
{
    if (head == nullptr)
    {
        cout << "CANT DELETE|\n";
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *temp = head;
    head = temp->next;
    head->prev = nullptr;
    delete temp;
}

void deleteTail(Node *&head)
{
    if (head == nullptr)
    {
        cout << "CANT DELETE|\n";
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node *prevNode = temp->prev;
    prevNode->next = nullptr;
    delete temp;
}

void deleteAtKth(Node *&head, int k)
{
    if (head == nullptr)
    {
        cout << "CANT DELETE!\n";
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = nullptr;
        delete temp;
    }

    else
    {
        Node *temp = head;
        for (int i = 0; i < k - 1; i++)
            temp = temp->next;

        Node *prevNode = temp->prev;
        prevNode->next = temp->next;
        if (temp->next != nullptr)
            temp->next->prev = temp->prev;
        delete temp;
    }
}

void deleteVal(Node *&head, int data)
{
    if (head == nullptr)
    {
        cout << "cant delete!\n";
        return;
    }

    if (head->next == nullptr && head->prev == nullptr && head->val == data)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *temp = head;
    while (temp && temp->val != data)
    {
        temp = temp->next;
    }

    if (temp != nullptr)
    {
        if (temp->prev == nullptr)
        {
            deleteHead(head);
        }
        else if (temp->next == nullptr)
        {
            deleteTail(head);
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
        return;
    }

    cout << "element not found!\n";
}

// insertion before a node
void insertBeforeHead(Node *&head, int data)
{
    Node *dummy = new Node(data, head, nullptr);
    if (head != nullptr)
        head->prev = dummy;
    head = dummy;
}

void insertBeforeTail(Node *&head, int data)
{
    Node *dummy = new Node(data);
    if (head == nullptr)
        head = dummy;
    else if (head->next == nullptr && head->prev == nullptr)
    {
        dummy->next = head;
        head->prev = dummy;
        head = dummy;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        dummy->next = temp;
        dummy->prev = temp->prev;
        temp->prev->next = dummy;
        temp->prev = dummy;
    }
}

void insertBeforeKthvalue(Node *&head, int data, int k)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->val == k)
            break;
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "ELEMENT NOT FOUND!\n";
        return;
    }

    if (temp->prev == nullptr)
    {
        insertBeforeHead(head, data);
        return;
    }

    Node *dummy = new Node(data);
    dummy->next = temp;
    dummy->prev = temp->prev;
    temp->prev->next = dummy;
    temp->prev = dummy;
}

void insertBeforeKthNode(Node *&head, int data, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;

    if (temp->prev == nullptr)
    {
        insertBeforeHead(head, data);
        return;
    }

    Node *dummy = new Node(data);
    dummy->next = temp;
    dummy->prev = temp->prev;
    temp->prev->next = dummy;
    temp->prev = dummy;
}

int main()
{
    cout << "PROGRAM RUNNING FINE!" << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    Node *head = convertToDll(v);
    // traversal(head);
    // // reverseTraversal(head);
    // // deleteHead(head);
    // // traversal(head);
    // // deleteTail(head);
    // // traversal(head);
    // deleteVal(head, 9);
    traversal(head);
    insertBeforeKthNode(head, 23, 5);
    traversal(head);

    return 0;
}