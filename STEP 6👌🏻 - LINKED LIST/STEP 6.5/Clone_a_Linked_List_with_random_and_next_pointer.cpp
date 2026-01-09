//1.BETTER SOLUTION - TC-O(2N) SC-O(N) NOT O(2N) AS ONE N IS USED FOR DELIVERING ANSWER(AUXILIARY)

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {

//         Node* temp = head;
//         unordered_map<Node*,Node*>mpp;
//         while(temp){
//             Node* dum = new Node(temp->val);
//             mpp.insert({temp,dum});
//             temp = temp->next;
//         }


//         temp = head;
//         while(temp){
//             mpp[temp]->next = mpp[temp->next];
//             mpp[temp]->random = mpp[temp->random];
//             temp = temp->next;
//         }

//         return mpp[head];

//     }
// };

//2.OPTIMAL SOLUTION - TC-O(3N) SC-O(N)(AUXILIARY SPACE)

// class Solution
// {
//     public:
//         Node* copyRandomList(Node *head)
//         {
//             if(!head) return head;
//             Node *temp = head;
//             while (temp)
//             {
//                 Node *dummy = new Node(temp->val);
//                 dummy->next = temp->next;
//                 temp->next = dummy;
//                 temp = temp->next->next;
//             }

//             temp = head;

//             while (temp)
//             {
//                 if(temp->random) temp->next->random = temp->random->next;
//                 else temp->next->random = nullptr;
//                 temp = temp->next->next;
//             }

//             temp = head;
//             Node *dum = new Node(-1);
//             Node *ite = dum;

//             while (temp)
//             {
//                 ite->next = temp->next;
//                 ite = ite->next;
//                 temp->next = temp->next->next;
//                 temp = temp->next;
//             }

//             return dum->next;
//         }
// };