//TC-O(LOGN)^2 SC-O(LOGN)
// class Solution {
// public:
//     int lh(TreeNode* root)
//     {
//         //base
//         if(!root) return 0;
//         //work
//         return 1 + lh(root->left);
//     }
//     int rh(TreeNode* root)
//     {
//         //base
//         if(!root) return 0;
//         //work
//         return 1 + rh(root->right);X
//     }
//     int calcpls(TreeNode* root)
//     {
//         //base//
//         if(!root) return 0;
//         //work//
//         int lhh = lh(root->left);
//         int rhh = rh(root->right);
//         if(lhh!=rhh) return 1 + calcpls(root->left) + calcpls(root->right);
//         return (1<<(lhh+1))-1;
//     }
//     int countNodes(TreeNode* root) {
//         if(!root) return 0;
//         return calcpls(root);
//     }
// };