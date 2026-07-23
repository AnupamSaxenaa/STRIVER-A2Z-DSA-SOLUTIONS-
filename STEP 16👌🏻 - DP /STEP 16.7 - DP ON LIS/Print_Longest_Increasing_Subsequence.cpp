//1.USING SOLUTION 4 OF THE LIS - TC-O(N^2) SC-O(2*N)
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> printingLongestIncreasingSubsequence(vector<int> arr, int n) {
// 	// Write your code here
// 	vector<int>dp(n,1),h(n);
// 	int maxi = 1,lidx = 0;
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		h[i] = i;
// 		for(int j = 0 ; j < i ; j++)
// 		{
// 			if(arr[i]>arr[j] && dp[i]<(dp[j]+1)){
// 				dp[i] = max(dp[i],dp[j]+1);
// 				h[i] = j;
// 			}
// 		}
// 		if(maxi<dp[i]){
// 			maxi = dp[i];
// 			lidx = i;
// 		}
// 	}
// 	vector<int>ele;
// 	while(h[lidx]!=lidx)
// 	{
// 		ele.push_back(arr[lidx]);
// 		lidx = h[lidx];
// 	}
// 	ele.push_back(arr[lidx]);
// 	reverse(ele.begin(),ele.end());
// 	return ele;
// }