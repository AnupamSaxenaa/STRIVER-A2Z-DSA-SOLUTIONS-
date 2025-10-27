//1.BETTER SOLUTION - TC-O(2N) SC-O(1)

// Node* sortList(Node *head){
//     // Write your code here.
//     int z = 0 , o = 0 , t = 0;
//     Node* temp = head;
//     while(temp)
//     {
//         if(temp->data == 0) z++;
//         else if(temp->data == 1) o++;
//         else t++;

//         temp = temp->next;
//     }

//     temp = head;
//     while(z!=0)
//     {
//         temp->data = 0;
//         temp = temp->next;
//         z--;
//     }

//         while(o!=0)
//     {
//         temp->data = 1;
//         temp = temp->next;
//         o--;
//     }
//         while(t!=0)
//     {
//         temp->data = 2;
//         temp = temp->next;
//         t--;
//     }

// return head;
// }

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// Node* sortList(Node *head){

//     if(head==nullptr || head->next==nullptr) return head;
//     Node* d1 = new Node(-1); 
//     Node* temp1 = d1;
//     Node* d2 = new Node(-1); 
//     Node* temp2 = d2;
//     Node* d3 = new Node(-1); 
//     Node* temp3 = d3;

//     Node* temp = head;
//     while(temp) {
//         if(temp->data == 0) {
//             temp1->next = temp;
//             temp1 = temp1->next;
//         } else if(temp->data == 1) {
//             temp2->next = temp;
//             temp2 = temp2->next;
//         } else {
//             temp3->next = temp;
//             temp3 = temp3->next;
//         }
//         temp = temp->next;
//     }

//     temp1->next = (d2->next) ? d2->next : d3->next; 
//     temp2->next = d3->next;                         
//     temp3->next = nullptr;                      

//     Node* newHead = d1->next;

    
//     delete d1;
//     delete d2;
//     delete d3;

//     return newHead;
// }
