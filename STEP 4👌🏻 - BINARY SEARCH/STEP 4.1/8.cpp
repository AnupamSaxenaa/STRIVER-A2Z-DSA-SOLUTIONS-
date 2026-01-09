//1.BRUTE SOLUTION - TC-O(N) SC-O(1)

// int search(vector<int>& arr, int n, int k)
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
//     for(int i = 0 ; i < n ; i++)
//     {
//         if(arr[i]==k) return i;
//     }
//     return -1;
// }

// 2.OPTIMAL SOLUTION - TC-O(LOGN) SC-O(1)

// class Solution {
//     public:
//         int search(vector<int>& nums, int target) {
//             int n = nums.size();
//             int low = 0;
//             int high = n-1;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 if(nums[mid]==target) return mid;
//                 //left sorted
//                 else if(nums[mid]>=nums[low])
//                 {
//                     if(nums[mid]>=target && nums[low]<=target)
//                     {
//                         high = mid-1;
//                     }
//                     else low = mid+1;
//                 }
//                 //right sorted
//                 else
//                 {
//                     if(nums[mid]<=target && nums[high]>=target) low = mid+1;
//                     else high = mid-1;
//                 }
//             }
//             return -1;
//         }
//     };
