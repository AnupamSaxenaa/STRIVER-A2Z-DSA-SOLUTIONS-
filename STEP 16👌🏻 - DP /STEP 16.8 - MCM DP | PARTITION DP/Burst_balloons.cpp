//1.RECURSION - TC-EXPO SC-O(N)
// class Solution {
// public:
//     int calcpls(vector<int>& nums,int i ,int j)
//     {
//         //base
//         if(i>j) return 0;
//         //work
//         int maxi = INT_MIN;
//         for(int x = i ; x <= j ; x++)
//         {
//             int val = calcpls(nums,i,x-1)+calcpls(nums,x+1,j)+nums[i-1]*nums[x]*nums[j+1];
//             maxi = max(maxi,val);
//         }
//         return maxi;
//     }
//     int maxCoins(vector<int>& nums) {
//         nums.push_back(1);
//         nums.insert(nums.begin(),1);
//         return calcpls(nums,1,nums.size()-2);
//     }
// };

//2.MEMOIZATION - TC-O(N^3) SC-O(N^2 + N)
// class Solution {
// public:
//     int calcpls(vector<int>& nums,int i ,int j,vector<vector<int>>& dp)
//     {
//         //base
//         if(i>j) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         //work
//         int maxi = INT_MIN;
//         for(int x = i ; x <= j ; x++)
//         {
//             int val = calcpls(nums,i,x-1,dp)+calcpls(nums,x+1,j,dp)+nums[i-1]*nums[x]*nums[j+1];
//             maxi = max(maxi,val);
//         }
//         return dp[i][j] = maxi;
//     }
//     int maxCoins(vector<int>& nums) {
//         nums.push_back(1);
//         nums.insert(nums.begin(),1);
//         int n = nums.size();
//         vector<vector<int>>dp(n,vector<int>(n,-1));
//         return calcpls(nums,1,nums.size()-2,dp);
//     }
// };

//3.TABULATION - TC-O(N^3) SC-O(N^2)
// class Solution
// {
//     public:
//         int maxCoins(vector<int> &nums)
//         {
//             nums.push_back(1);
//             nums.insert(nums.begin(), 1);
//             int n = nums.size();
//             vector<vector < int>> dp(n, vector<int> (n, 0));

//             for (int i = n - 2; i >= 1; i--)
//             {
//                 for (int j = 1; j <= n - 2; j++)
//                 {
//                     if (i > j) continue;
//                     int maxi = INT_MIN;
//                     for (int x = i; x <= j; x++)
//                     {
//                         int val = dp[i][x - 1] + dp[x + 1][j] + nums[i - 1] *nums[x] *nums[j + 1];
//                         maxi = max(maxi, val);
//                     }
//                     dp[i][j] = maxi;
//                 }
//             }
//             return dp[1][n-2];
//         }
// };