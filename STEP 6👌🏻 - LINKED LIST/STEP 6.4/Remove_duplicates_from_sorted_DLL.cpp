//1.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// Node * removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head==nullptr || head->next==nullptr) return head;
//     Node* curr = head;
//     while(curr){
//         Node* temp = curr->next;
//         while(temp && temp->data == curr->data) {
//             Node* del = temp;
//             temp = temp->next;
//             delete del;
//         }
//         curr->next = temp;
//         if(temp) temp->prev = curr;
//         curr = temp;

//     }
//     return head;
// }
