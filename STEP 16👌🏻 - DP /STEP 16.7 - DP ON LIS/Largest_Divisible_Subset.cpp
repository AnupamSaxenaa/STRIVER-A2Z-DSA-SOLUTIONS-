//1.RECURSION - TC-O(2^N) SC-O(2*N)
// vector<int>best;
// class Solution
// {
//     public:
//     void calcpls(vector<int> &nums, vector<int> &ans, int idx, int previdx)
//     {
//         //base
//         if(idx==nums.size()){
//             if(best.size()<ans.size()) best = ans;
//             return;
//         }
//         //work
//         if(previdx==-1 || nums[idx]%nums[previdx]==0){
//             ans.push_back(nums[idx]);
//             calcpls(nums,ans,idx+1,idx);
//             ans.pop_back();
//         }
//         calcpls(nums,ans,idx+1,previdx);
//     }
//     vector<int> largestDivisibleSubset(vector<int> &nums)
//     {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         vector<int>ans;
//         calcpls(nums, ans, 0, -1);
//         return best;
//     }
// };

//THIS QUESTION IS SIMILIAR TO LIS BUT HERE IT IS ASKED TO 
//GIVE THE SEQUENCE SO WE NEED TO USE PRINT LIS APPROACH OF LIS 
//TO FIND THE LDS SEQUENCE
//2.LIS PRINT SOLUTION FOR LDS - TC-O(N^2) SC-O(2*N)
// class Solution {
// public:
//     vector<int> largestDivisibleSubset(vector<int>& nums) {
//         int n = nums.size(),lidx = 0,maxi = 1;
//         vector<int>dp(n,1),h(n,0);
//         sort(nums.begin(),nums.end());
//         for(int i = 0 ; i < n ; i++)
//         {
//             h[i] = i;
//             for(int j = 0 ; j < i ; j++)
//             {
//                 if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1){
//                     h[i] = j;
//                     dp[i] = dp[j]+1;
//                 }
//             }
//             if(dp[i]>maxi){
//                 lidx = i;
//                 maxi = dp[i];
//             }
//         }
//         vector<int>ans;
//         while(h[lidx]!=lidx)
//         {
//             ans.push_back(nums[lidx]);
//             lidx = h[lidx];
//         }
//         ans.push_back(nums[lidx]);
//         return ans;
//     }
// };

