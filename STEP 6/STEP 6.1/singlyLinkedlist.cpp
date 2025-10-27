#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1 = nullptr)
    {
        data = data1;
        next = next1;
    }
};

Node *convertToll(vector<int> &v)
{
    Node *head = new Node(v[0]);
    Node *mover = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int findLen(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int searchMe(Node *head, int target)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == target)
            return 1;
        temp = temp->next;
    }
    return 0;
}

void deleteHead(Node *&head) // pointer to pointer NOde** head , as when we call the function it sends a copy a pointer to the real head pointer so we have to dereference it to go to the main pointer also we can update data without pointer to pointer but for changing pointer itself we need this or Node* &head --- head in int main this will work the same as we are taking reference to the pointer
{
    if (head == nullptr)
    {
        head = nullptr;
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void deleteTail(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        head = nullptr;
        return;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
        temp = temp->next;

    delete temp->next;
    temp->next = nullptr;
}

void deleteAtpos(Node *&head, int k)
{
    // TC-O(N^2)
    //  int len = findLen(head);
    //  if (head == nullptr)
    //      return;
    //  if (k > len || k <= 0)
    //  {
    //      cout << "OUT OF BOUND\n";
    //      return;
    //  }

    // if (k == 1)
    // {
    //     deleteHead(head);
    //     return;
    // }
    // else if (k == len)
    // {
    //     deleteTail(head);
    //     return;
    // }

    // else
    // {
    //     Node *temp1 = head;
    //     Node *temp2 = head->next;

    //     for (int i = 1; i < k-1; i++)
    //     {
    //         temp1 = temp1->next;
    //         temp2 = temp2->next;
    //     }

    //     temp1->next = temp2->next;
    //     delete temp2;
    // }

    // TC-O(N)

    if (head == nullptr)
        return;
    if (k == 1)
    {
        deleteHead(head);
        return;
    }
    else
    {
        int cnt = 0;
        Node *temp = head;
        Node *prev;

        while (temp)
        {
            cnt++;
            if (cnt == k)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }

            prev = temp;
            temp = temp->next;
        }
    }
}

void deleteEle(Node *&head, int val)
{
    if (head == nullptr)
        return;
    if (head->data == val)
    {
        deleteHead(head);

        return;
    }
    else
    {

        Node *temp = head;
        Node *prev = nullptr;

        while (temp)
        {

            if (temp->data == val)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }

            prev = temp;
            temp = temp->next;
        }
    }
}

void insertAtHead(Node *&head, int k)
{
    Node *temp = head;
    Node *NewNode = new Node(k);
    if (temp == nullptr)
    {
        head = NewNode;
        return;
    }

    NewNode->next = head;
    head = NewNode;
    return;
}

void insertAtTail(Node *&head, int k)
{
    Node *NewNode = new Node(k);
    if (head == nullptr)
    {
        head = NewNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = NewNode;
}

void insertAtPos(Node *&head, int val, int pos)
{
    // you can add check for pos also to determine where pos is in range or not!!
    Node *NewNode = new Node(val);
    if (head == nullptr)
    {
        if (pos == 1)
        {
            head = NewNode;
            return;
        }
    }

    if (pos == 1)
    {
        NewNode->next = head;
        head = NewNode;
        return;
    }
    Node *temp = head;
    for (int i = 2; i < pos; i++)
    {
        temp = temp->next;
    }

    NewNode->next = temp->next;
    temp->next = NewNode;
}

void insertBeforeK(Node *&head, int val, int k)
{
    Node *newnode = new Node(val);
    if (head->data == k)
    {
        insertAtHead(head, val);
        return;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        if (temp->next->data == k)
        {
            newnode->next = temp->next;
            temp->next = newnode;
            return;
        }
        temp = temp->next;
    }

    if (temp->next->data == k)
    {
        newnode->next = temp->next;
        temp->next = newnode;
        return;
    }

    cout << "something failed!\n";
}

int main()
{

    vector<int> v = {2, 3, 4, 5};
    Node *head = convertToll(v);
    // cout<<head->data<<" ";
    // cout<<head->next->data<<" ";
    // cout<<head->next->next->data<<" ";
    // cout<<head->next->next->next->data<<" "<<endl;
    // traverse(head);
    // cout << findLen(head) << endl;
    // cout << searchMe(head, 9) << endl;
    // deleteHead(head);
    // traverse(head);
    // deleteTail(head);
    traverse(head);
    insertAtTail(head, 0);
    traverse(head);
    insertAtPos(head, 69, 1);
    traverse(head);
    insertBeforeK(head, 12, 7);
    traverse(head);
    return 0;
}