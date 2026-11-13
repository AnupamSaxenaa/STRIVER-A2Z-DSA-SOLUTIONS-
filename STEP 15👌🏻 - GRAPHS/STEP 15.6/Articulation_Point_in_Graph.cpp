//TC AND SC SAME AS BRIDGES IN GRAPH , WATCHING VIDEO IS RECOMMENDED FOR UNDERSTANDING THE CONCEPT//
// class Solution {
//   private:
//   int timer = 1;
//   void bfs(int node,int pnode,vector<int>&vis,vector<int>&tin,vector<int>&low,vector<int>&mark,vector<vector<int>>&adj){
//       vis[node] = 1;
//       low[node] = tin[node] = timer;
//       timer++;
//       int child = 0;
//       for(auto it : adj[node]){
//           if(it==pnode) continue;
//           if(!vis[it]){
//               bfs(it,node,vis,tin,low,mark,adj);
//               low[node] = min(low[node],low[it]);
//               if(low[it]>=tin[node] && pnode!=-1) mark[node] = 1;
//               child++;
//           }else{
//               low[node] = min(low[node],tin[it]);
//           }
//       }
//       if(child>1 && pnode==-1) mark[node] = 1;
//   }    
//   public:
//     vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>>adj(V);
//         for(int i = 0 ; i < edges.size() ; i++)
//         {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         vector<int>vis(V,0);
//         vector<int>tin(V,0);
//         vector<int>low(V,0);
//         vector<int>mark(V,0);
//         vector<int>ans;
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(!vis[i]) bfs(i,-1,vis,tin,low,mark,adj);
//         }
//         for(int i = 0 ; i < V ;i++)
//             if(mark[i]==1) ans.push_back(i);
//         if(ans.size()==0) return {-1};
//         return ans;
//     }
// };