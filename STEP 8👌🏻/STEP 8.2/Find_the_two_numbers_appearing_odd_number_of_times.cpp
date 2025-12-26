//1.BRUTE SOLUTION - TC-O(NLOGM + M) SC-O(M) M=N/2+1

// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         unordered_map<int,int>mpp;
//         vector<int>v;
//         for(auto &x : nums) mpp[x]++;
//         for(auto &[dx,dy] : mpp){
//             if(dy==1) v.push_back(dx);
//         }
//         return v;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(2N) SC-O(1)

// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         long long xp = 0; 
//         for (auto &x : nums) xp ^= x;

//         long long bucket1 = 0, bucket2 = 0;
//         long long chk = xp & (-xp);

//         for (auto &x : nums) {
//             if ((x & chk) != 0) bucket1 ^= x;
//             else bucket2 ^= x;
//         }

//         return {(int)bucket1, (int)bucket2};
//     }
// };


