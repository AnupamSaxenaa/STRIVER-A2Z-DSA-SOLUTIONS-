//1.RECURSION - TC-O(2^SOMETHING) EXPONENTIAL SC-O(AMOUNT)
// class Solution {
// public:
//     int calcpls(int amount, vector<int>& coins,int n,int idx)
//     {
//         //base condition
//         if(idx==n)
//         {
//             if(amount==0) return 1;
//             return 0;
//         }
//         //work
//         int take = 0;
//         if(amount - coins[idx] >=0)
//             take = calcpls(amount-coins[idx],coins,n,idx);
//         int untake = calcpls(amount,coins,n,idx+1);
//         return take + untake;
//     }
//     int change(int amount, vector<int>& coins) {
//         int n = coins.size();
//         return calcpls(amount,coins,n,0);
//     }
// };

//2.MEMOIZATION - TC-O(N*AMOUNT) SC-O(N*AMOUNT+AMOUNT)
// class Solution {
// public:
//     int calcpls(int amount, vector<int>& coins,int n,int idx,vector<vector<int>>& dp)
//     {
//         //base condition
//         if(idx==n)
//         {    
//             if(amount==0) return 1;
//             return 0;
//         }
//         if(dp[idx][amount]!=-1) return dp[idx][amount];
//         //work
//         int take = 0;
//         if(amount - coins[idx] >=0)
//             take = calcpls(amount-coins[idx],coins,n,idx,dp);
//         int untake = calcpls(amount,coins,n,idx+1,dp);
//         return dp[idx][amount] = take + untake;
//     }
//     int change(int amount, vector<int>& coins) {
//         int n = coins.size();
//         vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
//         int val = calcpls(amount,coins,n,0,dp);
//         return dp[0][amount];
//     }
// };

//3.TABULATION - 
//NO SPACE OPTIMIZATION - TC-O(N*AMOUNT) SC-O(N*AMOUNT)
// class Solution
// {
// public:
//     int change(int amount, vector<int> &coins)
//     {
//         int n = coins.size();
//         vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, 0));
//         dp[n][0] = 1;
//         for (int idx = n - 1; idx >= 0; idx--)
//         {
//             for (int amt = 0; amt <= amount; amt++)
//             {
//                 unsigned long long take = 0;
//                 if (amt - coins[idx] >= 0)
//                     take = dp[idx][amt - coins[idx]];
//                 unsigned long long untake = dp[idx + 1][amt];
//                 dp[idx][amt] = take + untake;
//             }
//         }
//         return dp[0][amount];
//     }
// };

//ULTIMATE SPACE OPTIMIZATION - TC-O(N*AMOUNT) SC-O(AMOUNT)
// class Solution
// {
// public:
//     int change(int amount, vector<int> &coins)
//     {
//         int n = coins.size();
//         vector<long long> dp(amount + 1, 0);
//         dp[0] = 1;
//         for (int idx = n - 1; idx >= 0; idx--)
//         {
//             for (int amt = 0; amt <= amount; amt++)
//             {
//                 unsigned long long take = 0;
//                 if (amt - coins[idx] >= 0)
//                     take = dp[amt - coins[idx]];
//                 unsigned long long untake = dp[amt];
//                 dp[amt] = take + untake;
//             }
//         }
//         return dp[amount];
//     }
// };