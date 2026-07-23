//1.RECURSION - TC-EXPO SC-O(N+M)
// #include<bits/stdc++.h>
// bool calcpls(string &s, string &p, int n, int m, int i, int j)
// {
//    //base condition
//    if (i == n && j == m) return true;
//    if (i != n && j == m) return false;
//    if (i == n && j != m)
//    {
//          for (int x = j; x < m; x++)
//             if (p[x] != '*') return false;
//          return true;
//    }
//    //work
//    if (s[i] == p[j] || p[j] == '?') return calcpls(s, p, n, m, i + 1, j + 1);
//    if (p[j] == '*') return calcpls(s, p, n, m, i + 1, j) || calcpls(s, p, n, m, i, j + 1);
//    return false;
//}
// bool wildcardMatching(string pattern, string text)
// {
//    // Write your code here.
//    int n = text.size(),m = pattern.size();
//    return calcpls(text,pattern,n,m,0,0);
// }

//2.MEMOIZATION - TC-O(N*M) SC-O(N*M+N+M)
// class Solution
// {
//     public:
//         bool calcpls(string &s, string &p, int n, int m, int i, int j,vector<vector<int>>& dp)
//         {
//            	//base condition
//             if (i == n && j == m) return true;
//             if (i != n && j == m) return false;
//             if (i == n && j != m)
//             {
//                 for (int x = j; x < m; x++)
//                     if (p[x] != '*') return false;
//                 return true;
//             }
//             if(dp[i][j]!=-1) return dp[i][j];
//            	//work
//             if (s[i] == p[j] || p[j] == '?') return dp[i][j] = calcpls(s, p, n, m, i + 1, j + 1,dp);
//             if (p[j] == '*') return dp[i][j] = calcpls(s, p, n, m, i + 1, j,dp) || calcpls(s, p, n, m, i, j + 1,dp);
//             return dp[i][j] = false;
//         }
//     bool isMatch(string s, string p)
//     {
//         int n = s.size(), m = p.size();
//         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
//         return calcpls(s, p, n, m, 0, 0,dp);
//     }
// };

//3.TABULATION - TC-O(N*M)
//NO SPACE OPTIMIZATION - SC-O(N*M)
// class Solution
// {
//     public:
//         bool isMatch(string s, string p)
//         {
//             int n = s.size(), m = p.size();
//             vector<vector < int>> dp(n + 1, vector<int> (m + 1, -1));
//             dp[n][m] = true;
//             for (int i = 0; i < n; i++) dp[i][m] = false;
//             for (int j = 0; j < m; j++)
//             {
//                 bool flag = true;
//                 for (int x = j; x < m; x++)
//                     if (p[x] != '*')
//                     {
//                         flag = false;
//                         break;
//                     }
//                 dp[n][j] = flag;
//             }
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 for (int j = m - 1; j >= 0; j--)
//                 {
//                     if (s[i] == p[j] || p[j] == '?')
//                         dp[i][j] = dp[i + 1][j + 1];
//                     else if (p[j] == '*')
//                         dp[i][j] = dp[i + 1][j] || dp[i][j + 1];
//                     else
//                         dp[i][j] = false;
//                 }
//             }
//             return dp[0][0];
//         }
// };

//SPACE OPTIMIZATION - SC-O(M)
// class Solution
// {
//     public:
//         bool isMatch(string s, string p)
//         {
//             int n = s.size(), m = p.size();
//             vector<int> prev(m + 1, -1),curr(m + 1, -1);
//             prev[m] = true;
//             for (int j = 0; j < m; j++)
//             {
//                 bool flag = true;
//                 for (int x = j; x < m; x++)
//                     if (p[x] != '*')
//                     {
//                         flag = false;
//                         break;
//                     }
//                 prev[j] = flag;
//             }
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 curr[m] = false;
//                 for (int j = m - 1; j >= 0; j--)
//                 {
//                     if (s[i] == p[j] || p[j] == '?')
//                         curr[j] = prev[j + 1];
//                     else if (p[j] == '*')
//                         curr[j] = prev[j] || curr[j + 1];
//                     else
//                         curr[j] = false;
//                 }
//                 prev = curr;
//             }
//             return prev[0];
//         }
// };
