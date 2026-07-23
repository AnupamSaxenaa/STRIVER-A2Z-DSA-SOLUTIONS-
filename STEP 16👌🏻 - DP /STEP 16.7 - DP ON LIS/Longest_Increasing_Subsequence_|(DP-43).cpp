//TC-O(NLOGN) SC-O(N)
// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>bucket;
//         for(int i = 0 ; i < n ; i++)
//         {
//             auto it = lower_bound(bucket.begin(),bucket.end(),nums[i]);
//             if(it==bucket.end()) bucket.push_back(nums[i]);
//             else{
//                 *it = nums[i];
//             }
//         }
//         return bucket.size();
//     }
// };