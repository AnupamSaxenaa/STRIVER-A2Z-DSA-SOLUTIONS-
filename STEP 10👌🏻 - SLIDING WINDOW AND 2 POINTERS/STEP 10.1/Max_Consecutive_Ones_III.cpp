//1.BETTER SOLUTION - TC-O(2*N) SC-O(1)

    // class Solution {
    // public:
    //     int longestOnes(vector<int>& nums, int k) {
    //         int l = 0 , r = 0, n = nums.size(),z = 0 , maxx = 0;
    //         while(r<n){
    //             if(nums[r]==1)
    //                 maxx = max(maxx,r-l+1);
    //             else {
    //                 z++;
    //                 if(z>k){
    //                     while(l<=r && z>k){
    //                         if(nums[l]==0) 
    //                             z--;
    //                         l++;
    //                     }
    //                 }else maxx = max(maxx,r-l+1);
    //             }
    //             r++;
    //         }

    //         return maxx;
    //     }
    // };

//2.BRUTE SOLUTION -  TC-O(N^2) SC-O(1)

//GENERATE ALL THE SUBARRAYS WITH ATMOST K ZEROS AND UPDATE MAXX ACCORDINGLY//

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

//"REMOVING EXTRA N TC IN BETTER SOLUTION!!"//

// class Solution
// {
//     public:
//         int longestOnes(vector<int> &nums, int k)
//         {
//             int l = 0, r = 0, n = nums.size(), z = 0, maxx = 0;
//             while (r < n)
//             {
//                 if (nums[r] == 0) z++;

//                 if (z > k)
//                 {
//                     if (nums[l] == 0)
//                     {
//                         z--;
//                     }
//                     l++;
//                 }
//                 if (z <= k)
//                 {
//                     maxx = max(maxx, r - l + 1);
//                 }

//                 r++;
//             }
//             return maxx;
//         }
// };
