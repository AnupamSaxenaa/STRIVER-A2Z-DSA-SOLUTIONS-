//1.OPTIMIZED TABULATION - TC-O(N*M) SC-O(M)
// #include<bits/stdc++.h>
// int lcs(string &str1, string &str2){
//     int n = str1.size(), m = str2.size();
//     vector<int> curr(m + 1, 0),prev(m+1,0);
//     int ans = 0;
//     for (int idx1 = n-1; idx1 >=0 ; idx1--)
//     {
//         for (int idx2 = m-1; idx2 >= 0; idx2--)
//         {
//             if (str1[idx1] == str2[idx2])  {
//                 curr[idx2] = 1 + prev[idx2 + 1];
//                 ans = max(ans,curr[idx2]);
//             }
//             else curr[idx2] = 0;
//         }
//         prev = curr;
//     }
//     return ans;
// }
