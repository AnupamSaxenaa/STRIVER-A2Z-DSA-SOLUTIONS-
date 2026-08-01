//TC-O(2N) SC-O(N)
// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         if(root==nullptr) return {};
//         vector<vector<int>>ans;
//         queue<TreeNode*>temp;
//         temp.push(root);
//         int flag = 0;
//         while(!temp.empty())
//         {
//             vector<int>val;
//             int n = temp.size();
//             while(n)
//             {
//                 TreeNode* frontt = temp.front();
//                 temp.pop();
//                 val.push_back(frontt->val);
//                 if(frontt->left!=nullptr) temp.push(frontt->left);
//                 if(frontt->right!=nullptr) temp.push(frontt->right);
//                 n--;
//             }
//             if(!flag)
//                 ans.push_back(val);
//             else{
//                 reverse(val.begin(),val.end());
//                 ans.push_back(val);
//             }
//             flag = 1-flag;
//         }
//         return ans;
//     }
// };