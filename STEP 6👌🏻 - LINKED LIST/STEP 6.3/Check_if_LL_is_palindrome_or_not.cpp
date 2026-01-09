//1.BETTER SOLUTION - TC-O(N) SC-O(N)

// class Solution {
// public:
//     void reverse(ListNode* &head)
//     {
//         ListNode* dummy = new ListNode(-1,head);
//         ListNode* curr = head;
//         while(curr->next!=nullptr)
//         {
//             ListNode* temp = curr->next->next;
//             curr->next->next = dummy->next;
//             dummy->next = curr->next;
//             curr->next = temp;
//         }
//         head = dummy->next;
//         delete dummy;
//     }
//     bool isPalindrome(ListNode* head) {
//         if(head==nullptr || head->next==nullptr) return true;
//         queue<int>q;
//         ListNode* temp = head;
//         while(temp)
//         {
//             q.push(temp->val);
//             temp = temp->next;
//         }
//         reverse(head);
//         ListNode* p1 = head;     
//         while(p1)
//         {
//             int value = q.front();
//             q.pop();
//             if(p1->val != value) return false;
//             p1 = p1->next;
//         }
//         return true;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode* reverse(ListNode* port)
//     {
//         ListNode* dummy = new ListNode(-1, port);
//         ListNode* curr = port;
//         while (curr->next != nullptr)
//         {
//             ListNode* temp = curr->next->next;
//             curr->next->next = dummy->next;
//             dummy->next = curr->next;
//             curr->next = temp;
//         }
//         ListNode* newHead = dummy->next; 
//         delete dummy;
//         return newHead;
//     }
//     bool isPalindrome(ListNode* head) {
//         if (!head || !head->next) return true;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast->next != nullptr && fast->next->next != nullptr)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         slow->next = reverse(slow->next); 
//         ListNode* left = head;
//         ListNode* right = slow->next;
//         bool ans = true;
//         while (right)
//         {
//             if (left->val != right->val)
//             {
//                 ans = false;
//                 break;
//             }
//             left = left->next;
//             right = right->next;
//         }
//         slow->next = reverse(slow->next); 
//         return ans;
//     }
// };
