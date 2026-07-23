//1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:

//     bool calcpls(vector<int>& nums,int n,int idx,int sum,int s)
//     {
//         if(sum==s) return true;
//         if(idx>=n || sum>s) return false;
//         bool take = calcpls(nums,n,idx+1,sum+nums[idx],s);
//         bool untake = calcpls(nums,n,idx+1,sum,s);
//         return take || untake;
//     }

//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int s = accumulate(nums.begin(),nums.end(),0);
//         if(s%2!=0) return false;
//         return calcpls(nums,n,0,0,s/2);
//     }
// };

//2.DP MEMOIZATION - TC-O(N*K) SC-O(N+N*K)
// class Solution {
// public:
//     bool calcpls(vector<int>& nums,int n,int idx,int sum,int s,vector<vector<int>>& dp)
//     {
//         if(sum==s) return true;
//         if(idx>=n || sum>s) return false;
//         if(dp[idx][sum]!=-1) return dp[idx][sum];
//         bool take = calcpls(nums,n,idx+1,sum+nums[idx],s,dp);
//         bool untake = calcpls(nums,n,idx+1,sum,s,dp);
//         return dp[idx][sum] = take || untake;
//     }
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int s = accumulate(nums.begin(),nums.end(),0);
//         if(s%2!=0) return false;
//         vector<vector<int>>dp(n,vector<int>(s/2+1,-1));
//         return calcpls(nums,n,0,0,s/2,dp);
//     }
// };

//3.TABULATION - TC-O(N*K) SC-O(N*K)
//NO SPACE OPTIMIZATION - 
// class Solution
// {
//     public:
//     bool canPartition(vector<int> &nums)
//     {
//         int n = nums.size();
//         int s = accumulate(nums.begin(), nums.end(), 0);
//         if (s % 2 != 0) return false;
//         vector<vector < bool>> dp(n, vector<bool> (s / 2 + 1, false));
//         for (int sum = 0; sum < (s / 2 + 1); sum++)
//             dp[n - 1][sum] = (sum == s / 2);
//         for (int idx = n - 2; idx >= 0; idx--)
//         {
//             for (int sum = 0; sum < s / 2 + 1; sum++)
//             {
//                 bool take = false;
//                 if(sum+nums[idx] <= s/2)
//                 take = dp[idx + 1][sum + nums[idx]];
//                 bool untake = dp[idx + 1][sum];
//                 dp[idx][sum] = take || untake;
//             }
//         }
//         return dp[0][0];
//     }
// };

//SPACE OPTIMIZATION - TC-O(N*(K+K)) SC-O(K+K)
// class Solution
// {
//     public:
//     bool canPartition(vector<int> &nums)
//     {
//         int n = nums.size();
//         int s = accumulate(nums.begin(), nums.end(), 0);
//         if (s % 2 != 0) return false;
//         vector<bool>dp(s/2+1,false);
//         for (int sum = 0; sum < (s / 2 + 1); sum++)
//             dp[sum] = (sum == s / 2);
//         for (int idx = n - 2; idx >= 0; idx--)
//         {
//             vector<bool>temp(s/2+1,false);
//             for (int sum = 0; sum < s / 2 + 1; sum++)
//             {
//                 bool take = false;
//                 if(sum+nums[idx] <= s/2)
//                 take = dp[sum + nums[idx]];
//                 bool untake = dp[sum];
//                 temp[sum] = take || untake;
//             }
//             dp = temp;
//         }
//         return dp[0];
//     }
// };