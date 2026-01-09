//1.BRUTE SOLUTION - TC-O(2*N*(TC OF MAP USED)) SC-O(N)

// int lengthOfLoop(Node *head) {
//     int cnt = 1;
//     int total = 0;
//     unordered_map<Node*, int> mpp;
//     Node* temp = head;

//     while (temp) {
//         if (mpp.find(temp) == mpp.end()) {
//             mpp.insert({temp, cnt});
//             cnt++;
//         } else {
//             total = cnt;
//             cnt = mpp[temp];
//             break;
//         }

//         temp = temp->next;
//     }
//     if(temp==nullptr) return 0;
//     return ((total-1) - (cnt-1));
// }


//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// int lengthOfLoop(Node *head) {
//     int len = 1;
//     Node* fast = head;
//     Node* slow = head;
//          while(fast!=nullptr && fast->next!=nullptr)
//          {
//              slow = slow->next;
//              fast = fast->next->next;
//              if(slow==fast) break;
//          }

//     if(fast==nullptr||fast->next==nullptr) return 0;

//     fast = fast->next;
//     while(fast!=slow)
//     {
//         len++;
//         fast = fast->next;
//     }
//     return len;
// }