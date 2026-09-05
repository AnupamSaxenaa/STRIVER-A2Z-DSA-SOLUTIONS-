//TC-O(V+2E) SC-O(2V)
// class Solution
// {
//     public:
//         bool isBipartite(vector<vector < int>> &graph)
//         {
//             int v = graph.size();
//             vector<int> c(v, -1);
//             for (int i = 0; i < v; i++)
//             {
//                 if (c[i] == -1)
//                 {
//                     queue<int> q;
//                     q.push(i);
//                     c[i] = 0;
//                     while (!q.empty())
//                     {
//                         int n = q.size();
//                         while (n)
//                         {
//                             int node = q.front();
//                             int pc = c[node];
//                             q.pop();
//                             for (auto it: graph[node])
//                             {
//                                 if (c[it] != -1 && c[it] == pc) return false;
//                                 if (c[it] != -1) continue;
//                                 c[it] = 1 - pc;
//                                 q.push(it);
//                             }
//                             n--;
//                         }
//                     }
//                 }
//             }
//             return true;
//         }
// };