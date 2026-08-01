//1.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution
// {
//     public:
//         long long maxi = INT_MIN;
//     long long calcpls(TreeNode *root)
//     {
//         if (root == nullptr)
//             return 0;
//         long long lv = max(0LL, calcpls(root->left));
//         long long rv = max(0LL, calcpls(root->right));
//         maxi = max(maxi, lv + rv + root->val);
//         return root->val + max(lv, rv);
//     }
//     int maxPathSum(TreeNode *root)
//     {
//         long long catchh = calcpls(root);
//         return max(maxi, catchh);
//     }
// };