// Average Case:
// TC = O(log N)
// SC = O(log N)
// Worst Case (Skewed BST):
// TC = O(N)
// SC = O(N)
// class Solution {
// public:
//     TreeNode* calcpls(TreeNode* root,int val)
//     {
//         if(!root) return nullptr;
//         if(root->val == val) return root;
//         TreeNode* ans = nullptr;
//         if(root->val>val) ans = calcpls(root->left,val);
//         else ans = calcpls(root->right,val);
//         return ans;
//     }
//     TreeNode* searchBST(TreeNode* root, int val) {
//         return calcpls(root,val);
//     }
// };