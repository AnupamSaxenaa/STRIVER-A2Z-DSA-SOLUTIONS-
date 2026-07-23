//1.RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:
//     int calcpls(vector<int>& p, int idx, int tog, int nott,int k)
//     {
//         // base condition
//         if (idx == p.size() || nott == k) return 0;
//         // work
//         if (tog == 0)
//         {
//             int l = calcpls(p, idx + 1, 1, nott,k) - p[idx];
//             int r = calcpls(p, idx + 1, 0, nott,k);
//             return max(l, r);
//         }
//         int l = calcpls(p, idx + 1, 1, nott,k);
//         int r = calcpls(p, idx + 1, 0, nott + 1,k) + p[idx];
//         return max(l, r);
//     }
//     int maxProfit(int k, vector<int>& prices) {
//         return calcpls(prices,0,0,0,k);
//     }
// };

//2.MEMOIZATION - TC-O(N*2*K) SC-O(N*2*K + N)
 // class Solution {
// public:
//     int calcpls(vector<int>& p, int idx, int tog, int nott,
//                 vector<vector<vector<int>>>& dp,int k)
//     {
//         // base condition
//         if (idx == p.size() || nott == k) return 0;
//         if (dp[idx][tog][nott] != -1)
//             return dp[idx][tog][nott];
//         // work
//         if (tog == 0)
//         {
//             int l = calcpls(p, idx + 1, 1, nott, dp,k) - p[idx];
//             int r = calcpls(p, idx + 1, 0, nott, dp,k);
//             return dp[idx][tog][nott] = max(l, r);
//         }
//         int l = calcpls(p, idx + 1, 1, nott, dp,k);
//         int r = calcpls(p, idx + 1, 0, nott + 1, dp,k) + p[idx];
//         return dp[idx][tog][nott] = max(l, r);
//     }
//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(
//             n + 1,
//             vector<vector<int>>(2, vector<int>(k+1, -1))
//         );
//         return calcpls(prices, 0, 0, 0, dp,k);
//     }
// };

//3.TABULATION - TC-O(N*2*K)
//NO SPACE OPTIMIZATION - SC-O(N*2*K)
// class Solution
// {
//     public:
//         int maxProfit(int k, vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector<vector< int>>> dp(n + 1, vector<vector < int>> (2, vector<int> (k + 1, 0)));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int j = 0; j < 2; j++)
//                 {
//                     for (int kk = 0; kk < k; kk++)
//                     {
//                         if (j == 0)
//                         {
//                             int l = dp[idx + 1][1][kk] - prices[idx];
//                             int r = dp[idx + 1][0][kk];
//                             dp[idx][j][kk] = max(l, r);
//                         }
//                         else
//                         {
//                             int l = dp[idx + 1][1][kk];
//                             int r = dp[idx + 1][0][kk + 1] + prices[idx];
//                             dp[idx][j][kk] = max(l, r);
//                         }
//                     }
//                 }
//             }
//             return dp[0][0][0];
//         }
// };

//SPACE OPTIMIZATION - SC-O(2*K)
// class Solution
// {
//     public:
//         int maxProfit(int k, vector<int> &prices)
//         {
//             int n = prices.size();
//             vector<vector< int>> dp(2, vector<int> (k+1, 0)),prev(2, vector<int> (k+1, 0));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int j = 0; j < 2; j++)
//                 {
//                     for (int kk = 0; kk < k; kk++)
//                     {
//                         if (j == 0)
//                         {
//                             int l = prev[1][kk] - prices[idx];
//                             int r = prev[0][kk];
//                             dp[j][kk] = max(l, r);
//                         }
//                         else
//                         {
//                             int l = prev[1][kk];
//                             int r = prev[0][kk + 1] + prices[idx];
//                             dp[j][kk] = max(l, r);
//                         }
//                     } 
//                 }
//                 prev = dp;
//             }
//             return dp[0][0];
//         }
// };

//APPROACH 2 - NX(2k)
//B S B S
//0 1 2 3 
//SO ODDS - SELL , EVENS - BUY

//1.RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:
//     int calcpls(vector<int>& p,int idx,int tot,int k)
//     {
//         //base condition
//         if(tot==k || idx==p.size()) return 0;
//         //work
//         if(tot%2==0){//buy
//             int l = calcpls(p,idx+1,tot+1,k)-p[idx];
//             int r = calcpls(p,idx+1,tot,k);
//             return max(l,r);
//         }
//         int l = calcpls(p,idx+1,tot+1,k)+p[idx];
//         int r = calcpls(p,idx+1,tot,k);
//         return max(l,r);
//     }
//     int maxProfit(int k, vector<int>& prices) {
//         return calcpls(prices,0,0,2*k);
//     }
// };

//2.MEMOIZATION - TC-O(N*2*k) SC-O(N*2*k + N)
// class Solution {
// public:
//     int calcpls(vector<int>& p,int idx,int tot,vector<vector<int>>& dp,int k)
//     {
//         //base condition
//         if(tot==k || idx==p.size()) return 0;
//         if(dp[idx][tot]!=-1) return dp[idx][tot];
//         //work
//         if(tot%2==0){//buy
//             int l = calcpls(p,idx+1,tot+1,dp,k)-p[idx];
//             int r = calcpls(p,idx+1,tot,dp,k);
//             return dp[idx][tot] = max(l,r);
//         }
//         int l = calcpls(p,idx+1,tot+1,dp,k)+p[idx];
//         int r = calcpls(p,idx+1,tot,dp,k);
//         return dp[idx][tot] = max(l,r);
//     }
//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>>dp(n+1,vector<int>(2*k+1,-1));
//         return calcpls(prices,0,0,dp,2*k);
//     }
// };

//3.TABULATION - TC-O(N*(2*k+1))
//NO SPACE OPTIMIZATION - SC-O(N*(2*k+1))
// class Solution
// {
//     public:
//         int maxProfit(int k, vector<int> &prices)
//         {
//         k = 2*k;
//         int n = prices.size();
//         vector<vector < int>> dp(n + 1, vector<int> (k+1, 0));
//         for (int idx = n - 1; idx >= 0; idx--)
//         {
//             for (int tot = 0; tot < k; tot++)
//             {
//                 if (tot % 2 == 0)
//                 {
//                     //buy
//                     int l = dp[idx + 1][tot + 1] - prices[idx];
//                     int r = dp[idx + 1][tot];
//                     dp[idx][tot] = max(l, r);
//                 }
//                 else
//                 {
//                     int l = dp[idx + 1][tot + 1] + prices[idx];
//                     int r = dp[idx + 1][tot];
//                     dp[idx][tot] = max(l, r);
//                 }
//             }
//         }
//         return dp[0][0];
//         }
// };

//ULTRA SPACE OPTIMIZATION - SC-O(2*k+1)
// class Solution
// {
//     public:
//         int maxProfit(int k, vector<int> &prices)
//         {
//             k = 2*k;
//             int n = prices.size();
//             vector<int> dp(k+1, 0);
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int tot = 0; tot < k; tot++)
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