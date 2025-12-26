//solution 1 - recursively done!
//solution 2 - TC-O(N2^N) SC-O(N2^N) approx

// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int n = nums.size();
//         long long t = (1<<nums.size()) , it = 0;
//         vector<vector<int>>v;
//         while(it<t){
//             vector<int>temp;
//             int chk = 1;
//             for(int i = n-1 ; i >= 0; i--){
//                 if((it&chk)!=0) temp.push_back(nums[i]);
//                 chk = chk<<1;
//             }
//             v.push_back(temp);
//             it++;
//         }

//         return v;
//     }
// };