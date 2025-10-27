//1.BETTER SOLUTION - TC - O(N log N) SC - O(N)
// ******* uses map for character counting
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         map<char,int>mpp;
//         if(s.size()!=t.size()) return false;
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             mpp[s[i]]++;
//             mpp[t[i]]--;
//         }

//         for(auto it : mpp)
//         {
//             if(it.second!=0) return false;
//         }
//         return true;
//     }
// };

//2.OPTIMAL SOLUTION - TC - O(N) SC - O(1)
// ******* uses fixed-size array for character counting
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()) return false;

//         int n = s.size();
//         int hash[256] = {0};

//         for(int i = 0 ; i < n ; i++)
//         {
//             hash[s[i]]++;
//             hash[t[i]]--;
//         }

//         for(int i = 0 ; i < 256 ; i++) if(hash[i]>0) return false;
//         return true;
//     }
// };
