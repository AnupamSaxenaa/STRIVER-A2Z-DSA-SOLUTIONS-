//1.CLASSICAL RECURSION  - TC-O(3^M * 3^M) SC-O(M)
// class Solution {
// public:
//     long long calcpls(vector<vector<int>>& grid,int i,int j1,int j2)
//     {
//         if(j1<0 || j1>=grid[0].size() || j2<0 || j2>=grid[0].size()) return INT_MIN;
//         if(i==(grid.size()-1)){
//             if(j1==j2) return grid[i][j1];
//             else return grid[i][j1]+grid[i][j2];
//         }
//         long long maxi = INT_MIN;
//         for(int d1 = -1 ; d1<=1 ; d1++)
//         {
//             for(int d2 = -1 ; d2<=1; d2++)
//             {
//                 if(j1==j2) maxi = max(maxi,calcpls(grid,i+1,j1+d1,j2+d2)+grid[i][j1]);
//                 else maxi = max(maxi,calcpls(grid,i+1,j1+d1,j2+d2)+grid[i][j1]+grid[i][j2]);
//             }
//         }
//         return maxi;
//     }
//     int cherryPickup(vector<vector<int>>& grid) {
//         int m = grid.size(),n = grid[0].size();
//         return (int)calcpls(grid,0,0,n-1);
//     }
// };

//2.DP MEMOIZATION - TC-O(M*N*N*9) SC-O(M+M*N*N)
// class Solution {
// public:

//     long long calcpls(vector<vector<int>>& grid,int i,int j1,int j2,vector<vector<vector<long long>>>& dp)
//     {
//         if(j1<0 || j1>=grid[0].size() || j2<0 || j2>=grid[0].size()) return INT_MIN;
//         if(i==(grid.size()-1)){
//             if(j1==j2) return grid[i][j1];
//             else return grid[i][j1]+grid[i][j2];
//         }
//         if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
//         long long maxi = INT_MIN;
//         for(int d1 = -1 ; d1<=1 ; d1++)
//         {
//             for(int d2 = -1 ; d2<=1; d2++)
//             {
//                 if(j1==j2) maxi = max(maxi,calcpls(grid,i+1,j1+d1,j2+d2,dp)+grid[i][j1]);
//                 else maxi = max(maxi,calcpls(grid,i+1,j1+d1,j2+d2,dp)+grid[i][j1]+grid[i][j2]);
//             }
//         }
//         return dp[i][j1][j2] = maxi;
//     }

//     int cherryPickup(vector<vector<int>>& grid) {
//         int m = grid.size(),n = grid[0].size();
//             vector<vector<vector<long long>>> dp(
//         m,
//         vector<vector<long long>>(n,
//             vector<long long>(n, -1)
//         )
//     );
//         return (int)calcpls(grid,0,0,n-1,dp);
//     }
// };

//3.TABULATION -  
//NO SPACE OPTIMIZATION - TC-O(M*N*N*9) SC-O(N*M*N)
// class Solution {
// public:
//     int cherryPickup(vector<vector<int>>& grid) {
//         int m = grid.size(),n = grid[0].size();
//         vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(n,0)));
//         for(int j1 = 0 ; j1 < n ; j1++)
//         {
//             for(int j2 = 0 ; j2 < n ; j2++)
//             {
//                 if(j1==j2) dp[m-1][j1][j2] = grid[m-1][j1];
//                 else dp[m-1][j1][j2] = grid[m-1][j1] + grid[m-1][j2];
//             }
//         }
//         for(int i = m-2 ; i >= 0 ; i--)
//         {
//             for(int j1 = 0 ; j1 < n ; j1++)
//             {
//                 for(int j2 = 0 ; j2 < n ; j2++)
//                 {
//                     int maxi = INT_MIN;
//                     for(int dj1 = -1 ; dj1 <= 1 ; dj1++)
//                     {
//                         for(int dj2 = -1 ; dj2 <= 1 ; dj2++)
//                         {
//                             int val = 0;
//                             if(j1==j2) val = grid[i][j1];
//                             else val = grid[i][j1]+grid[i][j2];
//                             if(j1+dj1 >= 0 && j2+dj2 >=0 && j1+dj1 < n && j2+dj2<n)
//                                 val+=dp[i+1][j1+dj1][j2+dj2];
//                             else val += INT_MIN;
//                             maxi = max(maxi,val);
//                         }
//                     }
//                     dp[i][j1][j2] = maxi;
//                 }
//             }
//         }
//         return dp[0][0][n-1];
//     }
// };
//SPACE OPTIMIZATION - TC-O(M*(N*N*9+N*N)+N^2) SC-O(N*N)
// class Solution {
// public:
//     int cherryPickup(vector<vector<int>>& grid) {
//         int m = grid.size(),n = grid[0].size();
//         vector<vector<int>>dp(n,vector<int>(n,0));
//         for(int j1 = 0 ; j1 < n ; j1++)
//         {
//             for(int j2 = 0 ; j2 < n ; j2++)
//             {
//                 if(j1==j2) dp[j1][j2] = grid[m-1][j1];
//                 else dp[j1][j2] = grid[m-1][j1] + grid[m-1][j2];
//             }
//         }
//         for(int i = m-2 ; i >= 0 ; i--)
//         {
//             vector<vector<int>>temp(n,vector<int>(n,0));
//             for(int j1 = 0 ; j1 < n ; j1++)
//             {
//                 for(int j2 = 0 ; j2 < n ; j2++)
//                 {
//                     int maxi = INT_MIN;
//                     for(int dj1 = -1 ; dj1 <= 1 ; dj1++)
//                     {
//                         for(int dj2 = -1 ; dj2 <= 1 ; dj2++)
//                         {
//                             int val = 0;
//                             if(j1==j2) val = grid[i][j1];
//                             else val = grid[i][j1]+grid[i][j2];
//                             if(j1+dj1 >= 0 && j2+dj2 >=0 && j1+dj1 < n && j2+dj2<n)
//                                 val+=dp[j1+dj1][j2+dj2];
//                             else val += INT_MIN;
//                             maxi = max(maxi,val);
//                         }
//                     }
//                     temp[j1][j2] = maxi;
//                 }
//             }
//             dp = temp;
//         }
//         return dp[0][n-1];
//     }
// };