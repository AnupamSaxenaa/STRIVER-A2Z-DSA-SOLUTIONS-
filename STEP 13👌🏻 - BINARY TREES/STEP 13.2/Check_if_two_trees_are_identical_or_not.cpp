//TC-O(N) SC-O(N)
// class Solution {
// public:
//     bool calcpls(TreeNode* p, TreeNode* q)
//     {
//         // base cases
//         if (p == nullptr && q == nullptr) return true;
//         if (p == nullptr || q == nullptr) return false;
//         if (p->val != q->val) return false;
//         return calcpls(p->left, q->left) && calcpls(p->right, q->right);
//     }

//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         return calcpls(p, q);
//     }
// };