//TC-O(ELOGV) SC-O((V+2E FOR ADJ LIST) + V + V + E FOR PQ MAX ENTRY) = SC-O(V+E)
// class Solution {
// public:
//     int MOD = 1e9 + 7;
//     int countPaths(int n, vector<vector<int>>& roads) {
//         vector<vector<pair<int,int>>> adj(n);
//         for(int i = 0; i < roads.size(); i++) {
//             int u = roads[i][0];
//             int v = roads[i][1];
//             int w = roads[i][2];
//             adj[u].push_back({w, v});
//             adj[v].push_back({w, u});
//         }
//         priority_queue<
//             pair<long long,int>,
//             vector<pair<long long,int>>,
//             greater<pair<long long,int>>
//         > pq;
//         vector<long long> dist(n, LLONG_MAX);
//         vector<int> ways(n, 0);
//         dist[0] = 0;
//         ways[0] = 1;
//         pq.push({0, 0});
//         while(!pq.empty()) {
//             auto [dst, node] = pq.top();
//             pq.pop();
//             if(dst > dist[node]) continue;
//             for(auto it : adj[node]) {
//                 int w = it.first;
//                 int node2 = it.second;
//                 if(dst + w < dist[node2]) {
//                     dist[node2] = dst + w;
//                     ways[node2] = ways[node];
//                     pq.push({dist[node2], node2});
//                 }
//                 else if(dst + w == dist[node2]) {
//                     ways[node2] =
//                         (ways[node2] + ways[node]) % MOD;
//                 }
//             }
//         }
//         return ways[n-1];
//     }
// };