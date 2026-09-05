// TC:
// Initial traversal = O(N*M)
// BFS = O(4*N*M)
// Total = O(5*N*M) = O(N*M)
// SC:
// vis = O(N*M)
// dis = O(N*M)
// queue = O(N*M)
// Total = O(3*N*M) = O(N*M)

// class Solution
// {
//     public:
//         vector<vector < int>> updateMatrix(vector<vector < int>> &mat)
//         {
//             int n = mat.size(), m = mat[0].size();
//             vector<vector < int>> vis(n, vector<int> (m, 0));
//             vector<vector < int>> dis(n, vector<int> (m, 0));
//             queue<pair<int, pair<int, int>>> q;
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 0; j < m; j++)
//                 {
//                     if (mat[i][j] == 0)
//                     {
//                         q.push({ 1,
//                             {
//                                 i,
//                                 j
//                             } });
//                         vis[i][j] = 1;
//                     }
//                 }
//             }
//             while (!q.empty())
//             {
//                 int p = q.size();
//                 while (p)
//                 {
//                     auto it = q.front();
//                     int disval = it.first;
//                     int x = it.second.first;
//                     int y = it.second.second;
//                     q.pop();
//                     vector<pair<int, int>> t = {
// 		{ -1, 0 },
//                         { 1,
//                             0 },
//                         { 0,
//                             -1 },
//                         { 0,
//                             1 }
//                     };
//                     for (int i = 0; i < 4; i++)
//                     {
//                         if (y + t[i].second >= 0 &&
//                             y + t[i].second < m &&
//                             x + t[i].first >= 0 &&
//                             x + t[i].first < n &&
//                             !vis[x + t[i].first][y + t[i].second] &&
//                             mat[x + t[i].first][y + t[i].second] == 1)
//                         {
//                             vis[x + t[i].first][y + t[i].second] = 1;
//                             dis[x + t[i].first][y + t[i].second] = disval;
//                             q.push({ disval + 1,
//                                 {
//                                     x + t[i].first,
//                                     y + t[i].second
//                                 } });
//                         }
//                     }
//                     p--;
//                 }
//            }
//             return dis;
//         }
// };