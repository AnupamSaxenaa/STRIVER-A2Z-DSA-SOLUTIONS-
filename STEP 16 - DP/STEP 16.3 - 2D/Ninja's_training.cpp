//1.CLASSICAL RECURSION - TC-O(2^N) SC-O(N)
// #include<bits/stdc++.h>
// int calcpls(vector<vector<int>> &p,int days,int act){
//     if(days >= p.size()) return 0;     
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < 3 ; i++)
//     {
//         if(act==i) continue;
//         int val = p[days][i] + calcpls(p, days+1, i);
//         maxi = max(maxi,val);
//     }
//     return maxi;
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     return calcpls(points,0,3);
// }

//2.DP MEMOIZATION - TC-O(N*4*3) SC-O(N+N*4)
// int calcpls(vector<vector<int>> &p, int days, int act, vector<vector<int>>& dp){
//     if(days >= p.size()) return 0;     
//     if(dp[days][act] != -1) return dp[days][act];
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < 3 ; i++)
//     {
//         if(act == i) continue;
//         int val = p[days][i] + calcpls(p, days+1, i, dp);
//         maxi = max(maxi, val);
//     }
//     return dp[days][act] = maxi;
// }
// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n, vector<int>(4, -1));
//     return calcpls(points, 0, 3, dp);
// }


//3.DP TABULATION - TC-O(N*4*3) SC-O((N+1)*4)
// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n+1, vector<int>(4, 0));
//     for(int day = n-1 ; day >= 0 ; day--)
//     {
//         for(int k = 0 ; k < 4 ; k++)
//         {
//             int maxi = INT_MIN;
//             for(int j = 0 ; j < 3 ; j++)
//             {
//                 if(k==j) continue;
//                 maxi = max(maxi,points[day][j]+dp[day+1][j]);
//             }
//             dp[day][k] = maxi;
//         }
//     }
//     return dp[0][3];
// }

//SPACE OPTIMIZATION - SC-O(4)
// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<int>prev(4, 0);
//     for(int day = n-1 ; day >= 0 ; day--)
//     {
//         vector<int>temp;
//         for(int k = 0 ; k < 4 ; k++)
//         {
//             int maxi = INT_MIN;
//             for(int j = 0 ; j < 3 ; j++)
//             {
//                 if(k==j) continue;
//                 maxi = max(maxi,points[day][j]+prev[j]);
//             }
//             temp.push_back(maxi);
//         }
//         prev = temp;
//     }
//     return prev[3];
// }
