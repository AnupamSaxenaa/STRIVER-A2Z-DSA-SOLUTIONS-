//1.ITERATIVE APPROACH (LEVEL ORDER OR BFS)

//RIGHT SIDE VIEW - TC-O(NLONG) SC-O(N). WC
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         if(root==nullptr) return {};
//         queue<pair<int,TreeNode*>>q; //depth ,node
//         map<int,int>m;//depth val
//         q.push({0,root});
//         while(!q.empty())
//         {
//             TreeNode* f = q.front().second;
//             int dep = q.front().first;
//             q.pop();
//             m[dep] = f->val;
//             if(f->left) q.push({dep+1,f->left});
//             if(f->right) q.push({dep+1,f->right});         
//         }   
//         vector<int>ans;
//         for(const auto &[dx,dy] : m)
//         ans.push_back(dy);
//         return ans;
//     }
// };

//LEFT SIDE VIEW - TC-O(NLONG) SC-O(N) AT WC
// vector<int> leftsideview(BinaryTreeNode<int>* root) {
//     if(root==nullptr) return {};
//     queue<pair<int,BinaryTreeNode<int>*>>q; //depth ,node
//     map<int,int>m;//depth data
//     q.push({0,root});
//     while(!q.empty())
//     {
//         BinaryTreeNode<int>* f = q.front().second;
//         int dep = q.front().first;
//         q.pop();
//         if(m.find(dep)==m.end()) m[dep] = f->data;
//         if(f->left) q.push({dep+1,f->left});
//         if(f->right) q.push({dep+1,f->right});
//     }   
//     vector<int>ans;
//     for(const auto &[dx,dy] : m)
//     ans.push_back(dy);
//     return ans;
// }

//2.RECURSIVE - 

//RIGHT SIDE VIEW - TC-O(N) SC-O(N) AT WC
// class Solution {
// public:
//     void calcpls(TreeNode* root,int depth,vector<int>& ans)
//     {
//         if(root==nullptr) return;
//         if(ans.size()==depth)
//                 ans.push_back(root->val);
//         calcpls(root->right,depth+1,ans);
//         calcpls(root->left,depth+1,ans);
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int>ans;
//         calcpls(root,0,ans);
//         return ans;
//     }
// };

//LEFT SIDE VIEW - TC-O(N) SC-O(N) AT WC
// class Solution {
// public:
//     void calcpls(TreeNode* root,int depth,vector<int>& ans)
//     {
//         if(root==nullptr) return;
//         if(ans.size()==depth)
//                 ans.push_back(root->val);
//         calcpls(root->left,depth+1,ans);
//         calcpls(root->right,depth+1,ans);
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int>ans;
//         calcpls(root,0,ans);
//         return ans;
//     }
// };