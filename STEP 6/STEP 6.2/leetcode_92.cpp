//BETTER SOLUTION - TC-O(N) SC-O(N)

// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(left==right)
//             return head;
        
//         int cnt = 1;
//         ListNode* temp = head;
//         while(temp)
//         {
//             if(cnt==left) break;
//             temp = temp->next;
//             cnt++;
//         }

//         ListNode* temp1 = temp;
//         stack<int>s;
        
//         for(int i = 0 ; i < (right-left+1) ; i++)
//         {
//             s.push(temp1->val);
//             temp1 = temp1->next;
//         }

//         temp1 =head;
//                 for(int i = 0 ; i < (right-left+1) ; i++)
//         {
//             temp->val = s.top();
//             s.pop();
//             temp = temp->next;
//         }

//         return head;
//     }
// };

//OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode* dummy = new ListNode(-1,head);
//         ListNode* prev = dummy;
//         for(int i = 0 ; i < left - 1 ;i++)
//             prev = prev->next;
        
//         ListNode* curr = prev->next;
//         for(int i = 0 ; i < right-left ; i++)
//         {
            
//             ListNode* temp = curr->next->next;
//             curr->next->next= prev->next;
//             prev->next = curr->next;
//             curr->next = temp;
//         }


//         return dummy->next;
//     }
// };