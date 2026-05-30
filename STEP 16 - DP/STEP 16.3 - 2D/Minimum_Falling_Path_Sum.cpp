//1.RECURSION - TC-O()
// class Solution {
// public:
//     long long calcpls(vector<vector<int>>& matrix,int x,int y)
//     {
//         if(x>=matrix.size() || y>=matrix[0].size() || y<0) return INT_MAX;
//         if(x==(matrix.size()-1)) return matrix[x][y];
//         long long mini = INT_MAX;
//         mini = min(mini,calcpls(matrix,x+1,y-1)+matrix[x][y]);
//         mini = min(mini,calcpls(matrix,x+1,y)+matrix[x][y]);
//         mini = min(mini,calcpls(matrix,x+1,y+1)+matrix[x][y]);
//         return mini;
//     }
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m = matrix.size() , n = matrix[0].size();
//         long long mini = INT_MAX;
//         for(int i = 0 ; i < n ; i++)
//             mini = min(mini,calcpls(matrix,0,i));
//         return (int)mini;
//     }
// };

//2.DP MEMOIZATION - TC-O(N*M) SC-O(N*M+N+M)
// class Solution {
// public:
//     long long calcpls(vector<vector<int>>& matrix, int x, int y,
//                       vector<vector<long long>>& dp)
//     {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         if (y < 0 || y >= n) return LLONG_MAX;
//         if (x == m - 1) return matrix[x][y];
//         if (dp[x][y] != LLONG_MAX) return dp[x][y];
//         long long mini = LLONG_MAX;
//         long long left  = calcpls(matrix, x+1, y-1, dp);
//         long long down  = calcpls(matrix, x+1, y, dp);
//         long long right = calcpls(matrix, x+1, y+1, dp);
//         if (left  != LLONG_MAX) mini = min(mini, left  + matrix[x][y]);
//         if (down  != LLONG_MAX) mini = min(mini, down  + matrix[x][y]);
//         if (right != LLONG_MAX) mini = min(mini, right + matrix[x][y]);
//         return dp[x][y] = mini;
//     }
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         vector<vector<long long>> dp(m, vector<long long>(n, LLONG_MAX));
//         long long mini = LLONG_MAX;
//         for (int i = 0; i < n; i++)
//             mini = min(mini, calcpls(matrix, 0, i, dp));
//         return (int)mini;
//     }
// };

//3.TABULATION - TC-O(N*M+N)
//NO SPACE OPTIMIZATION - SC-O(M*N) 
// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         vector<vector<int>> dp(m, vector<int>(n, 0));
//         for(int i = 0 ; i < n ; i++)
//             dp[m-1][i] = matrix[m-1][i];
//         for(int i = m-2 ; i >= 0 ; i--)
//         {
//             for(int j = 0 ; j < n ; j++)
//             {
//                 int sup = dp[i+1][j];
//                 if(j-1>=0) sup = min(sup, dp[i+1][j-1]);
//                 if(j+1<n) sup = min(sup, dp[i+1][j+1]);
//                 dp[i][j] = matrix[i][j] + sup;
//             }
//         }
//         return *min_element(dp[0].begin(), dp[0].end());
//     }
// };

//SPACE OPTIMIZATION - SC-O(N)
// class Solution
// {
//     public:
//         int minFallingPathSum(vector<vector < int>> &matrix)
//         {
//             int m = matrix.size();
//             int n = matrix[0].size();
//             vector<int> dp(n, 0);
//             for (int i = 0; i < n; i++)
//                 dp[i] = matrix[m - 1][i];
//             for (int i = m - 2; i >= 0; i--)
//             {
//                 int prev = INT_MAX;
//                 for (int j = 0; j < n; j++)
//                 {
//                     int right = INT_MAX;
//                     int down = dp[j];
//                     if (j + 1 < n) right = dp[j + 1];
//                     int sup = min({ down,
//                         prev,
//                         right });
//                     dp[j] = sup + matrix[i][j];
//                     prev = down;
//                 }
//             }
//             return* min_element(dp.begin(), dp.end());
//         }
// };
