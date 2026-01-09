//1.RECURSION - TC-O(2^N) SC-O(N+1) 1 HORIZONTAL LINE 1 COMPLEXITY

// class Solution{
//     public:

//     bool calcpls(vector<int> &nums,int k ,int n ,int idx)
//     {
//         if(idx==nums.size()){
//             if(k==0) return true;
//             return false;
//         }
        
//         return calcpls(nums,k-nums[idx],n,idx+1) || calcpls(nums,k,n,idx+1);
        
//     }

//     bool checkSubsequenceSum(vector<int>& nums, int k) {
//          //your code goes here
//          return calcpls(nums,k,nums.size(),0);
//     }
// };