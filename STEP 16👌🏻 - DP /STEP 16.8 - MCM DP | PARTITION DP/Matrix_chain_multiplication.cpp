//1.RECURSION - TC~EXPO SC-O(N)
// #include <bits/stdc++.h> 
// int calcpls(vector<int>& arr,int i,int j)
// {
//     if(i==j) return 0;
//     int mini = INT_MAX;
//     for(int k = i ; k < j ; k++)
//     {
//         int steps = arr[i-1]*arr[k]*arr[j] + calcpls(arr,i,k)+calcpls(arr,k+1,j);
//         mini = min(mini,steps);
//     }
//     return mini;
// }
// int matrixMultiplication(vector<int> &arr, int N)
// {
//     // Write your code here.
//     return calcpls(arr,1,N-1);
// }

//2.MEMOIZATION - TC~O(N^3) SC-O(N+N^2)
// #include <bits/stdc++.h> 
// int calcpls(vector<int>& arr,int i,int j,vector<vector<int>>& dp)
// {
//     if(i==j) return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int mini = INT_MAX;
//     for(int k = i ; k < j ; k++)
//     {
//         int steps = arr[i-1]*arr[k]*arr[j] + calcpls(arr,i,k,dp)+calcpls(arr,k+1,j,dp);
//         mini = min(mini,steps);
//     }
//     return dp[i][j] = mini;
// }
// int matrixMultiplication(vector<int> &arr, int N)
// {
//     // Write your code here.
//     vector<vector<int>>dp(N,vector<int>(N,-1));
//     return calcpls(arr,1,N-1,dp);
// }

//3.TABULATION - TC-O(N^3) SC-O(N^2)
// #include <bits/stdc++.h> 
// int matrixMultiplication(vector<int> &arr, int N)
// {
//     // Write your code here.
//     vector<vector<int>>dp(N,vector<int>(N,0));
//     int mini = INT_MAX;
//     for(int i = N-1 ; i >= 1 ; i--){
//         for(int j = i+1 ; j < N ; j++){
//             for(int k = i ; k < j ; k++)
//             {
//                 int steps = arr[i-1]*arr[k]*arr[j] + dp[i][k]+dp[k+1][j];
//                 mini = min(mini,steps);
//             }
//             dp[i][j] = mini;
//             mini = INT_MAX;
//         }
//     }
//     return dp[1][N-1];
// }