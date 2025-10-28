//1.BRUTE SOLUTION - 
// Time Complexity: Average: O(n) Worst: O(n²)
// Space Complexity: O(n + p) → effectively O(n)

// vector<pair<int, int>> findPairs(Node* head, int k)
// {
//     // Write your code here.
//     vector<pair<int,int>> ans;
//     Node* temp = head;
//     unordered_map<int,int>mpp;

//     while(temp){
//         mpp.insert({temp->data,1});
//         temp = temp->next;
//     }

//     temp = head;
//     while(temp){
//         mpp.erase(temp->data);
//         int diff = k - temp->data;
//         if(diff>0) {
//             if(mpp.find(diff)!=mpp.end()){
//                 pair<int,int>tempp = {temp->data,diff};
//                 mpp.erase(diff);
//                 ans.push_back(tempp);
//             }
//         }

//         temp = temp->next;
//     }

//     return ans;
// }

//2.BETTER SOLUTION  - TC-O(N^2) SC-O(1) O(N)AUXILIARY SPACE

// vector<pair<int, int>> findPairs(Node* head, int k)
// {
//     // Write your code here.
//     Node* prevv = head;
//     vector<pair<int,int>>ans;

//     while(prevv){
//         int diff = k-prevv->data;
//         Node* nextt = prevv->next;
//         while(nextt){
//             if(nextt->data == diff){
//                 pair<int,int>p = {prevv->data , diff};
//                 ans.push_back(p);
//                 break;
//             }

//             nextt = nextt->next;
//         }
//         prevv = prevv->next;
//     }

//     return ans;
// }

//3.OPTIMAL SOLUTION - TC-O(2N) SC-O(1) O(N) AUXILIARY SPACE

// vector<pair<int, int>> findPairs(Node* head, int k)
// {
//     vector<pair<int,int>>ans;
//     // Write your code here.
//     //FINDING THE TAIL
//     Node* tail = head;
//     Node* headd= head;
//     while(tail->next!=nullptr) tail = tail->next;
//     while(headd && tail && headd->data<tail->data){
//         int sum = headd->data + tail->data;
//         if(sum==k){
//             ans.emplace_back(headd->data,tail->data);
//             headd = headd->next;
//             tail = tail->prev;
//         }
//         else if(sum>k) tail = tail->prev;
//         else headd = headd->next;
//     }
//     return ans;
// }

