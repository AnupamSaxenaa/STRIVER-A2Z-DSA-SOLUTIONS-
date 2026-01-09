//1.BETTER SOLUTION - TC - O(N) SC - O(1)
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//        if(s.size()!=t.size()) return false;
//        int n = s.size(); 
//        int hash[255] = {0};
//        int hash2[255] = {0};
//         for(int i = 0 ; i < n ; i++)
//         {
//             if(hash[s[i]]!=0)
//             {
//                 if(hash[s[i]]!=t[i]) return false;
//             }
//             hash[s[i]]=t[i];

//             if(hash2[t[i]]!=0)
//             {
//                 if(hash2[t[i]]!=s[i]) return false;
//             }
//             hash2[t[i]]=s[i];
//         }
//         return true;
//     }
// };

//2.OPTIMAL SOLUTION - TC - O(N) SC - O(1)
// ******* just renaming hash arrays for clarity
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//        if(s.size()!=t.size()) return false;
//        int n = s.size(); 
//        int hash1[255] = {0};
//        int hash2[255] = {0};
//         for(int i = 0 ; i < n ; i++)
//         {
//             if(hash1[s[i]]!=0)
//             {
//                 if(hash1[s[i]]!=t[i]) return false;
//             }
//             hash1[s[i]]=t[i];

//             if(hash2[t[i]]!=0)
//             {
//                 if(hash2[t[i]]!=s[i]) return false;
//             }
//             hash2[t[i]]=s[i];
//         }
//         return true;
//     }
// };
