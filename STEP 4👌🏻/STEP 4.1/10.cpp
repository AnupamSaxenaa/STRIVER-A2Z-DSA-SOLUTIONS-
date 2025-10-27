//1.BRUTE SOLUTION - TC-O(N) SC-O(1)

// #include<bits/stdc++.h>
// int findMin(vector<int>& arr)
// {
// 	// Write your code here.
// 	int ans = INT_MAX;
// 	int n = arr.size();
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		ans = min(ans,arr[i]);
// 	}
// 	return ans;

// }

//2.BETTER SOLUTION - TC-O(NLOGN) SC-O(1)

// #include<bits/stdc++.h>
// int findMin(vector<int>& arr)
// {
// 	// Write your code here.
// 	sort(arr.begin(),arr.end());
// 	return arr[0];

// }

//3.OPTIMAL SOLUTION - TC-O(LOGN) SC-O(1)

// class Solution {
//     public:
//         int findMin(vector<int>& nums) {
//             int ans = INT_MAX;
//             int n = nums.size();
//             int low = 0;
//             int high = n-1;  
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//             //if arr is already sorted
//                 if(nums[low]<=nums[high])
//                 {
//                     ans = min(ans,nums[low]);
//                     break;
//                 }   
//             //left sorted
//                 if(nums[mid]>=nums[low])
//                 {
//                     ans = min(ans,nums[low]);
//                     low = mid+1;
//                 }
//             //right sorted    
//                 else
//                 {
//                     ans = min(ans,nums[mid]);
//                     high = mid-1;
//                 }
//             }
//             return ans;
//         }
//     };