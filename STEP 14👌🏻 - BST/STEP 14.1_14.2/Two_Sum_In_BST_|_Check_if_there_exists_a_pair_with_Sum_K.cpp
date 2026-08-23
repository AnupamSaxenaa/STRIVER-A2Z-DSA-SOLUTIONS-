//1.BETTER SOLUTION - TC-O(NLOGN+N) SC-O(N)
// class Solution
// {
//     public:
//         bool bs(vector<int> &v, int l, int r, int k)
//         {
//             while (l <= r)
//             {
//                 int mid = (l + r) >> 1;
//                 if (v[mid] == k) return true;
//                 else if (v[mid] > k) r = mid - 1;
//                 else l = mid + 1;
//             }
//             return false;
//         }
//     bool findTarget(TreeNode *root, int k)
//     {
//         vector<int> v;
//         TreeNode *cur = root;
//         bool ans = false;
//         while (cur)
//         {
//             if (cur->left)
//             {
//                 TreeNode *temp = cur->left;
//                 while (temp->right && temp->right != cur)
//                     temp = temp->right;
//                 if (temp->right == nullptr)
//                 {
//                     temp->right = cur;
//                     cur = cur->left;
//                 }
//                 else
//                 {
//                     v.push_back(cur->val);
//                     temp->right = nullptr;
//                     cur = cur->right;
//                 }
//             }
//             else
//             {
//                 v.push_back(cur->val);
//                 cur = cur->right;
//             }
//         }
//         for (int i = 0; i < v.size(); i++)
//         {
//             int a = v[i];
//             int b = k - a;
//             if (bs(v, i + 1, v.size() - 1, b))
//                 return true;
//         }
//         return false;
//     }
// };

//OPTIMAL SOLUTION - TC-O(N) SC-O(2*H)
// class Solution
// {
//     public:
//         stack<TreeNode*> n, p;
//     void pushleft(TreeNode *root)
//     {
//         while (root)
//         {
//             n.push(root);
//             root = root->left;
//         }
//         return;
//     }
//     void pushright(TreeNode *root)
//     {
//         while (root)
//         {
//             p.push(root);
//             root = root->right;
//         }
//         return;
//     }
//     int next()
//     {
//         TreeNode *temp = n.top();
//         n.pop();
//         pushleft(temp->right);
//         return temp->val;
//     }
//     int prev()
//     {
//         TreeNode *temp = p.top();
//         p.pop();
//         pushright(temp->left);
//         return temp->val;
//     }
//     bool hasNext()
//     {
//         return !n.empty();
//     }
//     bool hasPrev()
//     {
//         return !p.empty();
//     }
//     bool findTarget(TreeNode *root, int k)
//     {
//         pushleft(root);
//         pushright(root);
//         int i = next();
//         int j = prev();
//         while (i < j)
//         {
//             if (i + j == k) return true;
//             else if (i + j > k) j = prev();
//             else i = next();
//         }
//         return false;
//     }
// };