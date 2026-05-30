//1.RECURSION - TC-EXPONENTIAL SC-O(N)
// class Solution {
// public:
//     int calcpls(string &s, string &t,int n,int m,int i,int j)
//     {
//         //base condition
//         if(j==m) return 1;
//         if(i==n) return 0;
//         //work
//         if(s[i]==t[j]) return calcpls(s,t,n,m,i+1,j+1)+calcpls(s,t,n,m,i+1,j);
//         else return calcpls(s,t,n,m,i+1,j);
//     }
//     int numDistinct(string s, string t) {
//         int n = s.size(),m = t.size();
//         return calcpls(s,t,n,m,0,0);
//     }
// };

//2.MEMOIZATOIN - TC-O(N*M) SC-O(N*M+N)
// class Solution {
// public:
//     int calcpls(string &s, string &t,int n,int m,int i,int j,vector<vector<int>>&dp)
//     {
//         //base condition
//         if(j==m) return 1;
//         if(i==n) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         //work
//         if(s[i]==t[j]) return dp[i][j] = calcpls(s,t,n,m,i+1,j+1,dp)+calcpls(s,t,n,m,i+1,j,dp);
//         else return dp[i][j] = calcpls(s,t,n,m,i+1,j,dp);
//     }
//     int numDistinct(string s, string t) {
//         int n = s.size(),m = t.size();
//         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
//         return calcpls(s,t,n,m,0,0,dp);
//     }
// };

//3.TABULATION -
//NO OPTIMIZATION - TC-O(N*M) SC-O(N*M)
// class Solution
// {
//     public:
//         int numDistinct(string s, string t)
//         {
//             int n = s.size(), m = t.size();
//             vector<vector <unsigned long long>> dp(n + 1, vector<unsigned long long> (m + 1, 0));
//            	//base condition
//             for (int i = 0; i <= n; i++)
//                 dp[i][m] = 1;
//            	//loops
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 for (int j = 0; j < m; j++)
//                 {
//                     if (s[i] == t[j])  dp[i][j] = dp[i + 1][j + 1]+dp[i + 1][j];
//                     else dp[i][j] = dp[i + 1][j];
//                 }
//             }
//             return (int)dp[0][0];
//         }
// };

//OPTIMIZATION - 
