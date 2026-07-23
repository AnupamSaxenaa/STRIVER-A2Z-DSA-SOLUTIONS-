//TC-O(NLOGN) SC-O(N)
// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int,map<int,multiset<int>>>m;
//         //x y
//         queue<pair<TreeNode*,pair<int,int>>>q;
//         q.push({root,{0,0}});
//         while(!q.empty())
//         {
//             auto a = q.front();
//             q.pop();
//             int x = a.second.first , y = a.second.second;
//             m[x][y].insert(a.first->val);
//             if(a.first->left){
//                 q.push({a.first->left,{x-1,y+1}});
//             }
//             if(a.first->right){
//                 q.push({a.first->right,{x+1,y+1}});
//             }
//         }
//         vector<vector<int>>ans;
//         for(auto a : m){
//             vector<int>col;
//             for(auto b : a.second){
//                 col.insert(col.end(),b.second.begin(),b.second.end());
//             }
//             ans.push_back(col);
//         }
//         return ans;
//     }
// };