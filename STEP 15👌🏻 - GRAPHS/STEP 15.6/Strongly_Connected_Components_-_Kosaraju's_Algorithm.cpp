//TC-O(E+V+E+V+E+V+E) SC-O(V+E+V+V+E+V+V(STACK SPACE))
// class Solution {
//   public:
//     void dfs(vector<vector<int>>& adj, stack<int>& s, vector<int>& vis, int node) {
//         vis[node] = 1;
//         for (auto it : adj[node]) {
//             if (!vis[it]) {
//                 dfs(adj, s, vis, it);
//             }
//         }
//         s.push(node);
//         return;
//     }
//     void dfs2(vector<vector<int>>& adj, vector<int>& vis, int node) {
//         vis[node] = 1;
//         for (auto it : adj[node]) {
//             if (!vis[it]) {
//                 dfs2(adj, vis, it);  
//             }
//         }
//         return;
//     }
//     int countSCC(int V, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(V);
//         for (auto it : edges) {
//             int u = it[0];
//             int v = it[1];
//             adj[u].push_back(v);
//         }
//         stack<int> s;
//         vector<int> vis(V, 0);
//         for (int i = 0; i < V; i++) {
//             if (!vis[i]) {
//                 dfs(adj, s, vis, i);
//             }
//         }
//         vector<vector<int>> adj2(V);
//         for (int i = 0; i < V; i++) {
//             vis[i] = 0;
//             for (auto it : adj[i]) {
//                 adj2[it].push_back(i);
//             }
//         }
//         int scc = 0;
//         while (!s.empty()) {
//             int node = s.top();
//             s.pop();
//             if (!vis[node]) {
//                 scc++;
//                 dfs2(adj2, vis, node);
//             }
//         }
//         return scc;
//     }
// };