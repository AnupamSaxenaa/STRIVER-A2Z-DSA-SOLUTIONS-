//TC-O(2V+E) SC-O(5V)
// class Solution
// {
//     public:
//         bool calcpls(vector<vector < int>> &graph, vector< int > &vis, vector< int > &pvis, vector< int > &check, int node)
//         {
//             vis[node] = 1;
//             pvis[node] = 1;
//             for (auto it: graph[node])
//             {
//                 if (vis[it])
//                 {
//                     if (pvis[it])
//                     {
//                         return true;
//                     }
//                     continue;
//                 }
//                 else if (calcpls(graph, vis, pvis, check, it))
//                 {
//                     return true;
//                 }
//             }
//             check[node] = 1;
//             pvis[node] = 0;
//             return false;
//         }
//     vector<int> eventualSafeNodes(vector<vector < int>> &graph)
//     {
//         int n = graph.size();
//         vector<int> vis(n, 0);
//         vector<int> pvis(n, 0);
//         vector<int> check(n, 0);
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             if (!vis[i])
//             {
//                 calcpls(graph, vis, pvis, check, i);
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (check[i] == 1) v.push_back(i);
//         }
//         return v;
//     }
// };