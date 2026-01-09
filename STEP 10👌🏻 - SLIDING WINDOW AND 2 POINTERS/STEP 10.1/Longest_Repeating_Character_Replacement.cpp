//1.BRUTE SOLUTION - TC-O(N^2) SC-O(26)

// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int n = s.size(),maxx = 0;
//         for(int i = 0 ; i < n ; i++){
//             vector<int>hash(26,0);
//             int maxl = 0;
//             for(int j = i ; j < n ; j++){
//                 hash[s[j]-'A']++;
//                 maxl = max(maxl,hash[s[j]-'A']);
//                 int changes = (j-i+1)-maxl;

//                 if(changes<=k) maxx = max(maxx,j-i+1);
//             }
//         }
//         return maxx;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int n = s.size();
//         int bestLen = 0;
//         int left = 0, right = 0;
//         vector<int> freq(26, 0);
//         int maxFreq = 0;

//         while (right < n) {
//             freq[s[right] - 'A']++;
//             maxFreq = max(maxFreq, freq[s[right] - 'A']);

//             int required = (right - left + 1) - maxFreq;
//             if (required > k) {
//                 freq[s[left] - 'A']--;
//                 left++;
//             }
            
//             bestLen = max(bestLen, right - left + 1);
//             right++;
//         }
//         return bestLen;
//     }
// };

//3.BETTER SOLUTION - TC-O(2N*26) SC-O(26)

// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int n = s.size();
//         int bestLen = 0;
//         int left = 0, right = 0;
//         vector<int> freq(26, 0);
//         int maxFreq = 0;

//         while (right < n) {
//             freq[s[right] - 'A']++;
//             maxFreq = max(maxFreq, freq[s[right] - 'A']);

//             int required = (right - left + 1) - maxFreq;
//             while(required > k) {
//                 freq[s[left] - 'A']--;
//                 left++;
//                 for(auto &x : freq) maxFreq = max(maxFreq,x);
//                 required = (right - left + 1) - maxFreq;
//             }
        
//             bestLen = max(bestLen, right - left + 1);
//             right++;
//         }
//         return bestLen;
//     }
// };


