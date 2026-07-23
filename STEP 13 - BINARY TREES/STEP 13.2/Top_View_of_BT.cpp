//TC-O(NLOGN) SC-O(N)
// #include<bits/stdc++.h>
// vector<int> getTopView(TreeNode<int> *root)
// {
//     // Write your code here.
//     if(root==nullptr) return {};
//     queue<pair<int,TreeNode<int>*>>q;
//     map<int,int>m;
//     q.push({0,root});
//     while(!q.empty())
//     {
//         auto a = q.front();
//         q.pop();
//         if(m.find(a.first)==m.end())
//             m[a.first] = a.second->data;
//         if(a.second->left) q.push({a.first-1,a.second->left});
//         if(a.second->right) q.push({a.first+1,a.second->right});
//     }
//     vector<int>ans;
//     for(const auto& [dx,dy] : m)
//         ans.push_back(dy);
//     return ans;
// }