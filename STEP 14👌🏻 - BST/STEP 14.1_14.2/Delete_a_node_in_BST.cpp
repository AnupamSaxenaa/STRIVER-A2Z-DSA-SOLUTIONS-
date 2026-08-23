//1.RECURSION SOLUTION - WITH SPACE COMPLEXITY
//TC-O(N) SC-O(N) <---WC
//TC-O(LOGN) SC-O(LOGN) <---AC
// class Solution {
// public:
//     TreeNode* doit(TreeNode* root,int key)
//     {
//         //base
//         if(!root) return nullptr;
//         //work
//         if(root->val>key) root->left = doit(root->left,key);
//         else if(root->val<key) root->right = doit(root->right,key);
//         else{
//             if(root->left==nullptr){
//                 return root->right;
//             }else if(root->right==nullptr){
//                 return root->left;
//             }else{
//                 TreeNode* nleft = root->left;
//                 TreeNode* nright = root->right;
//                 while(nleft->right!=nullptr) nleft = nleft->right;
//                 nleft->right = nright;
//                 return root->left;
//             }
//         }
//         return root;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         return doit(root,key);
//     }
// };

//2.ITERATIVE SOLUTION - WITHOUT SPACE COMPLEXITY
// TC - O(N), SC - O(1)          <-- Worst Case
// TC - O(log N), SC - O(1)      <-- Average Case
// class Solution
// {
//     public:
//         TreeNode* helpme(TreeNode* root)
//         {
//             if(root->left==nullptr) return root->right;
//             if(root->right==nullptr) return root->left;
//             TreeNode* temp = root->left;
//             while(temp->right!=nullptr) temp = temp->right;
//             temp->right = root->right;
//             return root->left;
//         }
//         TreeNode* deleteNode(TreeNode *root, int key)
//         {
//             if (!root) return root;
//             if(root->val==key) return helpme(root);
//             TreeNode *t = root;
//             while (t)
//             {
//                 if (t->val > key)
//                 {
//                     if (t->left != nullptr && t->left->val == key)
//                     {
//                         t->left = helpme(t->left);
//                         break;
//                     }
//                     else t = t->left;
//                 }
//                 else
//                 {
//                     if (t->right != nullptr && t->right->val == key)
//                     {
//                         t->right = helpme(t->right);
//                         break;
//                     }
//                     else t = t->right;
//                 }
//             }
//             return root;
//         }
// };