//SB KUCH SAME AS THE QUES COUNT SUBSETS WITH SUM K 
//1.TABULATION WITH SPACE OPTIMIZATION - TC-O(N*K) SC-O(K)
// #include <bits/stdc++.h> 
// int countPartitions(int n, int d, vector<int> &arr) {
//     // Write your code here.
//     long long MOD = 1e9+7;
//     int totalsum = accumulate(arr.begin(),arr.end(),0);
//     if((totalsum-d)<0 || (totalsum-d)%2!=0) return 0;
//     int k = (totalsum-d)/2;
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
