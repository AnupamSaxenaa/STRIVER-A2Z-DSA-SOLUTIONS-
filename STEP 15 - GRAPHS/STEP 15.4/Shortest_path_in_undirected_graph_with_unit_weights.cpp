//TC-O(M+N) SC-O(M+N)
// class Solution {
//   public:
//     vector<int> shortestPath(vector<vector<int>>& edges, int N,int M){
//         vector<vector<int>>adj(N);
//         vector<int>dist(N,INT_MAX);
//         dist[0] = 0;
//         for(int i = 0 ; i < M; i++)
//         {
//             int x = edges[i][0];
//             int y = edges[i][1];
//             adj[x].push_back(y);
//             adj[y].push_back(x);
//         }
//         queue<int>q;
//         q.push(0);
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             if(dist[node]==INT_MAX){
//                 continue;
//             }
//             for(auto itt : adj[node])
//             {
//                 if(dist[itt]>dist[node]+1){
//                     dist[itt] = dist[node] + 1;
//                     q.push(itt);
//                 }
//             }
//         }
//         for(int i = 0 ; i < N ;i ++)
//         {
//             if(dist[i]==INT_MAX) dist[i] = -1;
//         }
//         return dist;
//     }
// };