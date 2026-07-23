//?------------striver method------------?//

//1.RECURSION - TC-EXPONENTIAL SC-O(M+N)
// class Solution {
// public:
//     int calcpls(string& text1, string& text2,int n,int m,int idx1,int idx2)
//     {
//         //base condition
//         if(idx1<0 || idx2<0) return 0;
//         //work
//         if(text1[idx1]==text2[idx2]) return 1+calcpls(text1,text2,n,m,idx1-1,idx2-1);
//         return max(calcpls(text1,text2,n,m,idx1,idx2-1),calcpls(text1,text2,n,m,idx1-1,idx2));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size(),m = text2.size();
//         return calcpls(text1,text2,n,m,n-1,m-1);
//     }
// };

//2.MEMOIZATION - TC-O(M*N) SC-O(M*N+(M+N))
// class Solution {
// public:
//     int calcpls(string& text1, string& text2,int n,int m,int idx1,int idx2,vector<vector<int>>&dp)
//     {
//         //base condition
//         if(idx1<0 || idx2<0) return 0;
//         if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
//         //work
//         if(text1[idx1]==text2[idx2]) return dp[idx1][idx2] = 1+calcpls(text1,text2,n,m,idx1-1,idx2-1,dp);
//         return dp[idx1][idx2] = max(calcpls(text1,text2,n,m,idx1,idx2-1,dp),calcpls(text1,text2,n,m,idx1-1,idx2,dp));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size(),m = text2.size();
//         vector<vector<int>>dp(n,vector<int>(m,-1));
//         calcpls(text1,text2,n,m,n-1,m-1,dp);
//         if(dp[n-1][m-1]==-1) return 0;
//         return dp[n-1][m-1];
//     }
// };

//3.TABULATION - TC-O(N*M)

//NO SPACE OPTIMIZATION AND USING IDX SHIFTING - SC-O(N*M)
// class Solution
// {
//     public:
//         int longestCommonSubsequence(string text1, string text2)
//         {
//             int n = text1.size(), m = text2.size();
//             vector<vector < int>> dp(n + 1, vector<int> (m + 1, 0));
//             for (int idx1 = 1; idx1 <= n; idx1++)
//             {
//                 for (int idx2 = 1; idx2 <= m; idx2++)
//                 {
//                     if (text1[idx1-1] == text2[idx2-1])  dp[idx1][idx2] = 1 + dp[idx1 - 1][idx2 - 1];
//                     else dp[idx1][idx2] = max(dp[idx1][idx2 - 1], dp[idx1 - 1][idx2]);
//                 }
//             }
//             return dp[n][m];
//         }
// };

//SPACE OPTIMIZATION AND USING IDX SHIFTING - SC-O(M)
// class Solution
// {
//     public:
//         int longestCommonSubsequence(string text1, string text2)
//         {
//             int n = text1.size(), m = text2.size();
//             vector<int> curr(m + 1, 0),prev(m+1,0);
//             for (int idx1 = 1; idx1 <= n; idx1++)
//             {
//                 for (int idx2 = 1; idx2 <= m; idx2++)
//                 {
//                     if (text1[idx1-1] == text2[idx2-1])  curr[idx2] = 1 + prev[idx2 - 1];
//                     else curr[idx2] = max(curr[idx2 - 1], prev[idx2]);
//                 }
//                 prev = curr;
//             }
//             return curr[m];
//         }
// };


//?------------anupam method------------?//

//1.RECURSION - TC-EXPONENTIAL SC-O(M+N)
// class Solution {
// public:
//     int calcpls(string& text1, string& text2,int n,int m,int idx1,int idx2)
//     {
//         //base condition
//         if(idx1==n || idx2==m) return 0;
//         //work
//         if(text1[idx1]==text2[idx2]) return 1+calcpls(text1,text2,n,m,idx1+1,idx2+1);
//         return max(calcpls(text1,text2,n,m,idx1,idx2+1),calcpls(text1,text2,n,m,idx1+1,idx2));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size(),m = text2.size();
//         return calcpls(text1,text2,n,m,0,0);
//     }
// };

//2.MEMOIZATION - TC-O(M*N) SC-O(M*N+(M+N))
// class Solution {
// public:
//     int calcpls(string& text1, string& text2,int n,int m,int idx1,int idx2,vector<vector<int>>&dp)
//     {
//         //base condition
//         if(idx1==n || idx2==m) return 0;
//         if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
//         //work
//         if(text1[idx1]==text2[idx2]) return dp[idx1][idx2] = 1+calcpls(text1,text2,n,m,idx1+1,idx2+1,dp);
//         return dp[idx1][idx2] = max(calcpls(text1,text2,n,m,idx1,idx2+1,dp),calcpls(text1,text2,n,m,idx1+1,idx2,dp));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size(),m = text2.size();
//         vector<vector<int>>dp(n,vector<int>(m,-1));
//         calcpls(text1,text2,n,m,0,0,dp);
//         if(dp[0][0]==-1) return 0;
//         return dp[0][0];
//     }
// };

//3.TABULATION - TC-O(N*M)

//NO SPACE OPTIMIZATION - SC-O(N*M)
// class Solution
// {
//     public:
//         int longestCommonSubsequence(string text1, string text2)
//         {
//             int n = text1.size(), m = text2.size();
//             vector<vector < int>> dp(n + 1, vector<int> (m + 1, 0));
//             for (int idx1 = n-1; idx1 >= 0; idx1--)
//             {
//                 for (int idx2 = m-1; idx2 >= 0; idx2--)
//                 {
//                     if (text1[idx1] == text2[idx2])  dp[idx1][idx2] = 1 + dp[idx1 + 1][idx2 + 1];
//                     else dp[idx1][idx2] = max(dp[idx1][idx2 + 1], dp[idx1 + 1][idx2]);
//                 }
//             }
//             return dp[0][0];
//         }
// };

//SPACE OPTIMIZATION  - SC-O(M)
// class Solution
// {
//     public:
//         int longestCommonSubsequence(string text1, string text2)
//         {
//             int n = text1.size(), m = text2.size();
//             vector<int> curr(m + 1, 0),prev(m+1,0);
//             for (int idx1 = n-1; idx1 >=0 ; idx1--)
//             {
//                 for (int idx2 = m-1; idx2 >= 0; idx2--)
//                 {
//                     if (text1[idx1] == text2[idx2])  curr[idx2] = 1 + prev[idx2 + 1];
//                     else curr[idx2] = max(curr[idx2 + 1], prev[idx2]);
//                 }
//                 prev = curr;
//             }
//             return curr[0];
//         }
// };

