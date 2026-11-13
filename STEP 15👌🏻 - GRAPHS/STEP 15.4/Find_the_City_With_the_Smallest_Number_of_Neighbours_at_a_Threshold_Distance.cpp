//TC-O(N^3) SC-O(N^2)
// class Solution {
// public:
//     int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//         vector<vector<int>>adj(n,vector<int>(n,1e9));
//         for(auto it : edges){
//             int u = it[0];
//             int v = it[1];
//             int w = it[2];
//             adj[u][v] = w;
//             adj[v][u] = w;
//         }
//         for(int i = 0 ; i < n ; i++) adj[i][i] = 0;
//         for(int k = 0 ; k < n ;k++)
//         {
//             for(int i = 0 ; i < n ; i++)
//             {
//                 for(int j = 0 ; j < n ; j++)
//                 {
//                     if(adj[i][k]!=1e9 && adj[k][j]!=1e9)
//                     adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
//                 }
//             }
//         }
//         pair<int,int>p = {INT_MAX,INT_MAX};
//         for(int i = 0 ; i < n ; i++)
//         {
//             int cnt = 0;
//             for(int j = 0 ; j < n ; j++)
//             {
//                 if(adj[i][j]<=distanceThreshold) cnt++;
//             }
//             if(p.first>cnt || (p.first==cnt && p.second<i)) p = {cnt,i};
//         }
//         return p.second;
//     }
// };