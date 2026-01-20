//1.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int n = nums.size() , maxj = 0;
//         for(int i = 0 ; i < n ; i++){
//             if(i>maxj) return false;
//             maxj = max(maxj,nums[i]+i);
//         }
//         return true;
//     }
// };