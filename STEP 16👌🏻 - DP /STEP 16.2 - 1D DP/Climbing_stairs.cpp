//the pattern of this problem is like fibonacci which i figured out while finding the solution 

//1. DP MEMOIZATION - TC-O(N) SC-O(2N)

// class Solution {
// public:
//     int calcpls(int n,vector<int>& dp,int steps)
//     {
//         if(steps>=n)
//         {
//             if(steps==n){
//                 dp[steps] = 1;
//                 return 1;
//             }else{
//                 dp[steps] = 0;
//                 return 0;
//             }
//         }
//         if(dp[steps]!=-1) return dp[steps];
//         return dp[steps] = calcpls(n,dp,steps+1) + calcpls(n,dp,steps+2);
//     }
//     int climbStairs(int n) {
//         if(n<=1) return 1;
//         vector<int>dp(n+2,-1);
//         int res = calcpls(n,dp,0);
//         return dp[0];
//     }
// };

//2.DP TABULARIZATION - TC-O(N) SC-O(N)
//NOT OPTIMIZATION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<=1) return 1;
//         vector<int>dp(n+2,-1);
//         dp[n+1]=0;dp[n]=1;
//         for(int i = n-1 ; i >= 0 ;i--)
//             dp[i] = dp[i+1]+dp[i+2];
//         return dp[0];
//     }
// };
//OPTIMIZATION - TC-O(N) SC-O(1)
// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<=1) return 1;
//         int prevl=0,prevf=1,curr = 0;
//         for(int i = n-1 ; i >= 0 ;i--)
//             {
//                 curr = prevl+prevf;
//                 prevl = prevf;
//                 prevf = curr;
//             }
//         return prevf;
//     }
// };