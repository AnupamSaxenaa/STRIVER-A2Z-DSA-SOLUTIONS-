//TC-O(N) SC-O(N)
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         TreeNode *t = root;
//         vector<int>v;
//         while (t)
//         {
//             if (t->left)
//             {
//                 TreeNode *tt = t->left;
//                 while (tt->right && tt->right != t)
//                     tt = tt->right;
//                 if (tt->right == nullptr)
//                 {
//                     tt->right = t;
//                     t = t->left;
//                 }
//                 else
//                 {
//                     v.push_back(t->val);
//                     tt->right = nullptr;  
//                     t = t->right;
//                 }
//             }
//             else
//             {
//                 v.push_back(t->val);
//                 t = t->right;
//             }
//         }
//         for(int i = 0 ; i < v.size()-1 ; i++)
//             if(v[i]==v[i+1] || v[i]>v[i+1]) return false;
//         return true;
//     }
// };

//TC-O(N) SC-O(1)
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         TreeNode* t = root;
//         TreeNode* prev = nullptr;
//         bool valid = true;
//         while (t)
//         {
//             if (t->left)
//             {
//                 TreeNode *tt = t->left;
//                 while (tt->right && tt->right != t)
//                     tt = tt->right;
//                 if (tt->right == nullptr)
//                 {
//                     tt->right = t;
//                     t = t->left;
//                 }
//                 else
//                 {
//                     if(prev!=nullptr && t->val<=prev->val){
//                         valid = false;
//                     }
//                     prev = t;
//                     tt->right = nullptr;  
//                     t = t->right;
//                 }
//             }
//             else
//             {
//                 if(prev!=nullptr && t->val<=prev->val){
//                     valid = false;
//                 }
//                 prev = t;
//                 t = t->right;
//             }
//         }
//         return valid;
//     }
// };