//1.OPTIMAL SOLUTION - TC-O(N) SC-O(1) (HIT AND TRAIL METHOD)

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head==nullptr || head->next==nullptr) return false;
//         ListNode* temp = head;
//         while(temp)
//         {
//             if(temp->val == INT_MIN) return true;
//             temp->val = INT_MIN;
//             temp = temp->next;
//         }
//         return false;
//     }
// };


//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head==nullptr || head->next==nullptr) return false;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=nullptr && fast->next!=nullptr)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;
//     }
// };


//3.BRUTE SOLUTION - FOR BRUTE JUST STORE POINTER ALONG WITH ITS VALUE IN MAP AND IF YOU AGAIN VISIT IS CHECK IF IT IS VISITED THEN RETURN TRUE ELSE RETURN FALSE;
