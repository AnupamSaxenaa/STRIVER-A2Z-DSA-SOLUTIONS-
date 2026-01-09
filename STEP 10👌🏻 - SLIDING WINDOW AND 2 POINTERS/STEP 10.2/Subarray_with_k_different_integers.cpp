//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

//GENERATE ALL SUBARRAYS??

//2.OPTIMAL SOLUTION - TC-O(2*N*(TC OF MAP)) SC-O(N)

// class Solution {
// public:

//     int docalc(const vector<int>& nums, int k){
//         if(k<=0) return 0;
//         int n = nums.size(), l = 0, r = 0;
//         long long cnt = 0;
//         unordered_map<int, int> mp;
//         while (r < n) {
//             mp[nums[r]]++;

//             while (l <= r && mp.size() > k) {
//                 mp[nums[l]]--;
//                 if (mp[nums[l]] == 0)
//                     mp.erase(nums[l]);
//                 l++;
//             }

//             cnt += r-l+1;
//             r++;
//         }

//         return cnt;
//     }

//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         return (docalc(nums,k)-docalc(nums,k-1));
//     }
// };
