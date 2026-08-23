//TC-O(2*N^2) SC-O(2*N^2)
// class Solution
// {
//     private:
//         void bfs(vector<vector < char>> &grid, vector< vector< int>> &vis, int i, int j)
//         {
//             int n = grid.size(), m = grid[0].size();
//             queue<pair<int, int>> q;
//             q.push({ i,
//                 j });
//             vis[i][j] = 1;
//             while (!q.empty())
//             {
//                 pair<int, int> p = q.front();
//                 int x = p.first, y = p.second;
//                 q.pop();
//                	//left
//                 if (y - 1 >= 0 && grid[x][y - 1] == '1' && !vis[x][y - 1])
//                 {
//                     vis[x][y-1] = 1;
//                     q.push({ x,
//                         y - 1 });
//                 }
//                	//right
//                 if (y + 1 < m && grid[x][y + 1] == '1' && !vis[x][y + 1])
//                 {
//                     vis[x][y+1] = 1;
//                     q.push({ x,
//                         y + 1 });
//                 }
//                	//up
//                 if (x - 1 >= 0 && grid[x - 1][y] == '1' && !vis[x - 1][y])
//                 {
//                     vis[x-1][y] = 1;
//                     q.push({ x - 1,
//                         y });
//                 }
//                	//down
//                 if (x + 1 < n && grid[x + 1][y] == '1' && !vis[x + 1][y])
//                 {
//                     vis[x+1][y] = 1;
//                     q.push({ x + 1,
//                         y });
//                 }
//             }
//             return;
//         }
//     public:
//         int numIslands(vector<vector < char>> &grid)
//         {
//             int n = grid.size(), m = grid[0].size();
//             vector<vector < int>> vis(n, vector<int> (m, 0));
//             int cnt = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 0; j < m; j++)
//                 {
//                     if (grid[i][j] == '1' && vis[i][j] == 0)
//                     {
//                         cnt++;
//                         bfs(grid, vis, i, j);
//                     }
//                 }
//             }
//             return cnt;
//         }
// };