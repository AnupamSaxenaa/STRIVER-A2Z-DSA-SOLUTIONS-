//APPROACH 1 - USING NX3X2

//1.RECURSION - TC-O(2^N) SC-O(N)
// int calcpls(vector<int>& p, int idx, int tog, int nott)
// {
//     // base condition
//     if (idx == p.size() || nott == 2) return 0;
//     // work
//     if (tog == 0)
//     {
//         int l = calcpls(p, idx + 1, 1, nott) - p[idx];
//         int r = calcpls(p, idx + 1, 0, nott);
//         return max(l, r);
//     }
//     int l = calcpls(p, idx + 1, 1, nott);
//     int r = calcpls(p, idx + 1, 0, nott + 1) + p[idx];
//     return max(l, r);
// }
// int maxProfit(vector<int>& prices)
// {
//     int n = prices.size();
//     return calcpls(prices,0,0,0);
// }

//2.MEMOIZATION - TC-O(N*2*3) SC-O(N+2*3*N)
// class Solution {
// public:
//     int calcpls(vector<int>& p, int idx, int tog, int nott,
//                 vector<vector<vector<int>>>& dp)
//     {
//         // base condition
//         if (idx == p.size() || nott == 2) return 0;
//         if (dp[idx][tog][nott] != -1)
//             return dp[idx][tog][nott];
//         // work
//         if (tog == 0)
//         {
//             int l = calcpls(p, idx + 1, 1, nott, dp) - p[idx];
//             int r = calcpls(p, idx + 1, 0, nott, dp);
//             return dp[idx][tog][nott] = max(l, r);
//         }
//         int l = calcpls(p, idx + 1, 1, nott, dp);
//         int r = calcpls(p, idx + 1, 0, nott + 1, dp) + p[idx];
//         return dp[idx][tog][nott] = max(l, r);
//     }
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(
//             n + 1,
//             vector<vector<int>>(2, vector<int>(3, -1))
//         );
//         return calcpls(prices, 0, 0, 0, dp);
//     }
// };

//3.TABULATION - TC-O(2*3*N)
//NO SPACE OPTIMIZATION - SC-O(2*3*N)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector<vector< int>>> dp(n + 1, vector<vector < int>> (2, vector<int> (3, 0)));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int j = 0; j < 2; j++)
//                 {
//                     for (int k = 0; k < 2; k++)
//                     {
//                         if (j == 0)
//                         {
//                             int l = dp[idx + 1][1][k] - prices[idx];
//                             int r = dp[idx + 1][0][k];
//                             dp[idx][j][k] = max(l, r);
//                         }
//                         else
//                         {
//                             int l = dp[idx + 1][1][k];
//                             int r = dp[idx + 1][0][k + 1] + prices[idx];
//                             dp[idx][j][k] = max(l, r);
//                         }
//                     }
//                 }
//             }
//             return dp[0][0][0];
//         }
// };

//SPACE OPTIMIZED - SC-O(2*3)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector< int>> dp(2, vector<int> (3, 0)),prev(2, vector<int> (3, 0));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int j = 0; j < 2; j++)
//                 {
//                     for (int k = 0; k < 2; k++)
//                     {
//                         if (j == 0)
//                         {
//                             int l = prev[1][k] - prices[idx];
//                             int r = prev[0][k];
//                             dp[j][k] = max(l, r);
//                         }
//                         else
//                         {
//                             int l = prev[1][k];
//                             int r = prev[0][k + 1] + prices[idx];
//                             dp[j][k] = max(l, r);
//                         }
//                     } 
//                 }
//                 prev = dp;
//             }
//             return dp[0][0];
//         }
// };

//APPROACH 2 - NX4
//B S B S
//0 1 2 3 
//SO ODDS - SELL , EVENS - BUY

//1.RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:
//     int calcpls(vector<int>& p,int idx,int tot)
//     {
//         //base condition
//         if(tot==4 || idx==p.size()) return 0;
//         //work
//         if(tot%2==0){//buy
//             int l = calcpls(p,idx+1,tot+1)-p[idx];
//             int r = calcpls(p,idx+1,tot);
//             return max(l,r);
//         }
//         int l = calcpls(p,idx+1,tot+1)+p[idx];
//         int r = calcpls(p,idx+1,tot);
//         return max(l,r);
//     }
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         return calcpls(prices,0,0);
//     }
// };

//2.MEMOIZATION - TC-O(N*4) SC-O(N*5 + N)
// class Solution {
// public:
//     int calcpls(vector<int>& p,int idx,int tot,vector<vector<int>>& dp)
//     {
//         //base condition
//         if(tot==4 || idx==p.size()) return 0;
//         if(dp[idx][tot]!=-1) return dp[idx][tot];
//         //work
//         if(tot%2==0){//buy
//             int l = calcpls(p,idx+1,tot+1,dp)-p[idx];
//             int r = calcpls(p,idx+1,tot,dp);
//             return dp[idx][tot] = max(l,r);
//         }
//         int l = calcpls(p,idx+1,tot+1,dp)+p[idx];
//         int r = calcpls(p,idx+1,tot,dp);
//         return dp[idx][tot] = max(l,r);
//     }
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>>dp(n+1,vector<int>(5,-1));
//         return calcpls(prices,0,0,dp);
//     }
// };

//3.TABULATION - TC-O(N*5)
//NO SPACE OPTIMIZATION - SC-O(N*5)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector < int>> dp(n + 1, vector<int> (5, 0));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int tot = 0; tot < 4; tot++)
//                 {
//                     if (tot % 2 == 0)
//                     {
//                        	//buy
//                         int l = dp[idx + 1][tot + 1] - prices[idx];
//                         int r = dp[idx + 1][tot];
//                         dp[idx][tot] = max(l, r);
//                     }
//                     else
//                     {
//                         int l = dp[idx + 1][tot + 1] + prices[idx];
//                         int r = dp[idx + 1][tot];
//                         dp[idx][tot] = max(l, r);
//                     }
//                 }
//             }
//             return dp[0][0];
//         }
// };

//ULTRA SPACE OPTIMIZATION - SC-O(5)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<int> dp(5, 0);
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int tot = 0; tot < 4; tot++)
//                 {
//                     if (tot % 2 == 0)
//                     {
//                        	//buy
//                         int l = dp[tot + 1] - prices[idx];
//                         int r = dp[tot];
//                         dp[tot] = max(l, r);
//                     }
//                     else
//                     {
//                         int l = dp[tot + 1] + prices[idx];
//                         int r = dp[tot];
//                         dp[tot] = max(l, r);
//                     }
//                 }
//             }
//             return dp[0];
//         }
// };

