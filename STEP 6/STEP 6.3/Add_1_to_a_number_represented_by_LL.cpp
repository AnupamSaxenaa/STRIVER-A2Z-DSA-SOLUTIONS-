//1.BETTER SOLUTION - TC-O(3N) SC-O(1)}

// void reverse(Node* &head){
//     if(head==nullptr || head->next==nullptr) return;
//     Node* dummy = new Node(-1);
//     dummy->next = head;
//     Node* prev = dummy;
//     Node* curr = prev->next;

//     while(curr && curr->next){
//         Node* temp = curr->next->next;
//         curr->next->next = prev->next;
//         prev->next = curr->next;
//         curr->next = temp;
//     }
//     head = dummy->next;
//     return;
// }

// Node *addOne(Node *head)
// {
//     // Write Your Code Here.
//     reverse(head);
//     int carry = 1;
//     Node* temp = head;
//     while(temp){
//         int sum = temp->data + carry;
//         temp->data = sum%10;
//         carry = sum/10;

//         if(temp->next==nullptr && carry==1){
//             Node* dummy = new Node(0);
//             temp->next = dummy;
//         }

//         temp = temp->next;
//     }
//     reverse(head);
//     return head;
// }


//2.OPTIMAL SOLUTION - TC-O(N) SC-O(N)(STACK SPACE)

// int callRecursion(Node* &head){
//     if(head==nullptr) return 1;
//     int carry = callRecursion(head->next);
//     int sum = head->data + carry;
//     head->data = sum%10;
//     return sum/10;
// } 

// Node *addOne(Node *head)
// {
//     // Write Your Code Here.
//     int carry = callRecursion(head);
//     if(carry==1){
//         Node* dummy = new Node(1,head);
//         head = dummy;
//     }
//     return head;
// }