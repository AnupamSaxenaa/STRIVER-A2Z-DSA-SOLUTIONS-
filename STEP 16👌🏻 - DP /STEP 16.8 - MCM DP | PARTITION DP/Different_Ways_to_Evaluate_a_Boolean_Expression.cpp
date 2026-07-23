//1.RECURSION - TC-EXPO SC-O(N)
// #include<bits/stdc++.h>
// int calcpls(string &exp, int i, int j, int t)
// {
//     if (i > j) return 0;
//     if (i == j)
//     {
//         if (t) return exp[i] == 'T';
//         return exp[i] == 'F';
//     }
//     int ways = 0;
//     // split only at operators
//     for (int x = i + 1; x < j; x += 2)
//     {
//         int lt = calcpls(exp, i, x - 1, 1);
//         int rt = calcpls(exp, x + 1, j, 1);
//         int lf = calcpls(exp, i, x - 1, 0);
//         int rf = calcpls(exp, x + 1, j, 0);
//         if (exp[x] == '|')
//         {
//             if (t)
//                 ways += (lt * rt) + (lt * rf) + (lf * rt);
//             else
//                 ways += (lf * rf);
//         }
//         else if (exp[x] == '&')
//         {
//             if (t)
//                 ways += (lt * rt);
//             else
//                 ways += (lt * rf) + (lf * rt) + (lf * rf);
//         }
//         else 
//         {
//             if (t)
//                 ways += (lt * rf) + (lf * rt);
//             else
//                 ways += (lt * rt) + (lf * rf);
//         }
//     }
//     return ways;
// }
// int evaluateExp(string &exp)
// {
//     int n = exp.size();
//     return calcpls(exp, 0, n - 1, 1);
// }

//2.MEMOIZATION - TC-O(2*N^3) SC-O(N^2*2)
// #include <bits/stdc++.h>
// using namespace std;
// long long MOD = 1000000007;
// long long calcpls(string &exp, int i, int j, int t,
//                   vector<vector<vector<long long>>> &dp)
// {
//     if (i > j) return 0;
//     if (dp[i][j][t] != -1) return dp[i][j][t];
//     if (i == j)
//     {
//         if (t) return dp[i][j][t] = (exp[i] == 'T');
//         return dp[i][j][t] = (exp[i] == 'F');
//     }
//     long long ways = 0;
//     for (int x = i + 1; x < j; x += 2)
//     {
//         long long lt = calcpls(exp, i, x - 1, 1, dp);
//         long long rt = calcpls(exp, x + 1, j, 1, dp);
//         long long lf = calcpls(exp, i, x - 1, 0, dp);
//         long long rf = calcpls(exp, x + 1, j, 0, dp);
//         if (exp[x] == '|')
//         {
//             if (t)
//                 ways = (ways + (lt * rt) % MOD + (lt * rf) % MOD + (lf * rt) % MOD) % MOD;
//             else
//                 ways = (ways + (lf * rf) % MOD) % MOD;
//         }
//         else if (exp[x] == '&')
//         {
//             if (t)
//                 ways = (ways + (lt * rt) % MOD) % MOD;
//             else
//                 ways = (ways + (lt * rf) % MOD + (lf * rt) % MOD + (lf * rf) % MOD) % MOD;
//         }
//         else // '^'
//         {
//             if (t)
//                 ways = (ways + (lt * rf) % MOD + (lf * rt) % MOD) % MOD;
//             else
//                 ways = (ways + (lt * rt) % MOD + (lf * rf) % MOD) % MOD;
//         }
//     }
//     return dp[i][j][t] = ways;
// }
// int evaluateExp(string &exp)
// {
//     int n = exp.size();
//     vector<vector<vector<long long>>> dp(
//         n, vector<vector<long long>>(n, vector<long long>(2, -1)));
//     return (int)calcpls(exp, 0, n - 1, 1, dp);
// }

//3.TABULATION - TC-O(2*N^3) SC-O(N^2*2 + N)
// #include <bits/stdc++.h>
// using namespace std;
// long long MOD = 1000000007;
// int evaluateExp(string &exp)
// {
//     int n = exp.size();
//     vector<vector<vector<long long>>> dp(
//         n, vector<vector<long long>>(n, vector<long long>(2, 0)));
//     for(int i = n-1 ; i >= 0 ; i--)
//     {
//         for(int j = i ; j < n ; j++)
//         {
//             for(int t = 0 ; t <= 1 ; t++)
//             {
//                 if (i == j)
//                 {
//                     if (t) dp[i][j][t] = (exp[i] == 'T');
//                     else dp[i][j][t] = (exp[i] == 'F');
//                     continue;
//                 }
//                 long long ways = 0;
//                 for (int x = i + 1; x < j; x += 2)
//                 {
//                     long long lt = dp[i][x - 1][1];
//                     long long rt = dp[x + 1][j][1];
//                     long long lf = dp[i][x - 1][0];
//                     long long rf = dp[x + 1][j][0];
//                     if (exp[x] == '|')
//                     {
//                         if (t)
//                             ways = (ways + (lt * rt) % MOD + (lt * rf) % MOD + (lf * rt) % MOD) % MOD;
//                         else
//                             ways = (ways + (lf * rf) % MOD) % MOD;
//                     }
//                     else if (exp[x] == '&')
//                     {
//                         if (t)
//                             ways = (ways + (lt * rt) % MOD) % MOD;
//                         else
//                             ways = (ways + (lt * rf) % MOD + (lf * rt) % MOD + (lf * rf) % MOD) % MOD;
//                     }
//                     else
//                     {
//                         if (t)
//                             ways = (ways + (lt * rf) % MOD + (lf * rt) % MOD) % MOD;
//                         else
//                             ways = (ways + (lt * rt) % MOD + (lf * rf) % MOD) % MOD;
//                     }
//                 }
//                 dp[i][j][t] = ways;
//             }
//         }
//     }
//     return dp[0][n-1][1];
// }