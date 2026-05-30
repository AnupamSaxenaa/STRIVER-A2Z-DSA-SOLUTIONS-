//USING LCS TABULATION APPROACH WITH A CUSTOM LOGIC - 
// class Solution
// {
//     public:
//         string shortestCommonSupersequence(string str1, string str2)
//         {
//             //LCS
//             int n = str1.size(), m = str2.size();
//             vector<vector < int>> dp(n + 1, vector<int> (m + 1, 0));
//             for (int idx1 = n-1; idx1 >= 0; idx1--)
//             {
//                 for (int idx2 = m-1; idx2 >= 0; idx2--)
//                 {
//                     if (str1[idx1] == str2[idx2])  dp[idx1][idx2] = 1 + dp[idx1 + 1][idx2 + 1];
//                     else dp[idx1][idx2] = max(dp[idx1][idx2 + 1], dp[idx1 + 1][idx2]);
//                 }
//             }
//             //SCS
//             string res = "";
//             int idx1 = 0 , idx2 = 0;
//             while(idx1<n && idx2<m)
//             {
//                 if(str1[idx1]==str2[idx2]) {
//                     res += str1[idx1];
//                     idx1++;
//                     idx2++;
//                 }else if(dp[idx1+1][idx2]>=dp[idx1][idx2+1]){
//                     res += str1[idx1];
//                     idx1++;
//                 }else{
//                     res += str2[idx2];
//                     idx2++;
//                 }
//             }
//             if(idx1!=n){
//                 while(idx1!=n){
//                     res+=str1[idx1];
//                     idx1++;
//                 }
//             }
//             if(idx2!=m){
//                 while(idx2!=m){
//                     res += str2[idx2];
//                     idx2++;
//                 }
//             }
//             return res;
//         }
// };