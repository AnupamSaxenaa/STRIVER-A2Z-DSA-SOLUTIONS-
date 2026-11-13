//USING - DFS
// TC:
// Boundary checking traversal = O(MN)
// DFS traversal = O(4MN)
// Final traversal = O(MN)
// Total = O(6MN) = O(MN)
// SC:
// vis matrix = O(MN)
// DFS recursion stack = O(MN)
// Total = O(2MN) = O(MN)
// class Solution {
// public:
//     void travel(vector<vector<char>>& board,vector<vector<int>>& vis,int i,int j)
//     {
//         vis[i][j] = 1;
//         if(j-1>=0 && !vis[i][j-1] && board[i][j-1]=='O') travel(board,vis,i,j-1);
//         if(i-1>=0 && !vis[i-1][j] && board[i-1][j]=='O') travel(board,vis,i-1,j);
//         if(j+1<board[0].size() && !vis[i][j+1] && board[i][j+1]=='O') travel(board,vis,i,j+1);
//         if(i+1<board.size() && !vis[i+1][j] && board[i+1][j]=='O') travel(board,vis,i+1,j);
//         return;
//     }
//     void solve(vector<vector<char>>& board) {
//         int n = board.size(),m = board[0].size();
//         vector<vector<int>>vis(n,vector<int>(m,0));
//         for(int i = 0 ; i < n ; i ++) 
//         {
//             for(int j = 0 ; j < m ; j++)
//             {
//                 if(i!=0 && i!=n-1 && j!=0 && j!=m-1) continue;
//                 if(board[i][j]=='O' && !vis[i][j]) {
//                     travel(board,vis,i,j); 
//                 }
//             }
//         }
//         for(int i = 0 ; i < n ; i++)
//         {
//             for(int j = 0 ; j < m ; j++)
//             {
//                 if(vis[i][j]!=1 && board[i][j]=='O'){
//                     board[i][j]='X';
//                 }
//             }
//         }
//         return;
//     }
// };

//USING - BFS
//TC-O(6MN) SC-O(2MN)
// class Solution
// {
//     public:
//         void travel(vector<vector < char>> &board, vector< vector< int>> &vis, int i, int j)
//         {
//             vis[i][j] = 1;
//             queue<pair<int, int>> q;
//             q.push({ i,
//                 j });
//             while (!q.empty())
//             {
//                 int p = q.size();
//                 while (p)
//                 {
//                     auto it = q.front();
//                     int x = it.first;
//                     int y = it.second;
//                     q.pop();
//                     if (y - 1 >= 0 && vis[x][y - 1] == 0 && board[x][y - 1] == 'O')
//                     {
//                         q.push({ x,
//                             y - 1 });
//                         vis[x][y - 1] = 1;
//                     }
//                     if (x - 1 >= 0 && vis[x - 1][y] == 0 && board[x - 1][y] == 'O')
//                     {
//                         q.push({ x - 1,
//                             y });
//                         vis[x - 1][y] = 1;
//                     }
//                     if (x + 1 < board.size() && vis[x + 1][y] == 0 && board[x + 1][y] == 'O')
//                     {
//                         q.push({ x + 1,
//                             y });
//                         vis[x + 1][y] = 1;
//                     }
//                     if (y + 1 < board[0].size() && vis[x][y + 1] == 0 && board[x][y + 1] == 'O')
//                     {
//                         q.push({ x,
//                             y + 1 });
//                         vis[x][y + 1] = 1;
//                    }
//                     p--;
//                 }
//             }
//             return;
//         }
//     void solve(vector<vector < char>> &board)
//     {
//         int n = board.size(), m = board[0].size();
//         vector<vector < int>> vis(n, vector<int> (m, 0));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (i != 0 && i != n - 1 && j != 0 && j != m - 1) continue;
//                 if (board[i][j] == 'O' && !vis[i][j])
//                 {
//                     travel(board, vis, i, j);
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (vis[i][j] != 1 && board[i][j] == 'O')
//                 {
//                     board[i][j] = 'X';
//                 }
//             }
//         }
//         return;
//     }
// };