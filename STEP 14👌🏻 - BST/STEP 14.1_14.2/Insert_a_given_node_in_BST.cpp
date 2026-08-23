//TC-O(LOGN) SC-O(LOGN) <----AVERAGE 
//TC-O(N) SC-O(N) <----WORST
// class Solution {
// public:
//     TreeNode* doit(TreeNode* root,int val)
//     {
//         if(root==nullptr)
//             return new TreeNode(val);
//         if(root->val > val) root->left = doit(root->left,val);
//         else root->right = doit(root->right,val);
//         return root;
//     }
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         return doit(root,val);
//     }
// };