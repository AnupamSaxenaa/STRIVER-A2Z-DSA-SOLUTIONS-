//1.USING BFS ALGORITHM - TC-O(N*M) SC-O(N*M)
// class Solution
// {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
//     {
//         int n = image.size(), m = image[0].size();
//         queue<pair<int, int>> q;
//         q.push({sr, sc});
//         vector<vector<int>> vis(n, vector<int>(m, 0));
//         vis[sr][sc] = 1;
//         int tracker = image[sr][sc];
//         while (!q.empty())
//         {
//             int x = q.front().first;
//             int y = q.front().second;
//             q.pop();
//             image[x][y] = color;
//             if (y - 1 >= 0 && vis[x][y - 1] == 0 && image[x][y - 1] == tracker)
//             {
//                 q.push({x, y - 1});
//                 vis[x][y - 1] = 1;
//             }
//             if (y + 1 < m && vis[x][y + 1] == 0 && image[x][y + 1] == tracker)
//             {
//                 q.push({x, y + 1});
//                 vis[x][y + 1] = 1;
//             }
//             if (x - 1 >= 0 && vis[x - 1][y] == 0 && image[x - 1][y] == tracker)
//             {
//                 q.push({x - 1, y});
//                 vis[x - 1][y] = 1;
//             }
//             if (x + 1 < n && vis[x + 1][y] == 0 && image[x + 1][y] == tracker)
//             {
//                 q.push({x + 1, y});
//                 vis[x + 1][y] = 1;
//             }
//         }
//         return image;
//     }
// };

//USING DFS ALGORITHM - TC-O(4*N*M) SC-O(2*N*M)
// class Solution
// {
//     public:
//         void calcpls(vector<vector < int>> &image, int sr, int sc, int color, int t, vector< vector< int>> &vis)
//         {
//            	// base
//             if (vis[sr][sc] == 1) return;
//            	// work
//             vis[sr][sc] = 1;
//             image[sr][sc] = color;
//             if (sr - 1 >= 0 && vis[sr - 1][sc] == 0 && image[sr - 1][sc] == t)
//                 calcpls(image, sr - 1, sc, color, t, vis);
//             if (sr + 1 < image.size() && vis[sr + 1][sc] == 0 && image[sr + 1][sc] == t)
//                 calcpls(image, sr + 1, sc, color, t, vis);
//             if (sc - 1 >= 0 && vis[sr][sc - 1] == 0 && image[sr][sc - 1] == t)
//                 calcpls(image, sr, sc - 1, color, t, vis);
//             if (sc + 1 < image[0].size() && vis[sr][sc + 1] == 0 && image[sr][sc + 1] == t)
//                 calcpls(image, sr, sc + 1, color, t, vis);
//             return;
//         }
//     vector<vector < int>> floodFill(vector<vector < int>> &image, int sr, int sc, int color)
//     {
//         int n = image.size();
//         int m = image[0].size();
//         vector<vector < int>> vis(n, vector<int> (m, 0));
//         int t = image[sr][sc];
//         calcpls(image, sr, sc, color, t, vis);
//         return image;
//     }
// };