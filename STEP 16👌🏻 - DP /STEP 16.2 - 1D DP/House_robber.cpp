// TRY ALL POSS WAY LIKE CLASSICAL RECURSION , DP MEMOIZATION .. ETC SAME AS Maximum sum of non adjacent elements
//MOST OPTIMAL WAY DP TABULATION - TC-O(2N) SC-O(1)
// class Solution {
// public:
//     int calcpls(vector<int>& nums,int l , int r)
//     {
//         int last = 0 , f = 0 , curr = 0;
//         for(int i = r ; i>=l ; i--)
//         {
//             curr = max(nums[i]+last,f);
//             last = f;
//             f = curr;
//         }
//         return curr;
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1) return nums[0];
//         return max(calcpls(nums,0,n-2),calcpls(nums,1,n-1));
//     }
// };