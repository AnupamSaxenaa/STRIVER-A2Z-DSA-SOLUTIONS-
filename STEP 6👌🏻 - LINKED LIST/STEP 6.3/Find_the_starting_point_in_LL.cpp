//1.OPTIMAL SOLUTION (HIT AND TRIAL) - TC-O(N) SC-O(1)

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* temp = head;
//         while(temp)
//         {
//             if(temp->val==INT_MIN)
//                 return temp;
//             temp->val = INT_MIN;
//             temp = temp->next;
//         }

//         return temp;
//     }
// };


//2.BRUTE SOLUTION - TC-O(2*N*(TC OF MAP FUNCTION)) SC-O(N)

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* temp = head;
//         unordered_map<ListNode*,int>track;
//         while(temp)
//         {
//             if(track.find(temp)!=track.end())
//                 break;
            
//             track[temp]++;
//             temp = temp->next;
//         }

//         return temp;
//     }
// };


//3.OPTIMAL SOLUTION - TORTOISE HARE METHOD
//TC-O() SC-O()

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         bool loopexist = false;
//         while(fast!=nullptr && fast->next!=nullptr)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
//             if(fast==slow)
//             {
//                 loopexist = true;
//                 break;
//             }
//         }

//         if(loopexist==false) return nullptr;
//         slow = head;
//         while(slow!=fast)
//         {
//             slow = slow->next;
//             fast = fast->next;
//         }

//         return slow;
//     }
// };

