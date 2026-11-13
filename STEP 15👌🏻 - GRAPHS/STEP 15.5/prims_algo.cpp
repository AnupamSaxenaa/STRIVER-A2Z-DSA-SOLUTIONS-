//TC-O(E+ELOGE+ELOGE) SC-O(2E+E+V+V-1)
// class Solution {
//   public:
//     int spanningTree(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<pair<int,int>>>adj(V);
//         for(auto it : edges){
//             int u = it[0];
//             int v = it[1];
//             int w = it[2];
//             adj[u].push_back({w,v});
//             adj[v].push_back({w,u});
//         }
//         int sum = 0;
//         priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>pq;
//         vector<int>vis(V,0);
//         vector<pair<int,int>>mstedges;
//         pq.push({0,0,-1});
//         while(!pq.empty())
//         {
//             auto [wt,node,father] = pq.top();
//             pq.pop();
//             if(vis[node]) continue;
//             vis[node] = 1;
//             if(father!=-1) {
//                 mstedges.push_back({father,node});
//                 sum+=wt;
//             }
//             for(auto [w,neighbour] : adj[node])
//             {
//                 pq.push({w,neighbour,node});
//             }
//         }
//         return sum;
//     }
// };