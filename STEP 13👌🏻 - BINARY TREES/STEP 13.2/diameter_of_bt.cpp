//1.BRUTE FORCE - TC-O(N^2) SC-O(N)
// class Solution {
// public:
//     int md(TreeNode* root)
//     {
//         if(root==nullptr) return 0;
//         int val = 1+max(md(root->left),md(root->right));
//         return val;
//     }
//     int calcpls(TreeNode* root)
//     {
//         if(root==nullptr) return 0;
//         int curr = md(root->left) + md(root->right);
//         return max({curr,calcpls(root->left),calcpls(root->right)});
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==nullptr) return 0;
//         return calcpls(root);
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     int maxi = 0;
//     int calcpls(TreeNode* root)
//     {
//         if(root==nullptr) return 0;
//         int lv = calcpls(root->left);
//         int rv = calcpls(root->right);
//         maxi = max(maxi,lv+rv);
//         return 1+max(lv,rv);
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==nullptr) return 0;
//         calcpls(root);
//         return maxi;
//     }
// };