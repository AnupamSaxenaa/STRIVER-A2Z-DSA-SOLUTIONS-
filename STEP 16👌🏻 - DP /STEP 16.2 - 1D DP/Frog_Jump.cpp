// 1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N)

//fashion 1 - sidha sidha

// class Solution
// {
// public:
//     void calcpls(vector<int> &height, int n, int &mine, int steps, int e)
//     {
//         if (steps == (n - 1))
//         {
//             mine = min(mine, e);
//             return;
//         }

//         if (steps >= n)
//             return;
//         e += abs(height[steps] - height[steps + 1]);
//         calcpls(height, n, mine, steps + 1, e);
//         if (steps + 2 < n)
//         {
//             e -= abs(height[steps] - height[steps + 1]);
//             e += abs(height[steps] - height[steps + 2]);
//             calcpls(height, n, mine, steps + 2, e);
//         }
//         return;
//     }

//     int minCost(vector<int> &height)
//     {
//         // Code here
//         int n = height.size();
//         int mine = INT_MAX;
//         calcpls(height, n, mine, 0, 0);
//         return mine;
//     }
// };

//fashion 2 - ulta style (correct way) top-down

// class Solution {
//   public:
    
//     int calcpls(vector<int>& h,int n, int steps)
//     {
//         if(steps==0) return 0;
//         int left = calcpls(h,n,steps-1) + abs(h[steps]-h[steps-1]);
//         int right = INT_MAX;
//         if(steps!=1)
//         right = calcpls(h,n,steps-2) + abs(h[steps]-h[steps-2]);
//         return min(left,right);
//     }
  
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
//         return calcpls(height,n,n-1);
//     }
// };

//2.DP MEMOIZATION - TC-O(N) SC-O(2N) bottom-up

// class Solution {
//   public:
    
//     int calcpls(vector<int>& h,int n, int steps,vector<int>& dp)
//     {
//         if(steps==0) return 0;
//         if(dp[steps]!=-1) return dp[steps];
//         int left = calcpls(h,n,steps-1,dp) + abs(h[steps]-h[steps-1]);
//         int right = INT_MAX;
//         if(steps!=1)
//             right = calcpls(h,n,steps-2,dp) + abs(h[steps]-h[steps-2]);
//         return dp[steps] = min(left,right);
//     }
  
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
//         vector<int>dp(n+1,-1);
//         return calcpls(height,n,n-1,dp);
//     }
// };

//3.DP TABULATION - 
//NOT OPTIMIZATION - TC-O(N) SC-O(N)
// class Solution {
//   public:
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
//         if(n==1) return 0;
//         vector<int>dp(n+1,-1);
//         dp[0] = 0;
//         for(int i = 1 ; i < n ; i++)
//         {
//             int left = dp[i-1]+abs(height[i]-height[i-1]);
//             int right = INT_MAX;
//             if(i-2 >= 0) right = dp[i-2] + abs(height[i-2]-height[i]);
//             dp[i] = min(left,right);
//         }
//         return dp[n-1];
//     }
// };
//OPTIMIZATION - TC-O(N) SC-O(1)
// class Solution {
//   public:
//     int minCost(vector<int>& height) {
//         // Code here
//         int n = height.size();
//         if(n==1) return 0;
//         int prevf = 0 , curr = 0,prevl = 0;
//         for(int i = 1 ; i < n ; i++)
//         {
//             int left = prevf+abs(height[i]-height[i-1]);
//             int right = INT_MAX;
//             if(i-2 >= 0) right = prevl + abs(height[i-2]-height[i]);
//             curr = min(left,right);
//             prevl = prevf;
//             prevf = curr;
//         }
//         return prevf;
//     }
// };