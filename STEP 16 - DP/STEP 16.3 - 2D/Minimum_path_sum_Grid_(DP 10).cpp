//1.CLASSICAL RECURSION - TC-O(2^(M*N)) SC-O(M+N)
// class Solution {
// public:
//     long long calcpls(vector<vector<int>>& grid,int x,int y)
//     {
//         if(x>=grid.size() || y>=grid[0].size()) return INT_MAX;
//         if(x==(grid.size()-1) && y==(grid[0].size()-1)) return grid[x][y];
//         long long down = calcpls(grid,x+1,y)+grid[x][y],right = calcpls(grid,x,y+1)+grid[x][y];
//         return min(down,right);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         return (int)calcpls(grid,0,0);
//     }
// };

//2.DP MEMOIZATION - TC-O(M*N) SC-O(M*N+M+N)
// class Solution {
// public:
//     long long calcpls(vector<vector<int>>& grid,int x,int y,vector<vector<int>>& dp)
//     {
//         if(x>=grid.size() || y>=grid[0].size()) return INT_MAX;
//         if(x==(grid.size()-1) && y==(grid[0].size()-1)) return grid[x][y];
//         if(dp[x][y]!=-1) return dp[x][y];
//         long long down = calcpls(grid,x+1,y,dp)+grid[x][y],right = calcpls(grid,x,y+1,dp)+grid[x][y];
//         return dp[x][y] = min(down,right);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size() , n = grid[0].size();
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return (int)calcpls(grid,0,0,dp);
//     }
// };

//3.DP TABULATION - 

//RAW - TC-O(M*N) SC-O(M*N)
// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size() , n = grid[0].size();
//         vector<vector<long long>>dp(m+1,vector<long long>(n+1,INT_MAX));
//         dp[m-1][n-1] = grid[m-1][n-1];
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             for(int j = n-1 ; j >= 0 ; j--)
//             {
//                 if(i==(m-1) && j==(n-1)) continue;
//                 dp[i][j] = min(dp[i+1][j],dp[i][j+1])+(long long)grid[i][j];
//             }
//         }
//         return (int)dp[0][0];
//     }
// };

//SPACE OPTIMIZED - TC-O(M*N) SC-O(N)
// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size() , n = grid[0].size();
//         vector<long long>dp(n+1,INT_MAX);
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             long long right = INT_MAX , down = 0,curr = 0;
//             for(int j = n-1 ; j >= 0 ; j--)
//             {
//                 if(i==(m-1) && j==(n-1)){
//                     curr = grid[i][j];
//                     dp[j] = curr;
//                     right = curr;
//                     continue;
//                 }
//                 down = dp[j];
//                 curr = min(right,down)+grid[i][j];
//                 dp[j] = curr;
//                 right = curr;
//             }
//         }
//         return (int)dp[0];
//     }
// };