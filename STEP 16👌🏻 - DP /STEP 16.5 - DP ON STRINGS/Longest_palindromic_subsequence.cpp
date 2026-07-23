//1.RECURSION - TC-O(2^N) SC-O(N)
// class Solution {
// public:
//     int calcpls(string& s, int i, int j) {
//         if(i > j) return 0;
//         if(i == j) return 1;
//         if(s[i] == s[j]) {
//             return 2 + calcpls(s, i+1, j-1);
//         }
//         return  max(
//             calcpls(s, i, j-1),
//             calcpls(s, i+1, j)
//         );
//     }
//     int longestPalindromeSubseq(string s) {
//         int n = s.size();
//         return calcpls(s, 0, n-1);
//     }
// };

//2.MEMOIZATION - TC-O(N*N) SC-O(N*N + N)
// class Solution {
// public:
//     int calcpls(string& s, int i, int j, vector<vector<int>>& dp) {
//         if(i > j) return 0;
//         if(i == j) return 1;
//         if(dp[i][j] != -1) return dp[i][j];
//         if(s[i] == s[j]) {
//             return dp[i][j] = 2 + calcpls(s, i+1, j-1, dp);
//         }
//         return dp[i][j] = max(
//             calcpls(s, i, j-1, dp),
//             calcpls(s, i+1, j, dp)
//         );
//     }
//     int longestPalindromeSubseq(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         return calcpls(s, 0, n-1, dp);
//     }
// };

//3.TABULATION - TC-O(N^2) 

//NO SPACE OPTIMIZATION - SC-O(N^2)
// class Solution
// {
// public:
//     int longestPalindromeSubseq(string s)
//     {
//         int n = s.size();
//         vector<vector<int>> dp(n, vector<int>(n, 0));
//         // base case
//         for (int i = 0; i < n; i++) dp[i][i] = 1;
//         // fill table
//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if (s[i] == s[j])
//                     dp[i][j] = 2 + dp[i + 1][j - 1];
//                 else
//                     dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
//             }
//         }
//         return dp[0][n - 1];
//     }
// };

//NO SPACE OPTIMIZATION - SC-O(N)
// class Solution
// {
// public:
//     int longestPalindromeSubseq(string s)
//     {
//         int n = s.size();
//         vector<int> prev(n, 0), curr(n, 0);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             curr[i] = 1;  
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (s[i] == s[j])
//                     curr[j] = 2 + prev[j - 1];
//                 else
//                     curr[j] = max(prev[j], curr[j - 1]);
//             }
//             prev = curr;
//         }
//         return prev[n - 1];
//     }
// };

//4.REAL SOLUTION - REFER QUES LONGEST COMMAN SUBSEQUENCE FOR TC 
//AND SC RIGHT NOW I AM PICKING OPTIMAL SOLUTION OF THIS QUESTION

// class Solution
// {
// public:
//     int longestPalindromeSubseq(string s)
//     {
//         string text1 = s,text2 = s;
//         reverse(text2.begin(),text2.end());
//         int n = text1.size(), m = text2.size();
//         vector<int> curr(m + 1, 0),prev(m+1,0);
//         for (int idx1 = n-1; idx1 >=0 ; idx1--)
//         {
//             for (int idx2 = m-1; idx2 >= 0; idx2--)
//             {
//                 if (text1[idx1] == text2[idx2])  curr[idx2] = 1 + prev[idx2 + 1];
//                 else curr[idx2] = max(curr[idx2 + 1], prev[idx2]);
//             }
//             prev = curr;
//         }
//         return curr[0];
//     }
// };