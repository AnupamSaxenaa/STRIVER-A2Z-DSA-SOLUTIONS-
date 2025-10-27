//1.BETTER SOLUTION - TC-O(N) SC-O(N)

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         queue<int>q1,q2;
//         ListNode* temp = head;

//         int toggle = 0;
//         while(temp)
//         {
//             if(toggle==0)
//             {
//                 q1.push(temp->val);
//                 toggle = 1;
//             }
//             else
//             {
//                 q2.push(temp->val);
//                 toggle = 0;
//             }
//             temp = temp->next;
//         }

//         temp = head;
//         while(!q1.empty())
//         {
//             int val = q1.front();
//             temp->val = val;
//             q1.pop();
//             temp = temp->next;
//         }
//         while(!q2.empty())
//         {
//             int val = q2.front();
//             temp->val = val;
//             q2.pop();
//             temp = temp->next;
//         }

//         return head;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(!head || !head->next) return head;

//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenHead = even;

//         while(even && even->next) {
//             odd->next = even->next;
//             odd = odd->next;

//             even->next = odd->next;
//             even = even->next;
//         }

//         odd->next = evenHead;
//         return head;
//     }
// };