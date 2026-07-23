//1.BETTER SOLUTION - TC-O(N^2) SC-O(N)
// class Solution {
// public:
//     int maxdepth(TreeNode* root)
//     {
//         if(root==nullptr) return 0;
//         int val = 1+max(maxdepth(root->left),maxdepth(root->right));
//         return val;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root==nullptr) return true;
//         int ld = maxdepth(root->left);
//         int rd = maxdepth(root->right);
//         if(abs(ld-rd)>1) return false;
//         if(isBalanced(root->left) && isBalanced(root->right)) return true;
//         return false;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(2N) SC-O(2N)
// class Solution {
// public:
//     int calcpls(unordered_map<TreeNode*,int>& mpp,TreeNode* temp)
//     {
//         if(temp==nullptr) return 0;
//         int val = 1+max(calcpls(mpp,temp->left),calcpls(mpp,temp->right));
//         mpp[temp] = val;
//         return val;
//     }
//     bool calcpls2(TreeNode* temp,unordered_map<TreeNode*,int>& mpp)
//     {
//         if(temp==nullptr) return true;
//         int lh = (temp->left) ? mpp[temp->left] : 0;
//         int rh = (temp->right) ? mpp[temp->right] : 0;
//         if(abs(lh-rh)>1) return false;
//         if(calcpls2(temp->left,mpp) && calcpls2(temp->right,mpp)) return true;
//         return false;
//     }
//     bool isBalanced(TreeNode* root) {
//         unordered_map<TreeNode*,int>mpp;
//         TreeNode* temp = root;
//         calcpls(mpp,temp);
//         temp = root;
//         return calcpls2(temp,mpp);
//     }
// };

//3.OPTIMAL SOLUTION 2 - TC-O(N) SC-O(N)
// class Solution {
// public:
//     int calcpls(TreeNode* root)
//     {
//         if(root==nullptr) return 0;
//         int lv = calcpls(root->left);
//         int rv = calcpls(root->right);
//         if(lv==-1 || rv==-1) return -1;
//         if(abs(lv-rv)>1) return -1;
//         return 1+max(lv,rv);
//     }
//     bool isBalanced(TreeNode* root) {
//         int val = calcpls(root);
//         return (val==-1) ? false : true;
//     }
// };