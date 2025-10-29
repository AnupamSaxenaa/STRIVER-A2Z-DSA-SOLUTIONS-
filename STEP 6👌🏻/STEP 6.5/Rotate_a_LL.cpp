//1.OPTIMAL SOLUTION - TC-O(2N) SC-O(1)

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==nullptr || head->next==nullptr) return head;
//         ListNode* front = head;
//         int cnt = 0;
//         while(front->next!=nullptr){
//             cnt++;
//             front = front->next;
//         }
//         cnt++;

//         int times = k%cnt;
//         int pos = cnt-times-1;
//         ListNode* prev = head;
//         while(pos && prev){
//             prev = prev->next;
//             pos--;
//         }

//         ListNode* curr = prev->next;
//         //link changing
//         front->next = head;
//         head = prev->next;
//         prev->next = nullptr;
//         return head;
//     }
// };