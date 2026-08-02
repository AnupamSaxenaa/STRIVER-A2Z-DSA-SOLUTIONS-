//1.RECURSIVE SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     TreeNode* prev = nullptr;
//     void calcpls(TreeNode* root)
//     {
//         if(!root) return;
//         calcpls(root->right);
//         calcpls(root->left);
//         root->right = prev;
//         root->left = nullptr;
//         prev = root;
//         return;
//     }
//     void flatten(TreeNode* root) {
//         calcpls(root);
//         return;
//     }
// };

//2.ITERATIVE SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     void flatten(TreeNode* root) {
//         if(!root) return;
//         stack<TreeNode*>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             TreeNode* cur = q.top();
//             q.pop();
//             if(cur->right) q.push(cur->right);
//             if(cur->left) q.push(cur->left);
//             if(!q.empty()) cur->right = q.top();
//             cur->left = nullptr;
//         }
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(1)
// class Solution {
// public:
//     void flatten(TreeNode* root) {
//         TreeNode* cur = root;
//         while(cur!=nullptr)
//         {
//             if(cur->left!=nullptr)
//             {
//                 TreeNode* prev = cur->left;
//                 while(prev->right) prev = prev->right;
//                 prev->right = cur->right;
//                 cur->right = cur->left;
//                 cur->left = nullptr;
//             }
//             cur = cur->right;
//         }
//         return;
//     }
// };