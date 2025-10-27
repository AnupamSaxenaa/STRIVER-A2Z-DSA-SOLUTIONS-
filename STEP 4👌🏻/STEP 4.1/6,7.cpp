//Find First and Last Position of Element in Sorted Array

//1.BETTER SOLUTION - TC-O(N) SC-O(1)

// class Solution {
//     public:
//         vector<int> searchRange(vector<int>& nums, int target) {
//             int first = -1;
//             int last = -1;
//             for(int i = 0 ; i < nums.size() ; i++)
//             {
//                 if(nums[i]==target) last = i;
    
//                 if(first!=-1) continue;
//                 else if(nums[i]==target && first==-1) first = i;
//             }
//             return {first,last};
//         }
//     };

//2.OPTIMAL SOLUTION - TC-O(2*LOGN) SC-O(1)

// #include<bits/stdc++.h>
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     int last = -1;
//     int first = -1;

//     auto it1 = lower_bound(arr.begin(),arr.end(),k);
//     if(it1==arr.end() || *it1!=k) return {-1,-1};
//     else first = it1-arr.begin(); 

//     auto it2 = upper_bound(arr.begin(),arr.end(),k);
//     if(it2==arr.end()) last = n-1;
//     else last = it2-arr.begin()-1;

//     return {first,last};
// }

//OPTIMAL SOLUTION 2 - IF INTERVIEWER NOT SATISFIED WITH THE UPPER AND LOWER BOUND CONCEPT YOU NEED TO IMPLEMENT THE BINARY SEARCH TC-O(2LOGN) SC-O(1)

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code here
//     int first = -1;
//     int last = -1;

//     //FOR FIRST 
//     int low = 0;
//     int high = n-1;

//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         if(arr[mid]==k)
//         {
//             first = mid;
//             high = mid-1;
//         }
//         else if(arr[mid]>k) high=mid-1;
//         else low = mid+1;                                                                                                                                              
//     }
//     if(first==-1) return {-1,-1};
//     //FOR LAST
//     low = 0;
//     high = n-1;

//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         if(arr[mid]==k) 
//         {
//             last = mid;
//             low = mid+1;
//         }
//         else if(arr[mid]>k) high = mid-1;
//         else low = mid+1;
//     }

//     return {first,last};
// }   

//Count occurrences of a number in a sorted array with duplicates

// int count(vector<int>& arr, int n, int x) {
// 	// Write Your Code Here
//     int first = -1;
//     int last = -1;

//     //FOR FIRST 
//     int low = 0;
//     int high = n-1;

//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         if(arr[mid]==x)
//         {
//             first = mid;
//             high = mid-1;
//         }
//         else if(arr[mid]>x) high=mid-1;
//         else low = mid+1;                                                                                                                                              
//     }
//     if(first==-1) return 0;
//     //FOR LAST
//     low = 0;
//     high = n-1;

//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         if(arr[mid]==x) 
//         {
//             last = mid;
//             low = mid+1;
//         }
//         else if(arr[mid]>x) high = mid-1;
//         else low = mid+1;
//     }
// 	return last-first+1;





