//TC-O(2N) SC-O(3N)
// class Solution {
// public:
//     void calcpls(TreeNode* s,int steps , int &ans,unordered_map<TreeNode*, TreeNode*>& mpp,TreeNode* prev)
//     {
//         //base
//         if(s==nullptr){
//             steps--;
//             ans = max(ans,steps);
//             return;
//         }
//         //work
//         if(s->left!=prev) calcpls(s->left,steps+1,ans,mpp,s);
//         if(s->right!=prev) calcpls(s->right,steps+1,ans,mpp,s);
//         if(mpp.find(s)!=mpp.end() && mpp[s] != prev)
//     calcpls(mpp[s], steps+1, ans, mpp, s);
//         return;
//     }
//     int amountOfTime(TreeNode* root, int start) {
//         if (!root) return 0;
//             unordered_map<TreeNode*, TreeNode*> mpp;
//             queue<TreeNode*> q;
//             q.push(root);
//             TreeNode* startnode = nullptr;
//            	//building the child parent hash table
//             while (!q.empty())
//             {
//                 TreeNode *front = q.front();
//                 if(front->val==start) startnode = front;
//                 q.pop();
//                 if (front->left)
//                 {
//                     q.push(front->left);
//                     mpp[front->left] = front;
//                 }
//                 if (front->right)
//                 {
//                     q.push(front->right);
//                     mpp[front->right] = front;
//                 }
//             }
//             int ans = 0;
//             calcpls(startnode,0,ans,mpp,nullptr);
//             return ans;
//     }
// };