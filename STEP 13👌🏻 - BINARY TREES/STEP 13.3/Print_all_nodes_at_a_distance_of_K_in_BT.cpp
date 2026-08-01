//TC-O(2N) SC-O(4N)
// void targetedTraversalDown(TreeNode *root, int k, int steps, vector<int> &ans,unordered_map<TreeNode*, TreeNode*> &mpp,TreeNode* prev)
// {   
//     if (steps > k || root == nullptr)
//     {
//         steps--;
//         return;
//     }
//     if (steps == k)
//     {
//         ans.push_back(root->val);
//     }
//     if(root->left!=prev) targetedTraversalDown(root->left, k, steps + 1, ans,mpp,root);
//     if(root->right!=prev) targetedTraversalDown(root->right, k, steps + 1, ans,mpp,root);
//     if(mpp.find(root)!=mpp.end() && mpp[root]!=prev) targetedTraversalDown(mpp[root],k,steps+1,ans,mpp,root);
//     return;
// }
// class Solution
// {
//     public:
//         vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
//         {
//             if (!root) return {};
//             unordered_map<TreeNode*, TreeNode*> mpp;
//             queue<TreeNode*> q;
//             q.push(root);
//            	//building the child parent hash table
//             while (!q.empty())
//             {
//                 TreeNode *front = q.front();
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
//            	//real logic
//             vector<int>ans;
//             targetedTraversalDown(target,k,0,ans,mpp,nullptr);
//             return ans;
//         };
// };