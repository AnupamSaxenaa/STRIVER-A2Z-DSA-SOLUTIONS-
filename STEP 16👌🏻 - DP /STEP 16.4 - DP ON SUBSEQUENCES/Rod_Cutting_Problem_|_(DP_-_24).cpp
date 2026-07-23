//1.RECURSION - TC-O(2^SOMETHING) SC-O(N)
// int calcpls(vector<int> &price, int n,int idx)
// {
// 	//base condition
// 	if(idx==price.size()) return 0;
// 	//work
// 	int take = 0;
// 	if(n-(idx+1)>=0) take = price[idx]+calcpls(price,n-(idx+1),idx);
// 	int untake = calcpls(price,n,idx+1);
// 	return max(take,untake);
// }
// int cutRod(vector<int> &price, int n)
// {
// 	// Write your code here.
// 	return calcpls(price,n,0);
// }

//2.MEMOIZATION - TC-O(N*PRICE.SIZE()) SC-O(N*PRICE.SIZE()+N)
// int calcpls(vector<int> &price, int n,int idx,vector<vector<int>>&dp)
// {
// 	//base condition
// 	if(idx==price.size()) return 0;
// 	if(dp[idx][n]!=-1) return dp[idx][n];
// 	//work
// 	int take = 0;
// 	if(n-(idx+1)>=0) take = price[idx]+calcpls(price,n-(idx+1),idx,dp);
// 	int untake = calcpls(price,n,idx+1,dp);
// 	return dp[idx][n] = max(take,untake);
// }
// int cutRod(vector<int> &price, int n)
// {
// 	vector<vector<int>>dp(price.size()+1,vector<int>(n+1,-1));
// 	// Write your code here.
// 	calcpls(price,n,0,dp);
// 	return dp[0][n];
// }

//3.TABULATION - 
//NO SPACE OPTIMIZATION - TC-O(N*PRICE.SIZE()) SC-O(N*PRICE.SIZE())
// #include<bits/stdc++.h>
// int cutRod(vector<int> &price, int n)
// {
// 	vector<vector<int>>dp(price.size()+1,vector<int>(n+1,0));
// 	// Write your code here.
// 	for(int idx = price.size()-1; idx>=0;idx--)
// 	{
// 		for(int nn = 0 ; nn<=n;nn++)
// 		{
// 			int take = 0;
// 			if(nn-(idx+1)>=0) take = price[idx]+dp[idx][nn-(idx+1)];
// 			int untake = dp[idx+1][nn];
// 			dp[idx][nn] = max(take,untake);
// 		}
// 	}
// 	return dp[0][n];
// }

//MAX SPACE OPTIMIZATION - TC-O(N*PRICE.SIZE()) SC-O(N)
// #include<bits/stdc++.h>
// int cutRod(vector<int> &price, int n)
// {
// 	vector<int>dp(n+1,0);
// 	// Write your code here.
// 	for(int idx = price.size()-1; idx>=0;idx--)
// 	{
// 		for(int nn = 0 ; nn<=n;nn++)
// 		{
// 			int take = 0;
// 			if(nn-(idx+1)>=0) take = price[idx]+dp[nn-(idx+1)];
// 			int untake = dp[nn];
// 			dp[nn] = max(take,untake);
// 		}
// 	}
// 	return dp[n];
// }
