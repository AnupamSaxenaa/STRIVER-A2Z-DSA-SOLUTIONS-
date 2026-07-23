//1.RECURSION - TC-O(2^SOMETHING) SC-O(W)
// int calcpls(int n, int w, vector<int> &profit, vector<int> &weight,int idx,int pt)
// {
//     //base condition
//     if(idx==n) {
//         if(w==0) return pt;
//         return 0;
//     }
//     //work
//     int take = 0;
//     if(w-weight[idx] >= 0) take = calcpls(n,w-weight[idx],profit,weight,idx,pt+profit[idx]);
//     int untake = calcpls(n,w,profit,weight,idx+1,pt);
//     return max(take,untake);
// }
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     // Write Your Code Here.
//     return calcpls(n,w,profit,weight,0,0);
// }

//2.MEMOIZATION - TC-O(N*W) SC-O(W*N+W)
// int calcpls(int n, int w, vector<int> &profit, vector<int> &weight,int idx,vector<vector<int>>& dp)
// {
//     //base condition
//     if(idx==n) return 0;
//     if(dp[idx][w]!=-1) return dp[idx][w];
//     //work
//     int take = 0;
//     if(w-weight[idx] >= 0) take = profit[idx]+calcpls(n,w-weight[idx],profit,weight,idx,dp);
//     int untake = calcpls(n,w,profit,weight,idx+1,dp);
//     return dp[idx][w] = max(take,untake);
// }
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     // Write Your Code Here.
//     vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
//     calcpls(n,w,profit,weight,0,dp);
//     return dp[0][w];
// }

//3.TABULATION - 
//NO SPACE OPTIMIZATION - TC-O(N*W) SC-O(N*W)
// #include<bits/stdc++.h>
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     // Write Your Code Here.
//     vector<vector<int>>dp(n+1,vector<int>(w+1,0));
//     for(int idx = n-1 ; idx>=0 ; idx--)
//     {
//         for(int wip = 0 ; wip<=w ; wip++)
//         {
//             int take = 0;
//             if(wip-weight[idx] >= 0) take = profit[idx]+dp[idx][wip-weight[idx]];
//             int untake = dp[idx+1][wip];
//             dp[idx][wip] = max(take,untake);
//         }
//     }
//     return dp[0][w];
// }

//MAX SPACE OPTIMIZATION - TC-O(N*W) SC-O(W)
// #include<bits/stdc++.h>
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     // Write Your Code Here.
//     vector<int>dp(w+1,0);
//     for(int idx = n-1 ; idx>=0 ; idx--)
//     {
//         for(int wip = 0 ; wip<=w ; wip++)
//         {
//             int take = 0;
//             if(wip-weight[idx] >= 0) take = profit[idx]+dp[wip-weight[idx]];
//             int untake = dp[wip];
//             dp[wip] = max(take,untake);
//         }
//     }
//     return dp[w];
// }