//TC-O(2V+2E) SC-O(5V+E)
// class Solution {
//   public: 
//     void calcpls(vector<vector<int>>& adj,vector<int>& vis,stack<int>&s,int node)
//     {
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(vis[it]) continue;
//             calcpls(adj,vis,s,it);
//         }
//         s.push(node);
//         return;
//     }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>>adj(V);
//         for(int i = 0 ; i < edges.size() ; i++)
//         {
//             int x = edges[i][0];
//             int y = edges[i][1];
//             adj[x].push_back(y);
//         }
//         vector<int>vis(V,0);
//         stack<int>s;
//         vector<int>v;
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(!vis[i]) calcpls(adj,vis,s,i);
//         }
//         for(int i = 0 ; i < V ; i++)
//         {
//             v.push_back(s.top());
//             s.pop();
//         }
//         return v;
//     }
// };