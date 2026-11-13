//SC-O((2E+V)+V(STACK SPACE)+V) TC-O(E+(V(FOR OUTER LOOP))+(V+2E)(TOTAL V 
//CALLS AND IN EACH WE VISIT ALL NEIGHBOURS WHICH ADDS TO ALL DEGREES 2E))
// class Solution {
//   public:
//     bool dfsalgo(vector<vector<int>>& adj,int node,int prevnode,vector<int>&vis)
//     {
//         vis[node] = 1;
//         for(auto it : adj[node])
//         {
//             if(vis[it]==0) {
//                 if(dfsalgo(adj,it,node,vis)==true){
//                     return true;
//                 }
//             }else if(prevnode!=it){
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//         int n = edges.size();
//         vector<vector<int>>adj(V);
//         vector<int>vis(V,0);
//         for(int i = 0 ; i < n ; i++)
//         {
//             int p1 = edges[i][0];
//             int p2 = edges[i][1];
//             adj[p1].push_back(p2);
//             adj[p2].push_back(p1);
//         }
//         int ans = false;
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(!vis[i])
//             {
//                 ans = dfsalgo(adj,i,-1,vis);
//                 if(ans==true) return true;
//             }
//         }
//         return false;
//     }
// };