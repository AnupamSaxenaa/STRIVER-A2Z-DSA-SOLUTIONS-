//1.RECURSION - TC-O(2^N) SC-O(N+1) 1 HORIZONTAL LINE 1 COMPLEXITY

// void calcPls(vector<int>arr,vector<int>&ds,int n,int &ways,int k,int idx)
// {
// 	if(idx>=arr.size()){
// 		if(k==0) ways++;
// 		return;
// 	}
	
// 	ds.push_back(arr[idx]);
// 	calcPls(arr,ds,n,ways,k-arr[idx],idx+1);
// 	ds.pop_back();
// 	calcPls(arr,ds,n,ways,k,idx+1);
// }

// int findWays(vector<int>& arr, int k)
// {
// 	// Write your code here.
// 	int ways = 0;
// 	vector<int>ds;
// 	calcPls(arr,ds,arr.size(),ways,k,0);
// 	return ways;
// }
