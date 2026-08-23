//1.BRUTE SOLUTION - 
// TC-O(NLOGN) SC-O(N) <---- WC
// class Solution {
// public:
//     void calcpls(TreeNode* root,set<int>& s)
//     {
//         if(!root) return;
//         s.insert(root->val);
//         calcpls(root->left,s);
//         calcpls(root->right,s);
//         return;
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         set<int>s;
//         calcpls(root,s);
//         int i = 1;
//         for(auto it : s)
//         {
//             if(i==k) {return it;}
//             i++;
//         }
//         return 0;
//     }
// };

//2.BETTER SOLUTION - 
// TC-O(N) SC-O(N)
// class Solution {
// public:
//     void calcpls(TreeNode* root,int k,int &ans,int &cnt,bool &found)
//     {
//         if(!root) return;
//         calcpls(root->left,k,ans,cnt,found);
//         cnt++;
//         if(cnt==k){
//             ans = root->val;
//             found = true;
//             return;
//         }
//         if(!found) calcpls(root->right,k,ans,cnt,found);
//         return;
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         int ans = -1,cnt = 0;
//         bool found = false;
//         calcpls(root,k,ans,cnt,found);
//         return ans;
//     }
// };

//3.OPTIMAL SOLUTION - 
//TC-O(N) SC-O(1)
//  class Solution
// {
// public:
//     int kthSmallest(TreeNode *root, int k)
//     {
//         TreeNode *t = root;
//         int ans = 0, cnt = 0;
//         while (t)
//         {
//             if (t->left)
//             {
//                 TreeNode *tt = t->left;
//                 while (tt->right && tt->right != t)
//                     tt = tt->right;
//                 if (tt->right == nullptr)
//                 {
//                     tt->right = t;
//                     t = t->left;
//                 }
//                 else
//                 {
//                     tt->right = nullptr;  
//                     cnt++;
//                     if (cnt == k)
//                         ans = t->val;    
//                     t = t->right;
//                 }
//             }
//             else
//             {
//                 cnt++;
//                 if (cnt == k)
//                     ans = t->val;     
//                 t = t->right;
//             }
//         }
//         return ans;
//     }
// };
