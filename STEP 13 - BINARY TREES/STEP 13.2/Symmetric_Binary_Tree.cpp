//TC-O(N) SC-O(N)
// class Solution {
// public:
//     int calcpls(TreeNode* left,TreeNode* right)
//     {
//         if(left==nullptr && right!=nullptr) return 0;
//         else if(left!=nullptr && right==nullptr) return 0;
//         else if(left==nullptr && right==nullptr) return 1;
//         if(left->val!=right->val) return 0;
//         return calcpls(left->left,right->right) && calcpls(left->right,right->left);
//    }
//     bool isSymmetric(TreeNode* root) {
//         if(root==nullptr) return true;
//         return calcpls(root->left,root->right);
//     }
// };