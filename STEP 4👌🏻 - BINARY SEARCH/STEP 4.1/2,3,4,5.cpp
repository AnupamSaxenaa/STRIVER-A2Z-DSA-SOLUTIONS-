
//LOWER BOUND IMPLEMENTATION - 
//1.BRUTE SOLUTION - TC-O(N) SC-(1)

// int lowerBound(vector<int> arr, int n, int x) {
// 	// Write your code here
// 	int ans = n;
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(arr[i]>=x)
// 		{
// 			ans = i;
// 			break;
// 		}
// 	}
// 	return ans;
// }

//2.

//OPTIMAL SOLUTION 1 - USING BINARY SEARCH TC-O(LOGN) SC-O(1)

// int lowerBound(vector<int> arr, int n, int x) {
// 	// Write your code here
// 	int low = 0;
// 	int high = n-1;
// 	int ans = n;
	

// 	while(low<=high)
// 	{
// 		int mid = low+(high-low)/2;
// 		if(arr[mid]>=x)
// 		{
// 			ans = min(ans,mid);
// 			high = mid-1;
// 		}

// 		else if(arr[mid]<x) low = mid+1;	
// 	}
// 	return ans;
// }

//OPTIMAL SOLUTION 2 - ONLY FOR C++ USER HAVING STL LIB

// int lowerBound(vector<int> arr, int n, int x) {
// 	// Write your code here
// 	auto it = lower_bound(arr.begin(),arr.end(),x);
// 	if(it==arr.end()) return n;
// 	return it-arr.begin();
// }


//UPPER BOUND IMPLEMENTATION - 
//1.BRUTE SOLUTION - TC-O(N) SC-O(1)

// int upperBound(vector<int> &arr, int x, int n){
// 	// Write your code here.
// 	int ans = n;
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(arr[i]>x)
// 		{
// 			ans = i;
// 			break;
// 		}
// 	}
// 	return ans;
// }

//2.

//OPTIMAL SOLUTION 1 - USING BINARY SEARCH TC-O(LOGN) SC-O(1)

// int upperBound(vector<int> &arr, int x, int n){
// 	int low = 0;
// 	int high = n-1;
// 	int ans = n;
	
// 	while(low<=high)
// 	{
// 		int mid = low+(high-low)/2;
// 		if(arr[mid]>x)
// 		{
// 			ans = min(ans,mid);
// 			high = mid-1;
// 		}
// 		else if(arr[mid]<=x) low = mid+1;	
// 	}
// 	return ans;
// }	

//OPTIMAL SOLUTION 2 - ONLY FOR C++ USER HAVING STL LIB

// int upperBound(vector<int> &arr, int x, int n){
// 	auto it = upper_bound(arr.begin(),arr.end(),x);
// 	if(it==arr.end()) return n;
// 	return it-arr.begin();
// }

//SEARCH INSERT POSITION IMPLEMENTATION - {basically lower bound ke bare ma pucha jara haiiii aur kuch nahi haiiiii}
//1.APPROACH 1 - TC-O(LOGN) SC-O(1)

// class Solution {
//     public:
//         int searchInsert(vector<int>& nums, int target) {
//             int n = nums.size();
//             int low = 0;
//             int high = n-1;
//             int ans = 0 ;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]>target) high = mid-1;
//                 else if(nums[mid]<target) low = mid+1;
//             }
    
//             return low;
    
//         }
//     };

//2.APPROACH 2 - USING STL LIB

// int searchInsert(vector<int>& arr, int m)
// {
// 	// Write your code here.
// 	auto it = lower_bound(arr.begin(),arr.end(),m);
// 	return it-arr.begin();
// }

//3.APPROACH 3 - lower bound optimal code

// int searchInsert(vector<int>& arr, int m)
// {
// 	int n = arr.size();

// 	int low = 0;
// 	int high = n-1;
// 	int ans = n;
	

// 	while(low<=high)
// 	{
// 		int mid = low+(high-low)/2;
// 		if(arr[mid]>=m)
// 		{
// 			ans = min(ans,mid);
// 			high = mid-1;
// 		}

// 		else if(arr[mid]<m) low = mid+1;	
// 	}
// 	return ans;

// }

//many more ways


//FLOOR/CEIL IN SORTED ARRAY IMPLEMENTATION - 

//1.BRUTE SOLUTION - TC-O(2N) SC-O(1)

// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
// 	// Write your code here.
// 	int floor = -1;
// 	int ceil = -1;
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(a[i]<=x) floor = a[i];
// 		else if(a[i]>x) break; 
// 	}

// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(a[i]>=x)
// 		{
// 			ceil = a[i];
// 			break;
// 		} 
		
// 	}

// 	return {floor,ceil};
// }

//2.OPTIMAL SOLUTION - TC-O(2LOGN) SC-O(1)

// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
// 	// Write your code here
// 	int low = 0;
// 	int high = n-1;
// 	int floor = -1;

// 	while(low<=high)
// 	{
// 		int mid = (low)+(high-low)/2;
// 		if(a[mid]==x) return {x,x};
// 		else if(a[mid]<x)
// 		{
// 			floor = a[mid];
// 			low = mid+1;
// 		} 
// 		else if(a[mid]>x) high = mid-1;
// 	}

// 	low = 0;
// 	high = n-1;
// 	int ceil = -1;

// 	while(low<=high)
// 	{
// 		int mid = (low)+(high-low)/2;
// 		if(a[mid]==x) return {x,x};
// 		else if(a[mid]>x) 
// 		{
// 			ceil = a[mid];
// 			high = mid-1;
// 		}
// 		else if(a[mid]<x) low = mid+1;
// 	}
// 	return {floor,ceil};
// }