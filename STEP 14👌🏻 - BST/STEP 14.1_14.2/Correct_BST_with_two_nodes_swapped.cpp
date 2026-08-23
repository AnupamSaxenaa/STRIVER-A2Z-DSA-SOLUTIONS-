//1.BETTER SOLUTION - TC-O(NLOGN +2N) SC-O(N)
// class Solution
// {
//     private:
//     TreeNode *first = nullptr;
//     TreeNode *second = nullptr;
//     public:
//         void calcpls(vector<int> &v, TreeNode *root)
//         {
//             int i = 0;
//             TreeNode *cur = root;
//             while (cur && i<v.size())
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
//                         if (v[i++] != cur->val)
//                         {
//                             if (!first) first = cur;
//                             else second = cur;
//                         }
//                         cur = cur->right;
//                     }
//                 }
//                 else
//                 {
//                     if (v[i++] != cur->val)
//                     {
//                         if (!first) first = cur;
//                         else second = cur;
//                     }
//                     cur = cur->right;
//                 }
//             }
//         }
//     void recoverTree(TreeNode *root)
//     {
//         vector<int> v;
//         TreeNode *cur = root;
//         while (cur)
//         {
//             if (cur->left != nullptr)
//             {
//                 TreeNode *t = cur->left;
//                 while (t->right && t->right != cur) t = t->right;
//                 if (t->right == nullptr)
//                 {
//                     t->right = cur;
//                     cur = cur->left;
//                 }
//                 else
//                 {
//                     t->right = nullptr;
//                     v.push_back(cur->val);
//                     cur = cur->right;
//                 }
//             }
//             else
//             {
//                 v.push_back(cur->val);
//                 cur = cur->right;
//             }
//         }
//         sort(v.begin(), v.end());
//         calcpls(v, root);
//         int temp = first->val;
//         first->val = second->val;
//         second->val = temp;
//         return;
//     }
// };


//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)
// class Solution
// {
//     private:
//         TreeNode *prev = nullptr;
//     TreeNode *cur = nullptr;
//     TreeNode *next = nullptr;
//     TreeNode *middle = nullptr;
//     TreeNode *back = nullptr;
//     public:
//         void recoverTree(TreeNode *root)
//         {
//             cur = root;
//             prev = new TreeNode(INT_MIN);
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
//                         if (prev != nullptr && prev->val > cur->val)
//                         {
//                             if (back == nullptr && middle == nullptr)
//                             {
//                                 middle = cur;
//                                 back = prev;
//                             }
//                             else if (next == nullptr) next = cur;
//                         }
//                         prev = cur;
//                         cur = cur->right;
//                     }
//                 }
//                 else
//                 {
//                     if (prev != nullptr && prev->val > cur->val)
//                     {
//                         if (back == nullptr && middle == nullptr)
//                         {
//                             middle = cur;
//                             back = prev;
//                         }
//                         else if (next == nullptr) next = cur;
//                     }
//                     prev = cur;
//                     cur = cur->right;
//                 }
//             }
//             if (next && back) {
//                 swap(next->val,back->val);
//             }
//             else if (back && middle) {
//                 swap(back->val,middle->val);
//             }
//             return;
//         }
// };


