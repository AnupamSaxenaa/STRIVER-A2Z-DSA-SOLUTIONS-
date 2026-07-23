//1.RECURSION - TC-O(2^N) SC-O(N)
// void calcpls(vector<int>& arr, int n, int k, int idx, long long sum, int& cnt)
// {
//     if(idx == n){
//         if(sum == k) cnt++;
//         return;
//     }
//     calcpls(arr, n, k, idx + 1, sum + arr[idx], cnt);
//     calcpls(arr, n, k, idx + 1, sum, cnt);
// }
// int findWays(vector<int>& arr, int k)
// {
//     int n = arr.size();
//     int cnt = 0; // FIXED
//     calcpls(arr, n, k, 0, 0LL, cnt);
//     return cnt;
// }

//2.MEMOIZATION - TC-O(N*K) SC-O(N*K+N)
// long long MOD = 1e9+7;
// int calcpls(vector<int>& arr, int n, int k, int idx, int sum, vector<vector<int>>& dp)
// {
//     if(sum > k) return 0;
//     if(idx == n){
//         return (sum == k);
//     }
//     if(dp[idx][sum] != -1) return dp[idx][sum];
//     int take = calcpls(arr, n, k, idx+1, sum + arr[idx], dp);
//     int notTake = calcpls(arr, n, k, idx+1, sum, dp);
//     return dp[idx][sum] = (take + notTake) % MOD;
// }
// int findWays(vector<int>& arr, int k)
// {
//     int n = arr.size();
//     vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
//     return calcpls(arr, n, k, 0, 0, dp);
// }

//TABULATION - 
//NOT SPACE OPTIMIZED - TC-O(N*K) SC-O(N*K)
// long long MOD = 1e9+7;
// int findWays(vector<int>& arr, int k)
// {
//     int n = arr.size();
//     vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
//     for(int sum = 0 ; sum<= k ; sum++){
//         dp[n][sum] = (sum==k);
//     }
//     for(int idx = n-1 ; idx>=0 ; idx--){
//         for(int sum = 0 ; sum<= k ;sum++)
//         {
//             int take = 0;
//             if(sum+arr[idx]<=k) take = dp[idx+1][sum + arr[idx]];
//             int notTake = dp[idx+1][sum];
//             dp[idx][sum] = (take + notTake) % MOD;
//         }
//     }
//     return dp[0][0];
// }


//SPACE OPTIMIZED - TC-O(N*K) SC-O(K)
// long long MOD = 1e9+7;
// int findWays(vector<int>& arr, int k)
// {
//     int n = arr.size();
//     vector<int> dp(k+1, 0);
//     dp[k] = 1;
//     for(int idx = n-1 ; idx>=0 ; idx--){
//         vector<int> tp(k+1, 0);
//         for(int sum = 0 ; sum<= k ;sum++)
//         {
//             int take = 0;
//             if(sum+arr[idx]<=k) take = dp[sum + arr[idx]];
//             int notTake = dp[sum];
//             tp[sum] = (take + notTake) % MOD;
//         }
//         dp = tp;
//     }
//     return dp[0];
// }