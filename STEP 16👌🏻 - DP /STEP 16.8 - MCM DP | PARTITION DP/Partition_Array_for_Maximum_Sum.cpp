//1.RECURSION - TC-EXPO SC-O(N)
// int calcpls(vector<int>& a, int i, int k)
// {
//     // base
//     if (i == a.size()) return 0;
//     // work
//     int maxEle = INT_MIN, len = 0, maxVal = INT_MIN;
//     for (int x = i; x < min(i + k, (int)a.size()); x++)
//     {
//         len++;
//         maxEle = max(maxEle, a[x]);
//         int val = len * maxEle + calcpls(a, x + 1, k);
//         maxVal = max(maxVal, val);
//     }
//     return maxVal;
// }
// int maximumSubarray(vector<int> &arr, int k){
//     // Write your code here.
//     return calcpls(arr,0,k);
// }

//2.MEMOIZATION - TC-O(N*k) SC-O(N+N)
// class Solution {
// public:
//     int calcpls(vector<int>& a, int i, int k,vector<int>& dp)
//     {
//         // base
//         if (i == a.size()) return 0;
//         if(dp[i]!=-1) return dp[i];
//         // work
//         int maxEle = INT_MIN, len = 0, maxVal = INT_MIN;
//         for (int x = i; x < min(i + k, (int)a.size()); x++)
//         {
//             len++;
//             maxEle = max(maxEle, a[x]);
//             int val = len * maxEle + calcpls(a, x + 1, k,dp);
//             maxVal = max(maxVal, val);
//         }
//         return dp[i] = maxVal;
//     }
//     int maxSumAfterPartitioning(vector<int>& arr, int k) {
//         vector<int>dp(arr.size()+1,-1);
//         return calcpls(arr, 0, k,dp);
//     }
// };

//3.TABULATION - TC-O(N*k) SC-O(N)
// class Solution
// {
//     public:
//         int maxSumAfterPartitioning(vector<int> &arr, int k)
//         {
//             int n = arr.size();
//             vector<int> dp(arr.size() + 1, 0);
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 int maxEle = INT_MIN, len = 0, maxVal = INT_MIN;
//                 for (int x = i; x < min(i + k, (int) arr.size()); x++)
//                 {
//                     len++;
//                     maxEle = max(maxEle, arr[x]);
//                     int val = len *maxEle + dp[x + 1];
//                     maxVal = max(maxVal, val);
//                 }
//                 dp[i] = maxVal;
//             }
//             return dp[0];
//         }
// };