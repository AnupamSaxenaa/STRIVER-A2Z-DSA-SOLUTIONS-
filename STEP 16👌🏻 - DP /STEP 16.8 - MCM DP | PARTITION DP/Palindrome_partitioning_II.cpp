//1.RECURSION - TC-O(2^N*N) SC-O(N)
// class Solution
// {
//     public:
//     bool ispalindrome(string & s)
//     {
//         int i = 0, j = s.size() - 1;
//         while (i < j)
//             if (s[i++] != s[j--]) return false;
//         return true;
//     }
//     int calcpls(string &s, int i)
//     {
//        	//base
//         if (i == s.size()) return 0;
//        	//work
//         string temp = "";
//         int mini = s.size();
//         for (int x = i; x < s.size(); x++)
//         {
//             temp += s[x];
//             if (ispalindrome(temp))
//             {
//                 int val = 1 + calcpls(s, x + 1);
//                 mini = min(val, mini);
//             }
//         }
//         return mini;
//     }
//     int minCut(string s)
//     {
//         int n = s.size();
//         return calcpls(s, 0)-1;
//     }
// };

//2.MEMOIZATION - TC-O(N*N*N) SC-O(N+N)
// class Solution
// {
//     public:
//     bool ispalindrome(string & s)
//     {
//         int i = 0, j = s.size() - 1;
//         while (i < j)
//             if (s[i++] != s[j--]) return false;
//         return true;
//     }
//     int calcpls(string &s, int i,vector<int>& dp)
//     {
//        	//base
//         if (i == s.size()) return 0;
//         if(dp[i]!=-1) return dp[i];
//        	//work
//         string temp = "";
//         int mini = s.size();
//         for (int x = i; x < s.size(); x++)
//         {
//             temp += s[x];
//             if (ispalindrome(temp))
//             {
//                 int val = 1 + calcpls(s, x + 1,dp);
//                 mini = min(val, mini);
//             }
//         }
//         return dp[i] = mini;
//     }
//     int minCut(string s)
//     {
//         int n = s.size();
//         vector<int>dp(n+1,-1);
//         return calcpls(s, 0,dp)-1;
//     }
// };

//3.TABULATION - TC-O(N*N*N) SC-O(N)
// class Solution
// {
//     public:
//     bool ispalindrome(string & s)
//     {
//         int i = 0, j = s.size() - 1;
//         while (i < j)
//             if (s[i++] != s[j--]) return false;
//         return true;
//     }
//     int minCut(string s)
//     {
//         int n = s.size();
//         vector<int> dp(n + 1, 0);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             string temp = "";
//             int mini = s.size();
//             for (int x = i; x < s.size(); x++)
//             {
//                 temp += s[x];
//                 if (ispalindrome(temp))
//                 {
//                     int val = 1 + dp[x + 1];
//                     mini = min(val, mini);
//                 }
//             }
//             dp[i] = mini;
//         }
//         return dp[0]-1;
//     }
// };
