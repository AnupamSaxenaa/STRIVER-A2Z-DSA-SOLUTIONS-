// 1.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         if(!root) return 0;
//         queue<pair<TreeNode*,unsigned long long>>q;
//         q.push({root,0});
//         int ans = 0;
//         while(!q.empty())
//         {
//             int n = q.size();
//             int minidx = q.front().second;
//             int f,l;
//             for(int i = 0 ; i < n ; i++)
//             {
//                 int reidx = q.front().second-minidx;
//                 if(i==0) f = reidx;
//                 if(i==n-1) l = reidx;
//                 TreeNode* temp = q.front().first;
//                 q.pop();
//                 if(temp->left) q.push({temp->left,(long long)2*reidx+1});
//                 if(temp->right) q.push({temp->right,(long long)2*reidx+2});
//             }
//             ans = max(ans,l-f+1);
//         }
//         return ans;
//     }
// };

