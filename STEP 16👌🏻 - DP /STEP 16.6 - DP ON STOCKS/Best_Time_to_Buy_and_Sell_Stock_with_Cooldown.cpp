//1.RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:
//     int calcpls(vector<int>& p, int idx, int tog, int coold)
//     {
//         // base condition
//         if (idx == p.size()) return 0;
//         if (coold == 1) {
//             return calcpls(p, idx + 1, 0, 0);
//         }
//         // work
//         if (tog == 0)
//         {
//             int l = calcpls(p, idx + 1, 1, 0) - p[idx]; // buy
//             int r = calcpls(p, idx + 1, 0, 0);          // not buy
//             return max(l, r);
//         }
//         int l = calcpls(p, idx + 1, 0, 1) + p[idx]; // sell
//         int r = calcpls(p, idx + 1, 1, 0);          // not sell
//         return max(l, r);
//     }
//     int maxProfit(vector<int>& prices)
//     {
//         return calcpls(prices, 0, 0, 0);
//     }
// };

//2.MEMOIZATION - TC-O(N*2*2) SC-O(N*2*2+N)
// class Solution {
// public:
//     int calcpls(vector<int>& p, int idx, int tog, int coold,vector<vector<vector<int>>>& dp)
//     {
//         // base condition
//         if (idx == p.size()) return 0;
//         if(dp[idx][tog][coold]!=-1) return dp[idx][tog][coold];
//         // work
//         if (coold == 1) {
//             return dp[idx][tog][coold] = calcpls(p, idx + 1, 0, 0,dp);
//         }
//         if (tog == 0)
//         {
//             int l = calcpls(p, idx + 1, 1, 0,dp) - p[idx]; // buy
//             int r = calcpls(p, idx + 1, 0, 0,dp);          // not buy
//             return dp[idx][tog][coold]=max(l, r);
//         }
//         int l = calcpls(p, idx + 1, 0, 1,dp) + p[idx]; // sell
//         int r = calcpls(p, idx + 1, 1, 0,dp);          // not sell
//         return dp[idx][tog][coold] = max(l, r);
//     }
//     int maxProfit(vector<int>& prices)
//     {
//         int n = prices.size();
//         vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(2,-1)));
//         return calcpls(prices, 0, 0, 0,dp);
//     }
// };

//3.TABULATION - TC-O(N*2*2) 
//NO SPACE OPTIMIZATION - SC-O(2*2*N))
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector<vector< int>>> dp(n + 1, vector<vector < int>> (2, vector<int> (2, 0)));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int tog = 0; tog < 2; tog++)
//                 {
//                     for (int coold = 0; coold < 2; coold++)
//                     {
//                         if (coold == 1)
//                         {
//                             dp[idx][tog][coold] = dp[idx + 1][0][0];
//                         }
//                         else if (tog == 0)
//                         {
//                             int l = dp[idx + 1][1][0] - prices[idx];	// buy
//                             int r = dp[idx + 1][0][0];	// not buy
//                             dp[idx][tog][coold] = max(l, r);
//                         }
//                         else
//                         {
//                             int l = dp[idx + 1][0][1] + prices[idx];	// sell
//                             int r = dp[idx + 1][1][0];	// not sell
//                             dp[idx][tog][coold] = max(l, r);
//                         }
//                     }
//                 }
//             }
//             return dp[0][0][0];
//         }
// };

//SPACE OPTIMIZATION - SC-O(2*2)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector<int>> prev(2, vector<int> (2, 0)),curr(2, vector<int> (2, 0));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int tog = 0; tog < 2; tog++)
//                 {
//                     for (int coold = 0; coold < 2; coold++)
//                     {
//                         if (coold == 1)
//                         {
//                             curr[tog][coold] = prev[0][0];
//                         }
//                         else if (tog == 0)
//                         {
//                             int l = prev[1][0] - prices[idx];	// buy
//                             int r = prev[0][0];	// not buy
//                             curr[tog][coold] = max(l, r);
//                         }
//                         else
//                         {
//                             int l = prev[0][1] + prices[idx];	// sell
//                             int r = prev[1][0];	// not sell
//                             curr[tog][coold] = max(l, r);
//                         }
//                     }
//                 }
//                 prev = curr;
//             }
//             return curr[0][0];
//         }
// };