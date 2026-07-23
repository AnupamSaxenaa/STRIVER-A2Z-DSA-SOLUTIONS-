//1.RECURSION - TC-O(2^N*L) SC-O(N)
// class Solution {
// public:
//     int compare(string& large, string& small)
//     {
//         if(large.size()!=small.size()+1) return 0;
//         int n = large.size(), m = small.size();
//         int i = 0, j = 0;
//         while (i < n && j < m)
//         {
//             if (large[i] == small[j])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (j == m) return 1;
//         return 0;
//     }
//     int calcpls(vector<string>& w, int idx, int previdx)
//     {
//         // base
//         if (idx == w.size()) return 0;
//         // work
//         int nottake = calcpls(w, idx + 1, previdx);
//         int take = 0;
//         if (previdx == -1 || compare(w[idx], w[previdx]))
//         {
//             take = calcpls(w, idx + 1, idx) + 1;
//         }
//         return max(take, nottake);
//     }
//     int longestStrChain(vector<string>& words)
//     {
//         sort(words.begin(),words.end(),[](string &a,string &b){
//             return a.size()<b.size();
//         });
//         return calcpls(words, 0, -1);
//     }
// };

//2.MEMOIZATION - TC-O((N+1)(N+1)*L) SC-O(N+(N+2)(N+1))
// class Solution {
// public:
//     int compare(string &large, string &small)
//     {
//         if(large.size()!=small.size()+1) return 0;
//         int n = large.size(), m = small.size();
//         int i = 0, j = 0;
//         while (i < n && j < m)
//         {
//             if (large[i] == small[j])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (j == m) return 1;
//         return 0;
//     }
//     int calcpls(vector<string>& w, int idx, int previdx,vector<vector<int>>& dp)
//     {
//         // base
//         if (idx > w.size()) return 0;
//         if(dp[idx][previdx]!=-1) return dp[idx][previdx];
//         // work
//         int nottake = calcpls(w, idx + 1, previdx,dp);
//         int take = 0;
//         if (previdx == 0 || compare(w[idx-1], w[previdx-1]))
//         {
//             take = calcpls(w, idx + 1, idx,dp) + 1;
//         }
//         return dp[idx][previdx] = max(take, nottake);
//     }
//     int longestStrChain(vector<string>& words)
//     {
//         int n = words.size();
//         sort(words.begin(),words.end(),[](string &a,string &b){
//             return a.size()<b.size();
//         });
//         vector<vector<int>>dp(n+2,vector<int>(n+1,-1));
//         return calcpls(words, 1, 0,dp);
//     }
// };

//3.TABULATION - TC-O((N+1)*(N+1)*L)
//NO SPACE OPTIMIZATION - SC-O((N+1)(N+2))
// class Solution
// {
//     public:
//     int compare(string &large, string &small)
//     {
//         if (large.size() != small.size() + 1) return 0;
//         int n = large.size(), m = small.size();
//         int i = 0, j = 0;
//         while (i < n && j < m)
//         {
//             if (large[i] == small[j])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (j == m) return 1;
//         return 0;
//     }
//     int longestStrChain(vector<string> &words)
//     {
//         int n = words.size();
//         sort(words.begin(), words.end(), [](string &a, string &b)
//         {
//             return a.size() < b.size();
// 	});
//         vector<vector < int>> dp(n + 2, vector<int> (n + 1, 0));
//         for (int idx = n; idx >= 1; idx--)
//         {
//             for (int previdx = n ; previdx >= 0; previdx--)
//             {
//                 int nottake = dp[idx + 1][previdx];
//                 int take = 0;
//                 if (previdx == 0 || compare(words[idx - 1], words[previdx - 1]))
//                 {
//                     take = dp[idx + 1][idx] + 1;
//                 }
//                 dp[idx][previdx] = max(take, nottake);
//             }
//         }
//         return dp[1][0];
//     }
// };

//SPACE OPTMIZATION - SC-O(2(N+1))
// class Solution
// {
//     public:
//     int compare(string &large, string &small)
//     {
//         if (large.size() != small.size() + 1) return 0;
//         int n = large.size(), m = small.size();
//         int i = 0, j = 0;
//         while (i < n && j < m)
//         {
//             if (large[i] == small[j])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (j == m) return 1;
//         return 0;
//     }
//     int longestStrChain(vector<string> &words)
//     {
//         int n = words.size();
//         sort(words.begin(), words.end(), [](string &a, string &b)
//         {
//             return a.size() < b.size();
// 	});
//         vector<int> curr(n + 1, 0),prev(n+1,0);
//         for (int idx = n; idx >= 1; idx--)
//         {
//             for (int previdx = n ; previdx >= 0; previdx--)
//             {
//                 int nottake = prev[previdx];
//                 int take = 0;
//                 if (previdx == 0 || compare(words[idx - 1], words[previdx - 1]))
//                 {
//                     take = prev[idx] + 1;
//                 }
//                 curr[previdx] = max(take, nottake);
//             }
//             prev = curr;
//         }
//         return curr[0];
//     }
// };

//4.A DIFF METHODS TC-O((N+1)(N+1)L) SC-O(N)
// class Solution
// {
//     public:
//     int compare(string &large, string &small)
//     {
//         if (large.size() != small.size() + 1) return 0;
//         int n = large.size(), m = small.size();
//         int i = 0, j = 0;
//         while (i < n && j < m)
//         {
//             if (large[i] == small[j])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (j == m) return 1;
//         return 0;
//     }
//     int longestStrChain(vector<string> &words)
//     {
//         int n = words.size();
//         sort(words.begin(), words.end(), [](string &a, string &b)
//         {
//             return a.size() < b.size();
// 	    });
//         vector<int>dp(n,1);
//         int maxi = 1;
//         for(int i = 0 ; i < n ; i++)
//         {
//             for(int j = 0 ; j < i ; j++)
//             {
//                 if(compare(words[i],words[j]) && dp[i]<dp[j]+1){
//                     dp[i] = dp[j]+1;
//                 }
//             }
//             maxi = max(maxi,dp[i]);
//         }
//         return maxi;
//     }
// };