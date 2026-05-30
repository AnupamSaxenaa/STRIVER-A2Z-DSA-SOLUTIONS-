//1.RECURTION - TC-O(2^N) SC-O(N)
// int calcpls(vector<int>& weight, vector<int>& value, int n, int maxWeight,
//             int idx, int ow)
// {
//     // base case
//     if (idx == n) return 0;
//     // take
//     int take = 0;
//     if (ow + weight[idx] <= maxWeight)
//         take = value[idx] + calcpls(weight, value, n, maxWeight,
//                                    idx + 1, ow + weight[idx]);
//     // not take
//     int nottake = calcpls(weight, value, n, maxWeight,
//                           idx + 1, ow);
//     return max(take, nottake);
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     return calcpls(weight, value, n, maxWeight, 0, 0);
// }

//2.DP MEMOIZATION - TC-O(N*MAX WEIGHT) SC-O(N*MAX WEIGHT + N)
// int calcpls(vector<int>& weight, vector<int>& value, int n, int maxWeight,
//             int idx, int ow, vector<vector<int>>& dp)
// {
//     // base condition
//     if (idx == n) {
//         return 0;
//     }
//     if (dp[idx][ow] != -1) return dp[idx][ow];
//     int take = 0;
//     if (ow + weight[idx] <= maxWeight)
//         take = value[idx] + calcpls(weight, value, n, maxWeight,
//                                    idx + 1, ow + weight[idx], dp);
//     int nottake = calcpls(weight, value, n, maxWeight,
//                           idx + 1, ow, dp);
//     return dp[idx][ow] = max(take, nottake);
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
//     return calcpls(weight, value, n, maxWeight, 0, 0, dp);
// }

//3.TABULATION - 
//NO SPACE OPTIMIZATION - TC-O(N*MW) SC-O(N*MW)
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<vector<int>> dp(n+1, vector<int>(maxWeight + 1, -1));
//     for(int i = 0 ; i <= maxWeight ; i++){
//         dp[n][i] = 0;
//     }
//     for(int idx = n-1 ; idx >=0 ; idx--)
//     {
//         for(int ow = maxWeight ; ow >=0 ; ow--)
//         {
//             int take = 0;
//             if (ow + weight[idx] <= maxWeight)
//             take = value[idx] + dp[idx + 1][ow + weight[idx]];
//             int nottake = dp[idx + 1][ow];
//             dp[idx][ow] = max(take, nottake);
//         }
//     }
//     return dp[0][0];
// }

//SPACE OPTIMIZATION - TC-O(N*MW) SC-O(MW+SOMETHING)
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<int>dp(maxWeight + 1, 0);
//     for(int idx = n-1 ; idx >=0 ; idx--)
//     {
//         vector<int>tp(maxWeight + 1, 0);
//         for(int ow = maxWeight ; ow >=0 ; ow--)
//         {
//             int take = 0;
//             if (ow + weight[idx] <= maxWeight)
//             take = value[idx] + dp[ow + weight[idx]];
//             int nottake = dp[ow];
//             tp[ow] = max(take, nottake);
//         }
//         dp = tp;
//     }
//     return dp[0];
// }

//ULTRA SPACE OPTIMIZATION - TC-O(N*MW) SC-O(MW)
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {
//     vector<int>dp(maxWeight + 1, 0);
//     for(int idx = n-1 ; idx >=0 ; idx--)
//     {
//         for(int ow = 0 ; ow <= maxWeight ; ow++)
//         {
//             int take = 0;
//             if (ow + weight[idx] <= maxWeight)
//             take = value[idx] + dp[ow + weight[idx]];
//             int nottake = dp[ow];
//             dp[ow] = max(take, nottake);
//         }
//     }
//     return dp[0];
// }