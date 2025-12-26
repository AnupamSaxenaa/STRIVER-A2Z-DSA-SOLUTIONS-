//1.BETTER SOLUTION - TC-O(2*N) SC-O(256) WHICH IS APPROXIMATELY 1 ONLY

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i = 0, j = 0, n = s.size(), ans = 0;
//         unordered_map<char,int> mp;
        
//         while(j < n) {
//             if(mp[s[j]] > 0) {
//                 while(i <= j && s[i] != s[j]) {
//                     mp[s[i]]--;
//                     i++;
//                 }
//                 if(i < j) {
//                     mp[s[i]]--;
//                     i++;
//                 }
//             }
//             ans = max(ans, j - i + 1);
//             mp[s[j]]++;
//             j++;
//         }
        
//         return ans;
//     }
// };

//2.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

//GENERATE ALL SUBSTRING AND USE HASHING //

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(256)

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int l = 0, r = 0, n = s.size(), maxx = 0;
//         unordered_map<char,int> mp;
        
//         while(r < n) {
//             if(mp.find(s[r])==mp.end()) {
//                 maxx = max(maxx,r-l+1);
//             }else{

//                 if(mp[s[r]]>=l)
//                 l = mp[s[r]]+1;
                
//                 maxx = max(maxx,r-l+1);
//             }
//             mp[s[r]] = r;
//             r++;
//         }
        
//         return maxx;
//     }
// };
