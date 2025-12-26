//1.BRUTE SOLUTION - TC-O(2N) SC-O(N)

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int>mpp;
//         for(auto &x : nums) mpp[x]++;
//         for(auto &[dx,dy] : mpp){
//             if(dy==1) return dx;
//         }
//         return 1;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int res = 0;
//         for(auto &x : nums)
//             res^=x;
//         return res;
//     }
// };