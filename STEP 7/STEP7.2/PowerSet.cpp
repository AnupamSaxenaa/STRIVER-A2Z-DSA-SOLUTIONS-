//1.USING RECURSION - TC-O(2^N*N)

//SC - O(N*2^N)

// class Solution {
// public:

//     void calcPls(vector<vector<int>> &ans,vector<int>&nums,int idx,int n,vector<int>v){
//         if(idx>=n){
//             ans.push_back(v);
//             return;
//         }
//         v.push_back(nums[idx]);
//         calcPls(ans,nums,idx+1,n,v);
//         v.pop_back();
//         calcPls(ans,nums,idx+1,n,v);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>v;
//         int n = nums.size();
//         calcPls(ans,nums,0,n,v);
//         return ans;
//     }
// };