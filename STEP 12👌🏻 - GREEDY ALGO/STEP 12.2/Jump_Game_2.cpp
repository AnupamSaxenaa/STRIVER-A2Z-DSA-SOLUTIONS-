//1.BRUTE SOLUTION - TC-O(N^N) SC-O(N). //RECURSIVE SOLUTION//

// class Solution
// {
//     public:

//         void calcpls(vector<int> &nums, int start, int jumps, int &ans)
//         {
//             if (jumps >= ans) return;
//             if (start >= (nums.size() - 1))
//             {
//                 ans = min(ans, jumps);
//                 return;
//             };
//             for (int i = start + 1; i < nums.size() && i <= start + nums[start] ; i++)
//             {
//                 calcpls(nums, i, jumps + 1, ans);
//             }
//             return;
//         }

//     int jump(vector<int> &nums)
//     {
//         int ans = INT_MAX;
//         calcpls(nums, 0, 0, ans);
//         return ans;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int n = nums.size(), jumps = 0, l = 0 , r = 0;
//         while(r<(n-1)){
//             int maxj = 0;
//             for(int i = l ; i<=r ; i++){
//                 maxj = max(maxj,i+nums[i]);
//             }
//             l = r+1;
//             r = maxj;
//             jumps++;
//         }
//         return jumps;

//     }
// };

