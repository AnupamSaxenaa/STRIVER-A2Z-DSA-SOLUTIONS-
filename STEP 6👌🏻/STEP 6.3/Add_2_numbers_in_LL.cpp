//1.OPTIMAL SOLUTION - TC-O(MAX(N1,N2)) SC-O(ABS(N2-N1))(AUXILIARY SPACE)

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* temp1 = l1;
//         ListNode* temp2 = l2;
//         ListNode* prevTemp1 = nullptr;
//         int carry = 0;

//         while (temp1 && temp2) {
//             int sum = temp1->val + temp2->val + carry;
//             carry = sum / 10;
//             temp1->val = sum % 10;

//             if (temp1->next == nullptr && temp2->next != nullptr) {
//                 temp1->next = new ListNode(0);
//             }
//             if (temp2->next == nullptr && temp1->next != nullptr) {
//                 temp2->next = new ListNode(0);
//             }

//             prevTemp1 = temp1;
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }

//         if (carry == 1) {    
//             prevTemp1->next = new ListNode(1);
//         }

//         return l1;
//     }
// };
