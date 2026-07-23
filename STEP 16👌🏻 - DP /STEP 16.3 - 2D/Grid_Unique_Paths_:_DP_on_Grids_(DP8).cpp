//1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:

//     int calcpls(int x, int y, int m, int n)
//     {
//         if(x>=m || y>=n) return 0;
//         if(x==(m-1) && y==(n-1)) return 1;
//         return calcpls(x+1,y,m,n)+calcpls(x,y+1,m,n);
//     }
//     int uniquePaths(int m, int n) {
//         return calcpls(0,0,m,n);
//     }
// };

//2.DP MEMOIZATION - TC-O(M*N) SC-O(M*N + M+N)
// class Solution {
// public:
//     int calcpls(int x, int y, int m, int n,vector<vector<int>>& dp)
//     {
//         if(x>=m || y>=n) return 0;
//         if(x==(m-1) && y==(n-1)) return 1;
//         if(dp[x][y]!=-1) return dp[x][y];
//         return dp[x][y] = calcpls(x+1,y,m,n,dp)+calcpls(x,y+1,m,n,dp);
//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return calcpls(0,0,m,n,dp);
//     }
// };

//3.DP TABULATION - TC-O(N*M)
//NO SPACE OPTIMIZATION - SC-O(N*M)
// class Solution
// {
//     public:
//         int uniquePaths(int m, int n)
//         {
//             vector<vector < int>> dp(m + 1, vector<int> (n + 1, 0));
//             dp[m - 1][n - 1] = 1;
//             for (int i = m - 1; i >= 0; i--)
//             {
//                 for (int j = n - 1; j >= 0; j--)
//                 {
//                     if (i == m - 1 && j == n - 1) continue;
//                     dp[i][j] = dp[i + 1][j] + dp[i][j + 1];
//                 }
//             }
//             return dp[0][0];
//         }
// };
//SPACE OPTIMIZATION - SC-O(N)
// class Solution
// {
//     public:
//         int uniquePaths(int m, int n)
//         {
//             vector<int>dp(n+1,0);
//             for (int i = m - 1; i >= 0; i--)
//             {
//                 vector<int>temp(n+1,0);
//                 for (int j = n - 1; j >= 0; j--)
//                 {
//                     if (i == m - 1 && j == n - 1) {
//                         temp[n-1]=1;
//                         continue;
//                     }
//                     temp[j] = temp[j+1]+dp[j];
//                 }
//                 dp = temp;
//             }
//             return dp[0];
//         }
// };    