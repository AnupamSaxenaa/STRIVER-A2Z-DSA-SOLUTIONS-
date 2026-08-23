//1.BRUTE SOLUTION - APPROX TC-O(N^2) SC-O(N)
// class Solution
// {
//     private:
//         int maxi = 0;
//     public:
//         bool isValidBST(TreeNode *root)
//         {
//             TreeNode *t = root;
//             TreeNode *prev = nullptr;
//             bool valid = true;
//             while (t)
//             {
//                 if (t->left)
//                 {
//                     TreeNode *tt = t->left;
//                     while (tt->right && tt->right != t)
//                         tt = tt->right;
//                     if (tt->right == nullptr)
//                     {
//                         tt->right = t;
//                         t = t->left;
//                     }
//                     else
//                     {
//                         if (prev != nullptr && t->val <= prev->val)
//                         {
//                             valid = false;
//                         }
//                         prev = t;
//                         tt->right = nullptr;
//                         t = t->right;
//                     }
//                 }
//                 else
//                 {
//                     if (prev != nullptr && t->val <= prev->val)
//                     {
//                         valid = false;
//                     }
//                     prev = t;
//                     t = t->right;
//                 }
//             }
//             return valid;
//         }
//     void validate(TreeNode *root)
//     {
//         if (isValidBST(root))
//         {
//             int summation = 0;
//             TreeNode *cur = root;
//             while (cur)
//             {
//                 if (cur->left != nullptr)
//                 {
//                     TreeNode *t = cur->left;
//                     while (t->right && t->right != cur) t = t->right;
//                     if (t->right == nullptr)
//                     {
//                         t->right = cur;
//                         cur = cur->left;
//                     }
//                     else
//                     {
//                         t->right = nullptr;
//                         summation += cur->val;
//                         cur = cur->right;
//                     }
//                 }
//                 else
//                 {
//                     summation += cur->val;
//                     cur = cur->right;
//                 }
//             }
//             maxi = max(maxi, summation);
//         }
//         return;
//     }
//     void calcpls(TreeNode* root)
//     {
//         if(!root) return;
//         validate(root);
//         calcpls(root->left);
//         calcpls(root->right);
//         return;
//     }
//     int maxSumBST(TreeNode *root)
//     {
//         calcpls(root);
//         return maxi;
//     }
// };

//OPTIMAL SOLUTION - TC-O(N) SC-O(H)
// int maxival  = 0;
// class box{
//     public:
//     int maxi;
//     int mini;
//     int sum;
//     bool valid;
//     box(int mini,int maxi,int sum,bool valid)
//     {
//         this->maxi = maxi;
//         this->mini = mini;
//         this->sum = sum;
//         this->valid = valid;
//     }
// };
// class Solution {
// public:
//     box calcpls(TreeNode* root)
//     {
//         if(!root) return box(INT_MAX,INT_MIN,0,true);
//         auto left = calcpls(root->left);
//         auto right = calcpls(root->right);
//         if(left.valid && right.valid && left.maxi<root->val && root->val<right.mini)
//         {
//             int cursum = root->val+left.sum+right.sum;
//             maxival = max(maxival,cursum);
//             return box(min(left.mini,root->val),max(root->val,right.maxi),cursum,true);
//         }
//         return box(INT_MIN,INT_MAX,0,false);
//     }
//     int maxSumBST(TreeNode* root) {
//         maxival = 0;
//         calcpls(root);
//         return maxival;
//     }
// };