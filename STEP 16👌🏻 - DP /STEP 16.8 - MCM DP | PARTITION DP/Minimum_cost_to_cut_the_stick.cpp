//1.RECURSION - TC-EXPO SC-O(N)
// class Solution {
// public:
//     int calcpls(vector<int>& cuts, int i, int j)
//     {
//         if (i > j) return 0;
//         int mini = INT_MAX;
//         for (int x = i; x <= j; x++)
//         {
//             int val = calcpls(cuts, i, x - 1)
//                     + calcpls(cuts, x + 1, j)
//                     + (cuts[j + 1] - cuts[i - 1]);
//             mini = min(mini, val);
//         }
//         return mini;
//     }
//     int minCost(int n, vector<int>& cuts) {
//         cuts.push_back(0);
//         cuts.push_back(n);
//         sort(cuts.begin(), cuts.end());
//         int m = cuts.size();
//         return calcpls(cuts, 1, m - 2);
//     }
// };

//2.MEMOIZATION - TC-O(N^3) SC-O(N+N^2)
// class Solution
// {
//     public:
//         int calcpls(vector<int> &cuts, int i, int j,vector<vector<int>>& dp)
//         {
//             if (i > j) return 0;
//             if(dp[i][j]!=-1) return dp[i][j];
//             int mini = INT_MAX;
//             for (int x = i; x <= j; x++)
//             {
//                 int val = calcpls(cuts, i, x - 1,dp) +
//                     calcpls(cuts, x + 1, j,dp) +
//                     (cuts[j + 1] - cuts[i - 1]);
//                 mini = min(mini, val);
//             }
//             return dp[i][j] = mini;
//         }
//     int minCost(int n, vector<int> &cuts)
//     {
//         cuts.push_back(0);
//         cuts.push_back(n);
//         sort(cuts.begin(), cuts.end());
//         int m = cuts.size();
//         vector<vector<int>>dp(m,vector<int>(m,-1));
//         return calcpls(cuts, 1, m - 2,dp);
//     }
// };

//3.TABULATION - TC-O(N^3) SC-O(N^2)
// class Solution
// {
//     public:
//         int minCost(int n, vector<int> &cuts)
//         {
//             cuts.push_back(0);
//             cuts.push_back(n);
//             sort(cuts.begin(), cuts.end());
//             int m = cuts.size();
//             vector<vector < int>> dp(m, vector<int> (m, 0));
//             for (int i = m - 2; i >= 1; i--)
//             {
//                 for (int j = i; j <= m - 2; j++)
//                 {
//                     int mini = INT_MAX;
//                     for (int x = i; x <= j; x++)
//                     {
//                         int val = dp[i][x - 1] +
//                             dp[x + 1][j] +
//                             (cuts[j + 1] - cuts[i - 1]);
//                         mini = min(mini, val);
//                     }
//                     dp[i][j] = mini;
//                 }
//             }
//             return dp[1][m-2];
//         }
// };