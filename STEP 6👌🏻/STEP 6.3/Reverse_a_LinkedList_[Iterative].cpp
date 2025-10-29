//1.BETTER SOLUTION - TC-O(2N) SC-O(N)
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         stack<int>s;
//         ListNode* temp = head;
//         while(temp)
//         {
//             s.push(temp->val);
//             temp=temp->next;
//         }

//         temp = head;
//         while(temp)
//         {
//             temp->val = s.top();
//             s.pop();
//             temp = temp->next;
//         }

//         return head;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* dummy = new ListNode(-1,head);
//         ListNode* prev = dummy;
//         ListNode* curr = dummy->next;

//         if( head == nullptr || head->next == nullptr) return head;
        
//         while(curr->next!=nullptr )
//         {
//             ListNode* temp = curr->next->next;
//             curr->next->next = prev->next;
//             prev->next = curr->next;
//             curr->next = temp;

//         }

//         return dummy->next;
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* temp = head;
//         ListNode* prev = nullptr;

//         while(temp)
//         {
//             ListNode* front = temp->next;
//             temp->next = prev;
//             prev = temp;
//             temp = front;
//         }

//         return prev;
//     }
// };