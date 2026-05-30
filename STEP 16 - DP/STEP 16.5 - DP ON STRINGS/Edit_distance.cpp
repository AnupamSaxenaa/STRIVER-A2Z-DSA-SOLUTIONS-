//1.RECURSION - TC-EXPO SC-O(N+M)
// class Solution
// {
//     public:
//         int calcpls(string &s, string &t, int i, int j)
//         {
//            	//base condition
//             if (i == s.size()) return t.size() - j;
//             if (j == t.size()) return s.size() - i;
//            	//work
//             if (s[i] == t[j]) return calcpls(s, t, i + 1, j + 1);
//             else return min({ calcpls(s, t, i, j + 1) + 1,
//                 calcpls(s, t, i + 1, j) + 1,
//                 calcpls(s, t, i + 1, j + 1) + 1 });
//         }
//     int minDistance(string word1, string word2)
//     {
//         return calcpls(word1, word2, 0, 0);
//     }
// };

//2.MEMOIZATION - TC-O(N*M) SC-O(N*M+N+M) 
// class Solution
// {
//     public:
//         int calcpls(string &s, string &t, int i, int j,vector<vector<unsigned long long>>&dp)
//         {
//            	//base condition
//             if (i == s.size()) return t.size() - j;
//             if (j == t.size()) return s.size() - i;
//             if(dp[i][j]!=-1) return dp[i][j];
//            	//work
//             if (s[i] == t[j]) return dp[i][j] = calcpls(s, t, i + 1, j + 1,dp);
//             else return dp[i][j] = min({ calcpls(s, t, i, j + 1,dp) + 1,
//                 calcpls(s, t, i + 1, j,dp) + 1,
//                 calcpls(s, t, i + 1, j + 1,dp) + 1 });
//         }
//     int minDistance(string word1, string word2)
//     {
//         vector<vector<unsigned long long>>dp(word1.size()+1,vector<unsigned long long>(word2.size()+1,-1));
//         return calcpls(word1, word2, 0, 0,dp);
//     }
// };

//3.TABULATION - TC-O(N*M)
//NO SPACE OPTIMIZATION - TC-O(N*M)
// class Solution
// {
// public:
//     int minDistance(string word1, string word2)
//     {
//         int n = word1.size(), m = word2.size();
//         vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(m + 1, 0));
//         // BASE CONDITION
//         for (int j = 0; j <= m; j++) dp[n][j] = m - j;
//         for (int i = 0; i <= n; i++) dp[i][m] = n - i;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int j = m-1; j >= 0; j--)
//             {
//                 if (word1[i] == word2[j])
//                     dp[i][j] = dp[i + 1][j + 1];
//                 else
//                     dp[i][j] = 1 + min({
//                         dp[i][j + 1],   
//                         dp[i + 1][j],    
//                         dp[i + 1][j + 1] 
//                     });
//             }
//         }
//         return (int)dp[0][0];
//     }
// };

//SPACE OPTIMIZATION - SC-O(M)
// class Solution
// {
// public:
//     int minDistance(string word1, string word2)
//     {
//         int n = word1.size(), m = word2.size();
//         vector<unsigned long long> prev(m + 1,0),curr(m + 1,0);
//         // BASE CONDITION
//         for (int j = 0; j <= m; j++) prev[j] = m - j; //prev bc
//         for (int i = n - 1; i >= 0; i--)
//         {
//             curr[m] = n-i;
//             for (int j = m-1; j >= 0; j--)
//             {
//                 if (word1[i] == word2[j])
//                     curr[j] = prev[j + 1];
//                 else
//                     curr[j] = 1 + min({
//                         curr[j + 1],   
//                         prev[j],    
//                         prev[j + 1] 
//                     });
//             }
//             prev = curr;
//         }
//         return (int)prev[0];
//     }
// };