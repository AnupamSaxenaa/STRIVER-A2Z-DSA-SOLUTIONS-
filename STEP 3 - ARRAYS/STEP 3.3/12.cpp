//1.BETTER SOLUTION - TC-O(N^2) SC-O(1)

// #include<bits/stdc++.h>

// int subarrayWithMaxProduct(vector<int> &arr){
// 	// Write your code here.
// 	int maxi = INT_MIN;
// 	for(int i = 0 ; i < arr.size() ; i++)
// 	{
// 		int prod = 1;
// 		for(int j = i ; j < arr.size() ; j++)
// 		{
// 			prod*=arr[j];
// 			maxi = max(maxi,prod); 
// 		}
// 	}
// 	return maxi;
// }

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// #include<bits/stdc++.h>

// int subarrayWithMaxProduct(vector<int> &arr){
// 	// Write your code here.
// 	int ans = INT_MIN;
// 	int suf = 1;
// 	int pre = 1;
// 	int n = arr.size();

// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(suf==0) suf=1;
// 		if(pre==0) pre=1;

// 		pre*=arr[i];
// 		suf*=arr[n-i-1];
// 		ans = max(ans,max(pre,suf));
// 	}
// 	return ans;
// }