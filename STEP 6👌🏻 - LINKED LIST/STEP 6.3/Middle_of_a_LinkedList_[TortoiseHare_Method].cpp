// 1.BETTER SOLUTION - TC-O(2N) SC-O(1)

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         //counting no of nodes
//         ListNode* temp = head;
//         int cnt = 0;
//         while(temp)
//         {
//             temp = temp->next;
//             cnt++;
//         }

//         int target = cnt/2+1;
//         temp = head;
//         for(int i = 0 ; i < target-1 ; i++) temp = temp->next;
//         return temp;
//     }
// };

// 2.OPTIMAL SOLUTION - TC-O(N) SC-O(1);

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=nullptr && fast->next!=nullptr)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return slow;
//     }
// };