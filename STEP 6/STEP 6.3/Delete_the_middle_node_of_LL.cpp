//1.BETTER SOLUTION - TC-O(N + N/2) SC-O(1)

// class Solution
// {
//     public:
//         ListNode* deleteMiddle(ListNode *head)
//         {
//             if(head==nullptr || head->next==nullptr) return nullptr;
//             ListNode *temp = head;
//             int cnt = 0;
//             while (temp)
//             {
//                 temp = temp->next;
//                 cnt++;
//             }

//             int target = cnt / 2 + 1;

//             if (target == 1)
//             {
//                 ListNode *dummy = head;
//                 head = head->next;
//                 delete dummy;
//                 return head;
//             }

//             temp = head;
//             for (int i = 2; i < target; i++)
//                 temp = temp->next;

//             ListNode *deleteable = temp->next;
//             temp->next = deleteable->next;
//             delete deleteable;
//             return head;
//         }
// };

//2.OPTIMAL SOLUTION - TC-O(N/2) SC-O(1)

// class Solution
// {
//     public:
//         ListNode* deleteMiddle(ListNode *head)
//         {
//            	// 0 nodes and 1 nodes
//             if (head == nullptr || head->next == nullptr) return nullptr;
//             ListNode *slow = head;
//             ListNode *fast = head;
//            	// 2 nodes
//             if (slow->next->next == nullptr)
//             {
//                 ListNode *deleteable = slow->next;
//                 slow->next = deleteable->next;
//                 delete deleteable;
//                 return head;
//             }

//            	// general case
//             ListNode* prev = slow;
//             while (fast!= nullptr && fast->next!= nullptr)
//             {
//                 fast = fast->next->next;
//                 prev = slow;
//                 slow = slow->next;
//             }

//             ListNode *deleteable = prev->next;
//             prev->next = deleteable->next;
//             delete deleteable;
//             return head;
//         }
// };

