//1.BETTER SOLUTION - TC-O(2*N) SC-O(1)

// class Solution
// {
//     public:
//         ListNode* removeNthFromEnd(ListNode *head, int n)
//         {
//             if (head == nullptr || head->next == nullptr) return nullptr;

//             int totalN = 0;
//             ListNode *temp = head;
//             while (temp)
//             {
//                 totalN++;
//                 temp = temp->next;
//             }

//             int target = totalN - n + 1;
//             ListNode *t1 = head;
//             ListNode *t2 = t1->next;
//             if (target == 1)
//             {
//                 ListNode *temper = head;
//                 head = head->next;
//                 delete temper;
//                 return head;
//             }

//             for (int i = 2; i < target; i++)
//             {
//                 t1 = t1->next;
//                 t2 = t2->next;
//             }

//             t1->next = t2->next;
//             delete t2;
//             return head;
//         }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head==nullptr || head->next==nullptr) return nullptr;
//         ListNode* fast = head;
//         ListNode* slow = head;

//         int cnt = n;
//         while(cnt!=0) 
//         {
//             fast = fast->next;
//             cnt--;
//         }

//         if(fast==nullptr)
//         {
//             ListNode*deletable = head;
//             head = head->next;
//             delete deletable;
//             return head;
//         }

//         while(fast->next!=nullptr)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         ListNode* nextt = slow->next;
//         slow->next = nextt->next;
//         delete nextt;
//         return head;
//     }
// };