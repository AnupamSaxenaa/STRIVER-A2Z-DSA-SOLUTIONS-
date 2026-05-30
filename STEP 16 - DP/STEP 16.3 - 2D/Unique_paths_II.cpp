//1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N) 
// class Solution {
// public:

//     int calcpls(int m,int n,int x,int y,vector<vector<int>>& obs)
//     {
//         if(x>=m || y>=n || obs[x][y]==1) return 0;
//         if(x==(m-1) && y==(n-1)) return 1;
//         return calcpls(m,n,x+1,y,obs)+calcpls(m,n,x,y+1,obs);
//     }

//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(),n = obstacleGrid[0].size();
//         return calcpls(m,n,0,0,obstacleGrid);
//     }
// };

//2.DP MEMOIZATION - TC-O(M*N) SC-O(M*N+M+N)
// class Solution {
// public:

//     int calcpls(int m,int n,int x,int y,vector<vector<int>>& obs,vector<vector<int>>&dp)
//     {
//         if(x>=m || y>=n || obs[x][y]==1) return 0;
//         if(x==(m-1) && y==(n-1)) return 1;
//         if(dp[x][y]!=-1) return dp[x][y];
//         return dp[x][y] = calcpls(m,n,x+1,y,obs,dp)+calcpls(m,n,x,y+1,obs,dp);
//     }

//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(),n = obstacleGrid[0].size();
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return calcpls(m,n,0,0,obstacleGrid,dp);
//     }
// };

//3.DP TABULATION - TC-O(N*M)
//NO SPACE OPTIMIZATION - SC-O(N*M)
// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(),n = obstacleGrid[0].size();
//         vector<vector<long long>>dp(m+1,vector<long long>(n+1,0));
//         dp[m-1][n-1] = 1;
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             for(int j = n-1 ; j >= 0 ; j--)
//             {
//                 if(i==(m-1) && j==(n-1)){
//                     if(obstacleGrid[i][j]!=0) dp[i][j]=0; 
//                     continue;
//                 }
//                 if(obstacleGrid[i][j]==1){
//                     dp[i][j] = 0;
//                     continue;
//                 }
//                 dp[i][j] = dp[i+1][j]+dp[i][j+1];
//             }
//         }
//         return (int)dp[0][0];
//     }
// };
//SPACE OPTIMIZATION - SC-O(N+N) TC-O(M*2N)
// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(),n = obstacleGrid[0].size();
//         vector<long long>dp(n+1,0);
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             vector<long long>temp(n+1,0);
//             for(int j = n-1 ; j >= 0 ; j--)
//             {
//                 if(i==(m-1) && j==(n-1)){
//                     if(obstacleGrid[i][j]!=0) temp[j]=0; 
//                     else temp[j] = 1;
//                     continue;
//                 }
//                 if(obstacleGrid[i][j]==1){
//                     temp[j] = 0;
//                     continue;
//                 }
//                 temp[j] = dp[j]+temp[j+1];
//             }
//             dp = temp;
//             vector<long long>().swap(temp);
//         }
//         return (int)dp[0];
//     }
// };
//MAX OPTIMIZED - TC-O(N*M) SC-O(N)
// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size(),n = obstacleGrid[0].size();
//         vector<long long>dp(n,0);
//         for(int i = m-1 ; i >= 0 ; i--)
//         {
//             for(int j = n-1 ; j >= 0 ; j--)
//             {
//                 if(obstacleGrid[i][j]==1) dp[j] = 0;
//                 else if(i==(m-1) && j==(n-1)) dp[j] = 1;
//                 else{
//                     long long down = dp[j];
//                     long long right = (j+1 < n) ? dp[j+1] : 0;
//                     dp[j] = down+right;
//                 }
//             }
//         }
//         return (int)dp[0];
//     }
// };