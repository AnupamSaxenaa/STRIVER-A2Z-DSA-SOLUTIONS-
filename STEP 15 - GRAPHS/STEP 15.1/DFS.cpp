//TC-O(2E+N) IN CASE OF UNDIRECTED GRAPH SC-O(3N)
// class Solution {
//   public:
//     void calcpls(vector<vector<int>>& adj,vector<int>&vis,int snode,vector<int>&ans)
//     {
//         //base
//         if(vis[snode]) return;
//         //work
//         ans.push_back(snode);
//         vis[snode] = 1;
//         for(auto it : adj[snode])
//             calcpls(adj,vis,it,ans);
//         return;
//     }
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         int n = adj.size();
//         vector<int>vis(n,0),ans;
//         calcpls(adj,vis,0,ans);
//         return ans;
//     }
// };