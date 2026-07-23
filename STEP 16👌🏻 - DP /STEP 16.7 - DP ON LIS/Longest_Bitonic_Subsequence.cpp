//1.RECURSION - TC-O(2^N) SC-O(N)
// #include<bits/stdc++.h>
// int calcpls(vector<int>& arr,int idx,int previdx,int tog)
// {
// 	//base
// 	if(idx==arr.size()) return 0;
// 	//work
// 	int untake = calcpls(arr,idx+1,previdx,tog);
// 	int take = 0;
// 	if(previdx==-1 || (arr[idx]>arr[previdx] && tog==0)){
// 		take = 1+calcpls(arr,idx+1,idx,tog);
// 	}else if(arr[idx]<arr[previdx]){
// 		take = 1+calcpls(arr,idx+1,idx,1);
// 	}
// 	return max(take,untake);
// }
// int longestBitonicSubsequence(vector<int>& arr, int n)
// {
// 	// Write your code here.
// 	return calcpls(arr,0,-1,0);
// }

//2.MEMOIZATION - TC-O((N+1)(N+1)2) SC-O((N+2)(N+1)2 + N)
// #include<bits/stdc++.h>
// int calcpls(vector<int>& arr,int idx,int previdx,int tog,vector<vector<vector<int>>>& dp)
// {
// 	//base
// 	if(idx>arr.size()) return 0;
// 	if(dp[idx][previdx][tog]!=-1) return dp[idx][previdx][tog];
// 	//work
// 	int untake = calcpls(arr,idx+1,previdx,tog,dp);
// 	int take = 0;
// 	if(previdx==-1 || (arr[idx-1]>arr[previdx-1] && tog==0)){
// 		take = 1+calcpls(arr,idx+1,idx,tog,dp);
// 	}else if(arr[idx-1]<arr[previdx-1]){
// 		take = 1+calcpls(arr,idx+1,idx,1,dp);
// 	}
// 	return dp[idx][previdx][tog] = max(take,untake);
// }
// int longestBitonicSubsequence(vector<int>& arr, int n)
// {
// 	// Write your code here.
// 	vector<vector<vector<int>>>dp(n+2,vector<vector<int>>(n+1,vector<int>(2,-1)));
// 	return calcpls(arr,1,0,0,dp);
// }

//3.TABULATION - TC-O((N+1)(N+1)2) SC-O((N+2)(N+1)2)

//NO SPACE OPTIMIZATION - SC-O((N+2)(N+1)2)
// #include<bits/stdc++.h>
// int longestBitonicSubsequence(vector<int>& arr, int n)
// {
// 	// Write your code here.
// 	vector<vector<vector<int>>>dp(n+2,vector<vector<int>>(n+1,vector<int>(2,0)));
// 	for(int idx = n ; idx>=1 ; idx--)
// 	{
// 		for(int previdx = n ; previdx >= 0 ; previdx--)
// 		{
// 			for(int tog = 0 ; tog < 2 ; tog++)
// 			{
// 				int untake = dp[idx+1][previdx][tog];
// 				int take = 0;
// 				if(previdx==-1 || (arr[idx-1]>arr[previdx-1] && tog==0)){
// 					take = 1+dp[idx+1][idx][tog];
// 				}else if(arr[idx-1]<arr[previdx-1]){
// 					take = 1+dp[idx+1][idx][1];
// 				}
// 				dp[idx][previdx][tog] = max(take,untake);
// 			}
// 		}
// 	}
// 	return dp[1][0][0];
// }

//SPACE OPTIMIZATION - SC-O((N+1)2)
// #include<bits/stdc++.h>
// int longestBitonicSubsequence(vector<int>& arr, int n)
// {
// 	// Write your code here.
// 	vector<vector<int>>prev(n+1,vector<int>(2,0)),curr(n+1,vector<int>(2,0));
// 	for(int idx = n ; idx>=1 ; idx--)
// 	{
// 		for(int previdx = n ; previdx >= 0 ; previdx--)
// 		{
// 			for(int tog = 0 ; tog < 2 ; tog++)
// 			{
// 				int untake = prev[previdx][tog];
// 				int take = 0;
// 				if(previdx==-1 || (arr[idx-1]>arr[previdx-1] && tog==0)){
// 					take = 1+prev[idx][tog];
// 				}else if(arr[idx-1]<arr[previdx-1]){
// 					take = 1+prev[idx][1];
// 				}
// 				curr[previdx][tog] = max(take,untake);
// 			}
// 		}
// 		prev = curr;
// 	}
// 	return curr[0][0];
// }

//4.A DIFF METHOD - TC-O(N^2) SC-O(2N)
// #include<bits/stdc++.h>
// int longestBitonicSubsequence(vector<int>& arr, int n)
// {
// 	int maxi = 1;
// 	vector<int>dp1(n,1),dp2(n,1);
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		for(int j = 0 ; j < i ; j++)
// 		{
// 			//from front 
// 			if(arr[i]>arr[j] && dp1[i]<dp1[j]+1){
// 				dp1[i] = dp1[j]+1;
// 			}

// 			//from back
// 			if(arr[n-1-i]>arr[n-1-j] && dp2[n-1-i]<dp2[n-1-j]+1){
// 				dp2[n-1-i] = dp2[n-1-j]+1;
// 			}
// 		}
// 		if(i>=n/2){
// 			maxi = max(maxi,dp1[i]+dp2[i]-1);
// 			maxi = max(maxi,dp1[n-1-i]+dp2[n-1-i]-1);
// 		}
// 	}
// 	return maxi;
// }

