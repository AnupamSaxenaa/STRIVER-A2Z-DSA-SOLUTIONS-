//1.BRUTE SOLUTION - SC-O(N) TC-O(NLOGN + 2N)

// class Solution {
// public:
//     ListNode* sortList(ListNode* head) {
//         ListNode* temp = head;
//         vector<int>v;
//         while(temp)
//         {
//             v.push_back(temp->val);
//             temp = temp->next;
//         }

//         sort(v.begin(),v.end());
//         temp = head;

//         for(int i = 0 ; i < v.size() ; i++)
//         {
//             temp->val = v[i];
//             temp = temp->next;
//         }

//         return head;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O((N/2+N)*LOGN) SC-O(1)

// class Solution
// {
//     public:

//         ListNode* findM(ListNode *head)
//         {
//             ListNode *fast = head->next;
//             ListNode *slow = head;

//             while (fast && fast->next)
//             {
//                 fast = fast->next->next;
//                 slow = slow->next;
//             }

//             return slow;
//         }

//     ListNode* merge(ListNode *lefthead, ListNode *righthead)
//     {
//         ListNode *dummy = new ListNode(-1);
//         ListNode *temp = dummy;
//         while (lefthead && righthead)
//         {
//             if (lefthead->val >= righthead->val)
//             {
//                 temp->next = righthead;
//                 temp = temp->next;
//                 righthead = righthead->next;
//             }
//             else
//             {
//                 temp->next = lefthead;
//                 temp = temp->next;
//                 lefthead = lefthead->next;
//             }
//         }

//         while (lefthead)
//         {
//             temp->next = lefthead;
//             temp = temp->next;
//             lefthead = lefthead->next;
//         }

//         while (righthead)
//         {
//             temp->next = righthead;
//             temp = temp->next;
//             righthead = righthead->next;
//         }

//         return dummy->next;
//     }

//     ListNode* sortList(ListNode *head)
//     {
//         if (!head || !head->next) return head;

//         ListNode *middle = findM(head);
//         ListNode *lefthead = head;
//         ListNode *righthead = middle->next;

//         middle->next = nullptr;

//         lefthead = sortList(lefthead);
//         righthead = sortList(righthead);
//         return merge(lefthead, righthead);
//     }
// };