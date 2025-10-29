// STRONGLY SUGGEST YOU TO FOLLOW OPTIMAL SOLUTION 1 BUT ALSO HAVE A SIGHT OF OPTIMAL SOLUTION 2

//1.OPTIMAL SOLUTION 1- TC-O(2N) SC-O(1)

// class Solution {
// public:
//     int totalNodes(ListNode* head){
//         int cnt = 0;
//         ListNode* temp = head;
//         while(temp){
//             cnt++;
//             temp = temp->next;
//         }

//         return cnt;
//     }

//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head==nullptr || head->next==nullptr || k==1) return head;
//         int cnt = k-1;
//         int howManyTimes = totalNodes(head)/k;
//         ListNode* dummy = new ListNode(-1,head);
//         ListNode* prev = dummy;
//         ListNode* curr = dummy->next;


//         while(curr && curr->next){
//             ListNode* temp = curr->next->next;
//             curr->next->next = prev->next;
//             prev->next = curr->next;
//             curr->next = temp;
//             cnt--;
//             if(cnt <= 0){
//                 prev = curr;
//                 curr = prev->next;
//                 cnt = k-1;
//                 howManyTimes--;
//                 if(howManyTimes<=0) break;
//             }
//         }

//         return dummy->next;

//     }
// };

//2.OPTIMAL SOLUTION 2 - TC-O(2N) SC-O(1)

// class Solution {
// public:

//     ListNode* reverseMe(ListNode* head){
//         ListNode* temp = head;
//         ListNode* prevv = nullptr;
//         while(temp){
//             ListNode* front = temp->next;
//             temp->next = prevv;
//             prevv = temp;
//             temp = front;
//         }
//         return prevv;
//     }

//     ListNode* getMe(ListNode* head,int k){
//         ListNode* temp = head;
//         k--;
//         while(temp && k>0){
//             temp = temp->next;
//             k--;
//         }
//         return temp;
//     }   

//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head==nullptr || head->next==nullptr || k==1) return head;

//         ListNode* temp = head;
//         ListNode* prevNode = nullptr;

//         while(temp){
//             ListNode* kthNode = getMe(temp,k);
//             if(kthNode==nullptr){
//                 if(prevNode) prevNode->next = temp;
//                 break;
//             }
//             ListNode* nextNode = kthNode->next;
//             kthNode->next = nullptr;
//             reverseMe(temp);

//             if(temp==head){
//                 head = kthNode;
//             }else{
//                 prevNode->next = kthNode;
//             }

//             prevNode = temp;
//             temp = nextNode;
//         }

//         return head;
//     }
// };