//1.DP MEMOIZATION - TC-O(N*K) SC-O(2N)

// class Solution
// {
// public:
//     int calcpls(vector<int> &heights, int n, int k, vector<int> &dp, int steps)
//     {
//         if (steps == 0)
//             {
//                 dp[0] = 0;
//                 return 0;
//             }

//         if (dp[steps] != -1)
//             return dp[steps];

//         int mini = INT_MAX;
//         int t = k;

//         while (t)
//         {
//             if (steps - t >= 0)
//             {
//                 int val = calcpls(heights, n, k, dp, steps - t) 
//                           + abs(heights[steps] - heights[steps - t]);

//                 mini = min(mini, val);
//             }
//             t--;
//         }

//         return dp[steps] = mini;
//     }

//     int frogJump(vector<int> &heights, int k)
//     {
//         int n = heights.size();
//         vector<int> dp(n, -1);
//         return calcpls(heights, n, k, dp, n - 1);
//     }
// };

//2.TABULATION - TC-O(N*K) SC-O(N)
//NO SPACE OPTIMIZATION - TC-O(N*K) SC-O(N)
// class Solution {
// public:
//     int frogJump(vector<int>& heights, int k) {
//         int n = heights.size();
//         vector<int>dp(n,-1);
//         dp[0] = 0;
//         for(int i = 1 ; i < n ; i++)
//         {
//             int mini = INT_MAX;
//             for(int j = 1 ; j <= k ; j++)
//             {
//                 if(i-j >= 0){
//                     int val = dp[i-j]+abs(heights[i]-heights[i-j]);
//                     mini = min(mini,val);
//                 }
//             }
//             dp[i] = mini;
//         }
//         return dp[n-1];
//     }
// };
//OPTIMIZATION - TC-O(N*K) SC-O(K+1)
// class Solution {
// public:
//     int frogJump(vector<int>& heights, int k) {
//         int n = heights.size();
//         vector<int>dp(k,0);
//         for(int i = 1 ; i < n ; i++)
//         {
//             int curr = INT_MAX;
//             for(int j = 1 ; j <= k ; j++)
//             {
//                 if(i-j >= 0){
//                     int prev = (i-j)%k;
//                     int val = dp[prev]+abs(heights[i]-heights[i-j]);
//                     curr = min(curr,val);
//                 }
//             }
//             dp[i%k] = curr;
//         }
//         return dp[(n-1)%k];
//     }
// };

