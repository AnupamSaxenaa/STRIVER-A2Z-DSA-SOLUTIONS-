//1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N)
// #include <bits/stdc++.h> 
// bool calcpls(int n,int k,vector<int>& arr,int sum,int idx)
// {
//     if(sum==k) return true;
//     if(sum>k || idx>=n) return false;
//     bool take = calcpls(n,k,arr,sum+arr[idx],idx+1);
//     bool untake = calcpls(n,k,arr,sum,idx+1);
//     return take || untake;
// }
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     // Write your code here.
//     bool res = calcpls(n,k,arr,0,0);
//     return res;
// }

//2.MEMOIZATION - TC-O(N*K) SC-O(N*K+N)
// #include <bits/stdc++.h> 
// bool calcpls(int n,int k,vector<int>& arr,int sum,int idx,vector<vector<int>>& dp)
// {
//     if(sum==k) return true;
//     if(sum>k || idx>=n) return false;
//     if(dp[idx][sum]!=-1) return dp[idx][sum];
//     bool take = calcpls(n,k,arr,sum+arr[idx],idx+1,dp);
//     bool untake = calcpls(n,k,arr,sum,idx+1,dp);
//     return dp[idx][sum] = (take || untake);
// }
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     // Write your code here.
//     vector<vector<int>>dp(n,vector<int>(k+1,-1));
//     bool res = calcpls(n,k,arr,0,0,dp);
//     return res;
// }

//3.TABULATION - 
//NO SPACE OPTIMIZED - TC-O(N*K) SC-O(N*K)
// #include <bits/stdc++.h> 
// using namespace std;
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<vector<bool>> dp(n+1, vector<bool>(k+1, false));
//     for(int sum = 0; sum <= k; sum++)
//         dp[n][sum] = (sum == k);
//     for(int idx = n-1; idx >= 0; idx--)
//     {
//         for(int sum = 0; sum <= k; sum++)
//         {
//             bool take = false;
//             if(sum + arr[idx] <= k)
//                 take = dp[idx+1][sum + arr[idx]];
//             bool untake = dp[idx+1][sum];
//             dp[idx][sum] = (take || untake);
//         }
//     }
//     return dp[0][0];
// }
//SPACE OPTIMIZED - TC-O(N*(K+K)) SC-O(K+K)
// #include <bits/stdc++.h> 
// using namespace std;
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<bool>dp(k+1,false);
//     dp[k] = true;
//     for(int idx = n-1; idx >= 0; idx--)
//     {   
//         vector<bool>temp(k+1,false);
//         for(int sum = 0; sum <= k; sum++)
//         {
//             bool take = false;
//             if(sum + arr[idx] <= k)
//                 take = dp[sum + arr[idx]];
//             bool untake = dp[sum];
//             temp[sum] = (take || untake);
//         }
//         dp = temp;
//     }
//     return dp[0];
// }


