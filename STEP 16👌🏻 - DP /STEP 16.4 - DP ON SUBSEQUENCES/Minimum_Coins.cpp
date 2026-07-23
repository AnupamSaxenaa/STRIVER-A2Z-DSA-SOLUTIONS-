//1.CLASSICAL RECURSION - TC>>O(2^N) SC-O(AMOUNT)
// class Solution {
// public:
//     int calcpls(vector<int>& coins, int amount,int idx)
//     {
//         //base condition
//         if(amount==0) return 0;
//         if(idx==coins.size()) return INT_MAX;
//         //work
//         int take = INT_MAX;
//         if((amount-coins[idx])>=0)
//             {
//                 take = calcpls(coins,amount-coins[idx],idx);
//                 if(take!=INT_MAX) take += 1;
//             }
//         int untake = calcpls(coins,amount,idx+1);
//         return min(take ,untake);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         int res = calcpls(coins,amount,0);
//         if(res!=INT_MAX) return res;
//         return -1;
//     }
// };

//2.MEMOIZATION - TC-O(N*AMOUNT) SC-O(N*AMOUNT+AMOUNT)
// class Solution {
// public:
//     int calcpls(vector<int>& coins, int amount,int idx,vector<vector<int>>& dp)
//     {
//         //base condition
//         if(amount==0) return 0;
//         if(idx==coins.size()) return INT_MAX;
//         if(dp[idx][amount]!=-1) return dp[idx][amount];
//         //work
//         int take = INT_MAX;
//         if((amount-coins[idx])>=0)
//             {
//                 int res = calcpls(coins,amount-coins[idx],idx,dp);
//                 if(res!=INT_MAX) take = res+1;
//             }
//         int untake = calcpls(coins,amount,idx+1,dp);
//         return dp[idx][amount] = min(take ,untake);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
//         int res = calcpls(coins,amount,0,dp);
//         if(res!=INT_MAX) return res;
//         return -1;
//     }
// };

//3.TABULATION -
//NO SPACE OPTIMIZATION - TC-O(N*AMOUNT) SC-O(N*AMOUNT)
// class Solution
// {
// public:   
//     int coinChange(vector<int> &coins, int amount)
//     {
//         int n = coins.size();
//         vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
//         // base case
//         for (int i = 0; i <= amount; i++)
//         {
//             if (i == 0) dp[n][i] = 0;
//             else dp[n][i] = INT_MAX;
//         }
//         for (int idx = n - 1; idx >= 0; idx--)
//         {
//             for (int amt = 0; amt <= amount; amt++)
//             {
//                 int take = INT_MAX;
//                 if (amt - coins[idx] >= 0)
//                 {
//                     int res = dp[idx][amt - coins[idx]];
//                     if (res != INT_MAX) take = res + 1;
//                 }
//                 int untake = dp[idx + 1][amt];
//                 dp[idx][amt] = min(take, untake);
//             }
//         }
//         int ans = dp[0][amount];
//         return (ans == INT_MAX ? -1 : ans);  
//     }
// };

//ULTIMATE SPACE OPTIMIZATION - TC-O(N*AMOUNT) SC-O(AMOUNT)
// class Solution
// {
// public:   
//     int coinChange(vector<int> &coins, int amount)
//     {
//         int n = coins.size();
//         vector<int> dp(amount + 1, INT_MAX);
//         // base case
//         dp[0] = 0;
//         for (int idx = n - 1; idx >= 0; idx--)
//         {
//             for (int amt = 0; amt <= amount; amt++)
//             {
//                 int take = INT_MAX;
//                 if (amt - coins[idx] >= 0)
//                 {
//                     int res = dp[amt - coins[idx]];
//                     if (res != INT_MAX) take = res + 1;
//                 }
//                 int untake = dp[amt];
//                 dp[amt] = min(take, untake);
//             }
//         }
//         int ans = dp[amount];
//         return (ans == INT_MAX ? -1 : ans);  
//     }