//1.OPTIMAL SOLUTION 1- TC-O(N) SC-O(1)

// Node * deleteAllOccurrences(Node* head, int k) {
//     // Write your code here
//     if(head==nullptr || (head->next==nullptr && head->data==k)) return nullptr;
//     Node* temp1 = head;
//     Node* temp2 = head->next;

//     while(temp2){
//         if(temp2->data == k){
//             Node* deleteme = temp2;
//             temp1->next = temp2->next;
//              if(temp2->next) temp2->next->prev = temp1;
//             temp2 = temp1->next;
//             delete deleteme;
//         }
//         else{
//             temp1 = temp2;
//             temp2 = temp2->next;
//         }
//     }

//     //head
//     if(head->data == k){
//             Node* deleteme = head;
//             head = head->next;
//              if(head) head->prev = nullptr;
//             delete deleteme;
//     }


//     return head;
// }

//2.OPTIMAL SOLUTION 2 - TC-O(N) SC-O(1)

// Node * deleteAllOccurrences(Node* head, int k) {
//     // Write your code here
//     Node* newHead = head;
//     while(newHead && newHead->data == k){
//         Node* del = newHead;
//         newHead = newHead->next;
//         if(newHead) newHead->prev = nullptr;
//         delete del;
//     }

//     head = newHead;
//     Node* current = head;
//     while(current){
//         if(current->data == k){
//             Node* del = current;
//             Node* prev = current->prev;
//             Node* next = current->next;

//             if(prev) prev->next = next;
//             if(next) next->prev = prev;
//             current = next;
//             delete del;
//         }
//         else current = current -> next;
//     }
   
//     return head;
// }
