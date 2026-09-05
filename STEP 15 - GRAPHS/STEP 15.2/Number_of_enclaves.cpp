//TC-O(6NM) SC-O(2NM)
// class Solution
// {
//     public:
//         void calcpls(vector<vector < int>> &grid, vector< vector< int>> &vis, int i, int j)
//         {
//             vis[i][j] = 1;
//             if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1]) calcpls(grid, vis, i, j - 1);
//             if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j]) calcpls(grid, vis, i - 1, j);
//             if (j + 1 < grid[0].size() && !vis[i][j + 1] && grid[i][j + 1]) calcpls(grid, vis, i, j + 1);
//             if (i + 1 < grid.size() && !vis[i + 1][j] && grid[i + 1][j]) calcpls(grid, vis, i + 1, j);
//             return;
//         }
//     int numEnclaves(vector<vector < int>> &grid)
//     {
//         int n = grid.size(), m = grid[0].size();
//         vector<vector < int>> vis(n, vector<int> (m, 0));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (i != 0 && i != n - 1 && j != 0 && j != m - 1) continue;
//                 if (grid[i][j] == 1 && !vis[i][j]) calcpls(grid, vis, i, j);
//             }
//         }
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (vis[i][j] == 0 && grid[i][j] == 1) cnt++;
//             }
//         }
//         return cnt;
//     }
// };