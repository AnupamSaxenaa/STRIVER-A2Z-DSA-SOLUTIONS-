//1.ITERTIVE BS - TC-O(LOG base 2 N)

// int search(vector<int> &nums, int target) {
//     // Write your code here.
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int low = 0;
//     int high = n-1;
//     int ans = -1;
//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(nums[mid]==target) 
//         {
//             ans = mid;
//             break;
//         }    
//         if(nums[mid]>target)
//         {
//             high = mid-1;
//         } 
//         if(nums[mid]<target)
//         {
//             low = mid+1;
//         }
//     }
//     return ans;
// }

//2.RECURSIVE BS - TC-O(LOG base 2 N)

// class Solution {
//     private:
//         int binarysearch(vector<int>& nums,int target,int low,int high)
//         {
//             if(low>high) return -1;
//             int mid = (low+high)/2;
//             int ans = 0;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]>target) ans = binarysearch(nums,target,low,mid-1);
//             else if(nums[mid]<target) ans = binarysearch(nums,target,mid+1,high);
//             return ans;
//         }
//     public:
//         int search(vector<int>& nums, int target) {
//             int n = nums.size();
//             sort(nums.begin(),nums.end());
//             return binarysearch(nums,target,0,n-1);
//         }
//     };