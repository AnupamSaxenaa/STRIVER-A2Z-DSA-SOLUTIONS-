//TC-O(2V+3*E) SC-O(3V+2E)
// class Solution {
//   public:
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // adjacency list creation
//         vector<vector<int>> adj(V);
//         for (int i = 0; i < edges.size(); i++)
//         {
//             int f = edges[i][0];
//             int l = edges[i][1];
//             adj[f].push_back(l);
//             adj[l].push_back(f);
//         }
//         vector<int> vis(V, 0);
//         for (int i = 0; i < V; i++)
//         {
//             if (vis[i] == 1)
//                 continue;
//             queue<pair<int, int>> q;
//             q.push({i, -1});
//             vis[i] = 1;
//             while (!q.empty())
//             {
//                 int dx = q.front().first;
//                 int dy = q.front().second;
//                 q.pop();
//                 for (auto x : adj[dx])
//                 {
//                     if (x == dy)
//                         continue;
//                     else if (vis[x] == 1)
//                         return true;
//                     vis[x] = 1;
//                     q.push({x, dx});
//                 }
//             }
//         }
//         return false;
//     }
// };