//1.BRUTE SOLUTION - TC-O(N) SC-(1)

// int singleNonDuplicate(vector<int>& arr)
// {
// 	// Write your code here
// 	int n = arr.size();
// 	for(int i = 0 ; i < arr.size() ; i++)
// 	{
// 		if(i==0)
// 		{
// 			if(arr[i]!=arr[i+1]) return arr[i];
// 		}
// 		else if(i==n-1)
// 		{
// 			if(arr[i]!=arr[i-1]) return arr[i];
// 		}
// 		else
// 		{
// 			if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]) return arr[i];
// 		}
// 	}
// }

//2.OPTIMAL SOLUTION - TC-O(LOGN) SC-O(1)

// int singleNonDuplicate(vector<int>& arr)
// {
// 	// Write your code here
// 	int n = arr.size();

//APPLYING SOME SMART MOVES TO AVOID EDGE CASES LIKE IF I WERE ON INDEX 0 I THEN HAVE TO MAKE SURE THAT I DONT GO OUT OF BOUND

// 	if(n==1) return arr[0];
// 	if(arr[0]!=arr[1]) return arr[0];
// 	if(arr[n-1]!=arr[n-2]) return arr[n-1];
// 	int low = 1;
// 	int high = n-2;

// 	while(low<=high)
// 	{
// 		int mid = low+(high-low)/2;
// 		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) return arr[mid];
// 		//eliminating the left halve not containing the single ele
// 		if((mid%2!=0 && arr[mid]==arr[mid-1]) || mid%2==0 && arr[mid]==arr[mid+1]) low = mid+1;
// 		//eliminating the right halve not containing the single ele
// 		else high = mid-1;

// 	}
// }