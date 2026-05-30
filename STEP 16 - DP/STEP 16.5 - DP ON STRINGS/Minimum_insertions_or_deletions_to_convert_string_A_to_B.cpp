//SIMPLE USE LONGEST COMMAN SUBSEQUENCE  +  A CUSTOM LOGIC RIGHT NOW USING THE OPTIMAL SOLUTION OF LCS
// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2)
//     {
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

//     int minDistance(string word1, string word2) {
//         int res = longestCommonSubsequence(word1,word2);
//         int len1 = word1.size(),len2 = word2.size();
//         return len1+len2-res*2;
//     }   
// };