//1.RECUSRION - TC-O(2^N) SC-O(N)
// class Solution
// {
//     public:
//     int calcpls(vector<int> &nums, int idx, int prev)
//     {
//        	//base
//         if(idx>nums.size()) return 0;
//        	//work
//         if (prev==0 || nums[prev-1] < nums[idx-1]) {
//             int l = calcpls(nums,idx+1,idx)+1;
//             int r = calcpls(nums,idx+1,prev);
//             return max(l,r);
//         }
//         return calcpls(nums,idx+1,prev);
//     }
//     int lengthOfLIS(vector<int> &nums)
//     {
//         int n = nums.size();
//         return calcpls(nums, 1, 0);
//     }
// };

//2.MEMOIZATION - TC-O((N+1)*(N+1)) SC-O((N+1)*(N+1) + N)
// class Solution
// {
//     public:
//     int calcpls(vector<int> &nums, int idx, int prev,vector<vector<int>>&dp)
//     {
//        	//base
//         if(idx>nums.size()) return 0;
//         if(dp[idx][prev]!=-1) return dp[idx][prev];
//        	//work
//         if (prev==0 || nums[prev-1] < nums[idx-1]) {
//             int l = calcpls(nums,idx+1,idx,dp)+1;
//             int r = calcpls(nums,idx+1,prev,dp);
//             return dp[idx][prev] = max(l,r);
//         }
//         return dp[idx][prev] = calcpls(nums,idx+1,prev,dp);
//     }
//     int lengthOfLIS(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<vector<int>>dp(n+1,vector<int>(n,-1));
//         return calcpls(nums, 1, 0,dp);
//     }
// };

//3.TABULATION - TC-O((N+1)*(N)) 

//NO SPACE OPTIMIZATION - SC-O((N+2)*(N+1))
// class Solution
// {
//     public:
//         int lengthOfLIS(vector<int> &nums)
//         {
//             int n = nums.size();    
//             vector<vector < int>> dp(n + 2, vector<int> (n+1, 0));
//             for (int idx = n; idx >= 1; idx--)
//             {
//                 for (int prev = 0 ; prev <= n ; prev++)
//                 {
//                     if (prev == 0 || nums[prev - 1] < nums[idx - 1])
//                     {
//                         int l = dp[idx + 1][idx] + 1;
//                         int r = dp[idx + 1][prev];
//                         dp[idx][prev] = max(l, r);
//                     }
//                     else dp[idx][prev] = dp[idx + 1][prev];
//                 }
//             }
//             return dp[1][0];
//         }
// };

//SPACE OPTIMIZATION - SC-O(2*(N+1));
// class Solution
// {
//     public:
//         int lengthOfLIS(vector<int> &nums)
//         {
//             int n = nums.size();    
//             vector<int> prevv(n+1, 0),curr(n+1,0);
//             for (int idx = n; idx >= 1; idx--)
//             {
//                 for (int prev = 0 ; prev <= n ; prev++)
//                 {
//                     if (prev == 0 || nums[prev - 1] < nums[idx - 1])
//                     {
//                         int l = prevv[idx] + 1;
//                         int r = prevv[prev];
//                         curr[prev] = max(l, r);
//                     }
//                     else curr[prev] = prevv[prev];
//                 }
//                 prevv = curr;
//             }
//             return curr[0];
//         }
// };

//4.A DIFF METHOD - TC-O(N^2) SC-O(N)
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n,1);
//         int maxi = 1;
//         for(int i = 0 ; i < n ; i++)
//         {
//             for(int j = 0 ; j < i ; j++)
//             {
//                 if(nums[i]>nums[j]){
//                     dp[i] = max(dp[i],dp[j]+1);
//                 }
//             }
//             maxi = max(maxi,dp[i]);
//         }
//         return maxi;
//     }
// };
