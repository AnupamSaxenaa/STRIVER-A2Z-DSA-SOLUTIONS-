//TC-O(2E+V+2E) SC-O((V+2E)(SPACE FOR ADJACENCY LIST)+3V(SPACE FOR VIS,LOW,RT)+V(FOR BRIDGES MATRIX)+V(STACK SPACE))
// class Solution
// {
//     public:
//     int timer = 0;
//         void bfs(int node,int pnode,vector<vector<int>>&adj,vector<int>&low,vector<int>&rt,vector<vector<int>>&bridges,vector<int>&vis)
//         {
//             vis[node] = 1;
//             low[node] = rt[node] = timer;
//             timer++;
//             for(auto it : adj[node]){
//                 if(it==pnode) continue;
//                 if(vis[it]==0){
//                     bfs(it,node,adj,low,rt,bridges,vis);
//                     low[node] = min(low[node],low[it]);
//                     if(low[it]>rt[node]){
//                         bridges.push_back({it,node});
//                     }
//                 }else{ 
//                     low[node] = min(low[node],low[it]);
//                 }
//             }
//         }
//         vector<vector < int>> criticalConnections(int n, vector<vector < int>> &connections)
//         {
//             vector<vector < int>> adj(n);
//             vector<int> low(n,0);
//             vector<int> rt(n,0);
//             vector<vector<int>>bridges;
//             vector<int>vis(n,0);
//             for (int i = 0; i < connections.size(); i++)
//             {
//                 int u = connections[i][0];
//                 int v = connections[i][1];
//                 adj[u].push_back(v);
//                 adj[v].push_back(u);
//             }
//             bfs(0,-1,adj,low,rt,bridges,vis);
//             return bridges;
//         }
// };