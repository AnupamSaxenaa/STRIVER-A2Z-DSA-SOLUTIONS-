//1.USE MAX OPTIMIZED SOLUTION OF THE LONGEST PALINDROMIC SUBSEQUENCE - 
// int longestPalindromeSubseq(string &s)
// {
// 	string text1 = s,text2 = s;
// 	reverse(text2.begin(),text2.end());
// 	int n = text1.size(), m = text2.size();
// 	vector<int> curr(m + 1, 0),prev(m+1,0);
// 	for (int idx1 = n-1; idx1 >=0 ; idx1--)
// 	{
// 		for (int idx2 = m-1; idx2 >= 0; idx2--)
// 		{
// 			if (text1[idx1] == text2[idx2])  curr[idx2] = 1 + prev[idx2 + 1];
// 			else curr[idx2] = max(curr[idx2 + 1], prev[idx2]);
// 		}
// 		prev = curr;
// 	}
// 	return curr[0];
// }

// int minimumInsertions(string &str)
// {

// 	int lpslen = longestPalindromeSubseq(str);
// 	return str.size()-lpslen;

// }
