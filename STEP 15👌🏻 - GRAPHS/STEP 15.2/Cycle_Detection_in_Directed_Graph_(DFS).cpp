//TC-O(V+2E) SC-O(4V+E)
// class Solution {
//   public:
//     bool calcpls(vector<vector<int>> &adj,vector<int>&vis,vector<int>&pathvis,int node)
//     {
//         vis[node] = 1;
//         pathvis[node] = 1;
//         for(auto it : adj[node])
//         {
//             if(vis[it]){
//                 if(pathvis[it]) return true;
//                 continue;
//             }
//             if(calcpls(adj,vis,pathvis,it)) return true;
//         }
//         pathvis[node] = 0;
//         return false;
//     }
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         // code here
//         int n = edges.size();
//         vector<vector<int>>adj(V);
//         for(int i = 0 ; i < n ; i++)
//         {
//             int p1 = edges[i][0];
//             int p2 = edges[i][1];
//             adj[p1].push_back(p2);
//         }    
//         vector<int>vis(V,0);
//         vector<int>pathvis(V,0);
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(!vis[i]){
//                 if(calcpls(adj,vis,pathvis,i)==true) return true;
//             }
//         }
//         return false;
//     }
// };