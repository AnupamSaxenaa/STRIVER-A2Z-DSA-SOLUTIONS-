//V=NM, E = 8NM(AS 1 NODE 8 NEIGHBOURS)
//TC-O(ELOGV) SC-O(E+V)
// class Solution
// {
//     public:
//         int shortestPathBinaryMatrix(vector<vector < int>> &grid)
//         {
//             int n = grid.size(), m = grid[0].size();
//             if(grid[0][0]==1 || grid[n-1][m-1]==1) return -1;
//             vector<vector < int>> dist(n, vector<int> (m, 1e9));
//             dist[0][0] = 1;
//             priority_queue<tuple<int, int, int>, vector< tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
//             q.push({ 1,
//                 0,
//                 0 });
//             while (!q.empty())
//             {
//                 auto[dis, x, y] = q.top();
//                 q.pop();
//                	//left
//                 if (y - 1 >= 0 && grid[x][y - 1] == 0 && (dis + 1 < dist[x][y - 1]))
//                 {
//                     dist[x][y - 1] = dis + 1;
//                     q.push({ dis + 1,
//                         x,
//                         y - 1 });
//                 }
//                	//right
//                 if (y + 1 < m && grid[x][y + 1] == 0 && (dis + 1 < dist[x][y + 1]))
//                 {
//                     dist[x][y + 1] = dis + 1;
//                     q.push({ dis + 1,
//                         x,
//                         y + 1 });
//                 }
//                	//up
//                 if (x - 1 >= 0 && grid[x - 1][y] == 0 && (dis + 1 < dist[x - 1][y]))
//                 {
//                     dist[x - 1][y] = dis + 1;
//                     q.push({ dis + 1,
//                         x - 1,
//                         y });
//                 }
//                	//down
//                 if (x + 1 < n && grid[x + 1][y] == 0 && (dis + 1 < dist[x + 1][y]))
//                 {
//                     dist[x + 1][y] = dis + 1;
//                     q.push({ dis + 1,
//                         x + 1,
//                         y });
//                 }
//                	// upper-left
//                 if (x - 1 >= 0 && y - 1 >= 0 &&
//                     grid[x - 1][y - 1] == 0 &&
//                     dis + 1 < dist[x - 1][y - 1])
//                 {
//                     dist[x - 1][y - 1] = dis + 1;
//                     q.push({ dis + 1,
//                         x - 1,
//                         y - 1 });
//                 }
//                	// upper-right
//                 if (x - 1 >= 0 && y + 1 < m &&
//                     grid[x - 1][y + 1] == 0 &&
//                     dis + 1 < dist[x - 1][y + 1])
//                 {
//                     dist[x - 1][y + 1] = dis + 1;
//                     q.push({ dis + 1,
//                         x - 1,
//                         y + 1 });
//                 }
//                	// lower-left
//                 if (x + 1 < n && y - 1 >= 0 &&
//                     grid[x + 1][y - 1] == 0 &&
//                     dis + 1 < dist[x + 1][y - 1])
//                 {
//                     dist[x + 1][y - 1] = dis + 1;
//                     q.push({ dis + 1,
//                         x + 1,
//                         y - 1 });
//                 }
//                	// lower-right
//                 if (x + 1 < n && y + 1 < m &&
//                     grid[x + 1][y + 1] == 0 &&
//                     dis + 1 < dist[x + 1][y + 1])
//                 {
//                     dist[x + 1][y + 1] = dis + 1;
//                     q.push({ dis + 1,
//                         x + 1,
//                         y + 1 });
//                 }
//             }
//             if(dist[n-1][m-1]==1e9) return -1;
//             return dist[n - 1][m - 1];
//         }
// };