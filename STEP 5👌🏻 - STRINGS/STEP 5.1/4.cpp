//1.BETTER SOLUTION - TC - O(N*M) SC - O(N*M)
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n1 = strs.size();
//         if(n1==1) return strs[0];

//         int i = 1;
//         string chk = strs[0];
//         while(i<n1)
//         {
//             string temp = "";
//             int j = 0;
//             while(j<strs[i].size() && j<chk.size())
//             {
//                 if(strs[i][j]==chk[j]) temp+=strs[i][j];
//                 else break;
//                 j++;
//             }
//             chk = temp;
//             i++;
//         }
//         return chk;
//     }
// };

//2.OPTIMAL SOLUTION - TC - O(N*M) SC - O(1)
// ******* uses resize instead of building a temp string
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n1 = strs.size();
//         if(n1==1) return strs[0];

//         int i = 1;
//         string chk = strs[0];
//         while(i<n1)
//         {
//             int j = 0;
//             while(j<strs[i].size() && j<chk.size() && strs[i][j]==chk[j])
//             {
//                 j++;
//             }
//             chk.resize(j);
//             if(chk.empty()) return "";
//             i++;
//         }
//         return chk;
//     }
// };
