//TC-O(N) SC-O(N)

//1.INORDER TRAVERSAL - 
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>v;
//         TreeNode* cur = root;
//         while(cur)
//         {
//             if(cur->left!=nullptr)
//             {
//                 TreeNode* t = cur->left;
//                 while(t->right && t->right!=cur) t = t->right;
//                 if(t->right==nullptr) {
//                     t->right = cur;
//                     cur = cur->left;
//                 }else{
//                     t->right = nullptr;
//                     v.push_back(cur->val);
//                     cur = cur->right;
//                 }
//             }else{
//                 v.push_back(cur->val);
//                 cur = cur->right;
//             }
//         }
//         return v;
//     }
// };

//2.PREORDER TRAVERSAL - 
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>v;
//         TreeNode* cur = root;
//         while(cur)
//         {
//             if(cur->left!=nullptr)
//             {
//                 TreeNode* t = cur->left;
//                 while(t->right && t->right!=cur) t = t->right;
//                 if(t->right==nullptr) {
//                     t->right = cur;
//                     v.push_back(cur->val);
//                     cur = cur->left;
//                 }else{
//                     t->right = nullptr;
//                     cur = cur->right;
//                 }
//             }else{
//                 v.push_back(cur->val);
//                 cur = cur->right;
//             }
//         }
//         return v;
//     }
// };