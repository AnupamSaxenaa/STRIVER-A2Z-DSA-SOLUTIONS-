//1.CLASSICAL RECURSION - TC-O(2^M) SC-O(M)
// class Solution {
// public:
//     long long calcpls(vector<vector<int>>& t,int x,int y)
//     {
//         if(x>=t.size() || y>=t.size()) return 0;
//         return min(calcpls(t,x+1,y) , calcpls(t,x+1,y+1))+t[x][y];
//     }
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         return (int)calcpls(triangle,0,0);
//     }
// };

//2.DP MEMOIZATION - TC-O(M*M) SC-O(M*M + M)
// class Solution {
// public:

//     long long calcpls(vector<vector<int>>& t,int x,int y,vector<vector<long long>>& dp)
//     {
//         if(x>=t.size() || y>=t.size()) return 0;
//         if(dp[x][y]!=-1) return dp[x][y];
//         long long res = min(calcpls(t,x+1,y,dp) , calcpls(t,x+1,y+1,dp))+t[x][y];
//         return dp[x][y] = res;
//     }

//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         vector<vector<long long>>dp(m,vector<long long>(m,-1));
//         return (int)calcpls(triangle,0,0,dp);
//     }
// };

//3.DP TABULATION - TC-O(M*M) 
//NO SPACE OPTIMIZATION - SC-O(M*M)
// class Solution
// {
//     public:
//     int minimumTotal(vector<vector < int>> &triangle)
//     {
//         int m = triangle.size();
//         vector<vector < long long>> dp(m+1, vector < long long > (m+1 ,0));
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             for(int j = i ; j >=0 ; j--)
//             {
//                 dp[i][j] = min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
//             }
//         }
//         return dp[0][0];
//     }
// };
//SPACE OPTIMIZATION - SC-O(M)
// class Solution
// {
//     public:
//     int minimumTotal(vector<vector < int>> &triangle)
//     {
//         int m = triangle.size();
//         vector<int>dp(m+1,0);
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             int curr = 0, right = 0;
//             for(int j = 0 ; j <= i ; j++)
//             {
//                 dp[j] = min(dp[j],dp[j+1])+triangle[i][j];
//             }
//         }
//         return dp[0];
//     }
// };