//1.RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:

//     int calcpls(vector<int>& p,int idx,int tog,int fee)
//     {
//         //base condition
//         if(idx==p.size()) return 0;
//         //work
//         if(tog==0)
//         {
//             int l = calcpls(p,idx+1,1,fee)-p[idx];//b
//             int r = calcpls(p,idx+1,0,fee);//nb
//             return max(l,r);
//         }
//         int l = calcpls(p,idx+1,0,fee)+p[idx]-fee;//s
//         int r = calcpls(p,idx+1,1,fee);//ns
//         return max(l,r);
//     }

//     int maxProfit(vector<int>& prices, int fee) {
//         return calcpls(prices,0,0,fee);
//     }
// };

//2.MEMOIZATION - TC-O(N*2) SC-O(2*N+N)
// class Solution {
// public:
//     int calcpls(vector<int>& p,int idx,int tog,vector<vector<int>>& dp,int fee)
//     {
//         //base condition
//         if(idx==p.size()) return 0;
//         if(dp[idx][tog]!=-1) return dp[idx][tog];
//         //work
//         if(tog==0)
//         {
//             int l = calcpls(p,idx+1,1,dp,fee)-p[idx];//b
//             int r = calcpls(p,idx+1,0,dp,fee);//nb
//             return dp[idx][tog] = max(l,r);
//         }
//         int l = calcpls(p,idx+1,0,dp,fee)+p[idx]-fee;//s
//         int r = calcpls(p,idx+1,1,dp,fee);//ns
//         return dp[idx][tog] = max(l,r);
//     }
//     int maxProfit(vector<int>& prices, int fee) {
//         int n = prices.size();
//         vector<vector<int>>dp(n+1,vector<int>(2,-1));
//         return calcpls(prices,0,0,dp,fee);
//     }
// };

//3.TABULATION - TC-O(N*2)
//NO SPACE OPTIMIZATION - SC-O(2*N)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices, int fee)
//         {
//             int n = prices.size();
//             vector<vector < int>> dp(n + 1, vector<int> (2, 0));
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int j = 1; j >= 0; j--)
//                 {
//                     if (j == 0)
//                     {
//                         int l = dp[idx + 1][1] - prices[idx];	//b
//                         int r = dp[idx + 1][0];	//nb
//                         dp[idx][j] = max(l, r);
//                     }
//                     else
//                     {
//                         int l = dp[idx + 1][0] + prices[idx]-fee;	//s
//                         int r = dp[idx + 1][1];	//ns
//                         dp[idx][j] = max(l, r);
//                     }
//                 }
//             }
//             return dp[0][0];
//         }
// };

//SPACE OPTIMIZATION - SC-O(2)
// class Solution
// {
//     public:
//         int maxProfit(vector<int> &prices, int fee)
//         {
//             int n = prices.size();
//             vector<int>dp(2, 0),prev(2,0);
//             for (int idx = n - 1; idx >= 0; idx--)
//             {
//                 for (int j = 1; j >= 0; j--)
//                 {
//                     if (j == 0)
//                     {
//                         int l = prev[1] - prices[idx];	//b
//                         int r = prev[0];	//nb
//                         dp[j] = max(l, r);
//                     }
//                     else
//                     {
//                         int l = prev[0] + prices[idx]-fee;	//s
//                         int r = prev[1];	//ns
//                         dp[j] = max(l, r);
//                     }
//                 }
//                 prev = dp;
//             }
//             return dp[0];
//         }
// };

