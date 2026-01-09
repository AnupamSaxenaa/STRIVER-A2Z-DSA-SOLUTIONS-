//1.BRUTE SOLUTION - TC-O((N1+N2)*MAPS TC) SC-O(N1 OR N2)

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* tempA = headA;
//         ListNode* tempB = headB;

//         unordered_map<ListNode* , int>v;
//         while(tempA){
//             v.insert({tempA,1});
//             tempA = tempA->next;
//         }

//         while(tempB){
//             if(v.find(tempB)!=v.end()){
//                 return tempB;
//             }
//             tempB = tempB->next;
//         }
//         return nullptr;
//     }
// };

//2.BETTER SOLUTION - TC-O(N1 + 2*N2)N1<N2 SC-O(1)

// class Solution
// {
//     public:
//         ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
//         {
//             ListNode *tempA = headA;
//             ListNode *tempB = headB;
//             int cntA = 0, cntB = 0;
//             while (tempA) //N1
//             {
//                 cntA++;
//                 tempA = tempA->next;
//             }
//             while (tempB) //N2
//             {
//                 cntB++;
//                 tempB = tempB->next;
//             }

//             int diff = abs(cntA - cntB);
//             tempA = headA;
//             tempB = headB;
//             if (cntA >= cntB) //N1+N2
//             {
//                 for (int i = 0; i < diff; i++)
//                 {
//                     tempA = tempA->next;
//                 }
//                 while (tempA && tempB)
//                 {
//                     if (tempA == tempB) return tempA;
//                     tempA = tempA->next;
//                     tempB = tempB->next;
//                 }
//             }
//             else if (cntB > cntA)
//             {
//                 for (int i = 0; i < diff; i++)
//                 {
//                     tempB = tempB->next;
//                 }
//                 while (tempA && tempB)
//                 {
//                     if (tempA == tempB) return tempA;
//                     tempA = tempA->next;
//                     tempB = tempB->next;
//                 }
//             }

//             return nullptr;
//         }
// };

//3.OPTIMAL SOLUTION - TC-O(N1+N2) SC-O(1)

// class Solution
// {
//     public:
//         ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
//         {
//             ListNode *tempa = headA;
//             ListNode *tempb = headB;
//             if(headA==nullptr || headB==nullptr) return nullptr;
//             while (tempa != tempb)
//             {
//                 tempa = tempa->next;
//                 tempb = tempb->next;
//                 if (tempa == tempb) return tempa;
//                 if (tempa == nullptr) tempa = headB;
//                 if (tempb == nullptr) tempb = headA;
//             }

//             return tempa;
//         }
// };