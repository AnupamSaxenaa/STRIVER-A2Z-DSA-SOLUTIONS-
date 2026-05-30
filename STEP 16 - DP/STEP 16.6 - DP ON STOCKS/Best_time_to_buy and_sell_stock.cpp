//1.RECURSION - TC-O(2^N) SC-O(N)
// #include <bits/stdc++.h> 
// int calcpls(vector<int>& p,int idx,int flag)
// {
//     //base condition
//     if(idx==p.size()) return 0;
//     if(flag==2) return 0;
//     //work
//     if(flag==0) 
//         return max(-p[idx]+calcpls(p,idx+1,1),calcpls(p,idx+1,flag)); 
//     return max(calcpls(p,idx+1,2)+p[idx],calcpls(p,idx+1,flag));
// }
// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//     return calcpls(prices,0,0);
// }

//2.MEMOIZATION - TC-O(3*N) SC-O(3*N+N)
// #include <bits/stdc++.h> 
//     int calcpls(vector<int>& p,int idx,int flag,vector<vector<int>>&dp)
//     {
//         //base condition
//         if(idx==p.size()) return 0;
//         if(flag==2) return 0;
//         if(dp[idx][flag]!=-1) return dp[idx][flag];
//         //work
//         if(flag==0) 
//             return dp[idx][flag] = max(-p[idx]+calcpls(p,idx+1,1,dp),calcpls(p,idx+1,flag,dp)); 
//         return dp[idx][flag] = max(calcpls(p,idx+1,2,dp)+p[idx],calcpls(p,idx+1,flag,dp));
//     }
// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//             vector<vector<int>>dp(prices.size()+1,vector<int>(3,-1));
//         return calcpls(prices,0,0,dp);
// }

//3.TABULATION - TC-O(3*N)
//NO SPACE OPTIMIZATION - SC-O(3*N)
// #include <bits/stdc++.h> 
// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//     int n = prices.size();
//     vector<vector<int>>dp(prices.size()+1,vector<int>(3,0));
//     for(int idx = n-1 ; idx >= 0 ; idx--)
//     {
//         for(int flag = 0 ; flag < 2 ; flag++)
//         {
//             if(flag==0) 
//                 dp[idx][flag] = max(-prices[idx]+dp[idx+1][flag+1],dp[idx+1][flag]); 
//             else
//                 dp[idx][flag] = max(dp[idx+1][flag+1]+prices[idx],dp[idx+1][flag]);
//         }
//     }
//     return dp[0][0];
// }

//SPACE OPTIMIZATION - SC-O(3)
// #include <bits/stdc++.h> 
// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//     int n = prices.size();
//     vector<int>dp(3,0);
//     for(int idx = n-1 ; idx >= 0 ; idx--)
//     {
//         for(int flag = 1 ; flag >= 0 ; flag--)
//         {
//             if(flag==0) 
//                 dp[flag] = max(-prices[idx]+dp[flag+1],dp[flag]); 
//             else
//                 dp[flag] = max(dp[flag+1]+prices[idx],dp[flag]);
//         }
//     }
//     return dp[0];
// }

//4.ITERATIVE (BEST) - TC-O(N) SC-O(1)
// #include <bits/stdc++.h> 
// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//     int n = prices.size(),mini = prices[0],profit = 0;
//     for(int i = 1 ; i < n ; i++)
//     {
//         int diff = prices[i]-mini;
//         profit = max(diff,profit);
//         mini = min(mini,prices[i]);
//     }

//     return profit;
// }