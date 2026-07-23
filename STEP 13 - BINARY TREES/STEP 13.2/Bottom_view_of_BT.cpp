//TC-O(NLOGN) SC-O(N)
// #include<bits/stdc++.h>
// vector<int> bottomView(TreeNode<int> * root){
//     // Write your code here.
//     queue<pair<TreeNode<int>*,int>>q;
//     map<int,int>m;
//     q.push({root,0});
//     while(!q.empty())
//     {
//         TreeNode<int>* f = q.front().first;
//         int vl = q.front().second;
//         q.pop();
//         m[vl] = f->data;
//         if(f->left) q.push({f->left,vl-1});
//         if(f->right) q.push({f->right,vl+1});
//     }
//     vector<int>ans;
//     for(const auto &[dx,dy] : m){
//         ans.push_back(dy);
//     }
//     return ans;
// }