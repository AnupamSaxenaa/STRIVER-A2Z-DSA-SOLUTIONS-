//TC-O(2*M*N) SC-O(2*M*N)
// class Solution
// {
//     public:
//         int orangesRotting(vector<vector < int>> &grid)
//         {
//             queue<pair<int, int>> q;
//             int n = grid.size(), m = grid[0].size();
//             int time = 0, cnt = 0;
//             int tot = 0, totrot = 0;
//             vector<vector < int>> vis(n, vector<int> (m, 0));
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 0; j < m; j++)
//                 {
//                     if (grid[i][j] == 1 || grid[i][j] == 2) tot++;
//                     if (grid[i][j] == 2)
//                     {
//                         totrot++;
//                         q.push({ i,
//                             j });
//                         vis[i][j] = 1;
//                         grid[i][j] = -1;
//                     }
//                 }
//             }
//             while (!q.empty())
//             {
//                 int p = q.size();
//                 while (p)
//                 {
//                     auto[dx, dy] = q.front();
//                     q.pop();
//                     if (dy - 1 >= 0 && !vis[dx][dy - 1] && grid[dx][dy - 1] == 1)
//                     {
//                         q.push({ dx,
//                             dy - 1 });
//                         vis[dx][dy - 1] = 1;
//                         grid[dx][dy - 1] = -1;
//                         totrot++;
//                     }
//                     if (dy + 1 < m && !vis[dx][dy + 1] && grid[dx][dy + 1] == 1)
//                     {
//                         q.push({ dx,
//                             dy + 1 });
//                         vis[dx][dy + 1] = 1;
//                         grid[dx][dy + 1] = -1;
//                         totrot++;
//                     }
//                     if (dx - 1 >= 0 && !vis[dx - 1][dy] && grid[dx - 1][dy] == 1)
//                     {
//                         q.push({ dx - 1,
//                             dy });
//                         vis[dx - 1][dy] = 1;
//                         grid[dx - 1][dy] = -1;
//                         totrot++;
//                     }
//                     if (dx + 1 < n && !vis[dx + 1][dy] && grid[dx + 1][dy] == 1)
//                     {
//                         q.push({ dx + 1,
//                             dy });
//                         vis[dx + 1][dy] = 1;
//                         grid[dx + 1][dy] = -1;
//                         totrot++;
//                     }
//                     p--;
//                 }
//                 time++;
//             }
//             if (tot != totrot) return -1;
//             if (time == 0) return 0;
//             return time - 1;
//         }
// };