//1.TABULATION - TC-O(N*M+N+M) SC-O(N*M+MIN(N,M))
// string findLCS(int n, int m,string &s1, string &s2){
// 	// Write your code here.
// 	vector<vector < int>> dp(n + 1, vector<int> (m + 1, 0));
// 	for (int idx1 = n-1; idx1 >= 0; idx1--)
// 	{
// 		for (int idx2 = m-1; idx2 >= 0; idx2--)
// 		{
// 			if (s1[idx1] == s2[idx2])  dp[idx1][idx2] = 1 + dp[idx1 + 1][idx2 + 1];
// 			else dp[idx1][idx2] = max(dp[idx1][idx2 + 1], dp[idx1 + 1][idx2]);
// 		}
// 	}	
// 	string s = "";
// 	int idx1 = 0 , idx2 = 0;
// 	while(idx1<n && idx2<m){
// 		if(s1[idx1]==s2[idx2]){
// 			s+=s1[idx1];
// 			idx1++;
// 			idx2++;
// 		}
// 		else if(s1[idx1]!=s2[idx2] && dp[idx1][idx2+1]<=dp[idx1+1][idx2])
// 			idx1++;
// 		else idx2++;
// 	}
// 	return s;
// }