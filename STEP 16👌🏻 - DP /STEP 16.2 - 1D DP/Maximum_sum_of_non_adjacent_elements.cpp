//1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:

//     int calcpls(vector<int>& nums,int idx)
//     {
//         //base cond
//         if(idx>=nums.size()) return 0;
//         //work
//         int robbed = calcpls(nums,idx+2)+nums[idx];
//         int unrobbed = calcpls(nums,idx+1);
//         return max(robbed,unrobbed);
//     }

//     int rob(vector<int>& nums) {
//         return calcpls(nums,0);
//     }
// };

//2.DP MEMOIZATION - TC-O(N) SC-O(N+N)
// class Solution {
// public:

//     int calcpls(vector<int>& nums,int idx,vector<int>&dp)
//     {
//         if(idx>=nums.size()) return 0;
//         if(dp[idx]!=-1) return dp[idx];
//         int robbed = calcpls(nums,idx+2,dp)+nums[idx];
//         int unrobbed = calcpls(nums,idx+1,dp);
//         return dp[idx] = max(robbed,unrobbed);
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n,-1);
//         calcpls(nums,0,dp);
//         return dp[0];
//     }
// };

//3.DP TABULARIZATION - TC - O(N)
//NO SPACE OPTIMIZATION - SC-O(N)
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n+2,-1); dp[n+1] = 0 , dp[n] = 0;
//         for(int i = n-1 ; i >= 0 ; i--)
//             dp[i]  = max(dp[i+2]+nums[i],dp[i+1]);
//         return dp[0];
//     }
// };
//SPACE OPTIMIZATION - SC-O(1)
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         int l = 0 , f = 0 , curr = 0;
//         for(int i = n-1 ; i >= 0 ; i--)
//             {
//                 curr = max(l+nums[i],f);
//                 l = f;
//                 f = curr;
//             }
//         return curr;
//     }
// };