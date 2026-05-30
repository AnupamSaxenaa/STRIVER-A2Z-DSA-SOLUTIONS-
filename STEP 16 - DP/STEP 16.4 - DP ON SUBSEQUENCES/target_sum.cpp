//1.TABULATION MAX OPTIMIZED - TC-O(N*TARGETS) SC-O(TARGETS)
// class Solution {
// public:
//     int findTargetSumWays(vector<int>& nums, int target) {
//     int d = target,n = nums.size();
//     int totsum = accumulate(nums.begin(), nums.end(), 0);
//     if ((totsum - d) % 2 != 0 || (totsum - d) < 0) return 0;
//     int targets = (totsum - d) / 2;
//     vector<int> dp(targets + 1, 0);
//     // base case
//     dp[targets] = 1;
//     for (int idx = n - 1; idx >= 0; idx--) {
//         for (int sum = 0; sum <= targets; sum++) {
//             int take = 0;
//             if (sum + nums[idx] <= targets)
//                 take = dp[sum + nums[idx]];
//             int untake = dp[sum];
//             dp[sum] = (take + untake);
//         }
//     }
//     return dp[0];
//     }
// };

//THIS QUESTION IS SIMILIAR TO OTHER PROBLEMS IN THIS FOLDER OR SECTION 