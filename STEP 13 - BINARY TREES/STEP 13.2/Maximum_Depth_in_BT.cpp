//1.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     int calcpls(TreeNode* temp){
//         if(temp==nullptr) return 0;
//         int val = 1+max(calcpls(temp->left),calcpls(temp->right));
//         return val;
//     }
//     int maxDepth(TreeNode* root) {
//         TreeNode* temp = root;
//         return calcpls(temp);
//     }
// };