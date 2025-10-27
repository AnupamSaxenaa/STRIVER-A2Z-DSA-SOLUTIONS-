//1.BRUTE SOLUTUION -> TC-O(N^2) SC-O(1)(approx)

// vector<int> majorityElement(vector<int> v) {
// 	// Write your code here
// 	int n = v.size();
// 	int chk = n/3;

// 	vector<int>ans;
// 	set<int>anss;
// 	for(int i = 0 ; i < v.size() ; i++)
// 	{
// 		int counter = 0;
	
// 		for(int j = i ; j < v.size() ; j++)
// 		{	
// 			if(v[j]==v[i]) counter++;
// 		}
// 		if(counter>chk) 
// 		{
// 			anss.insert(v[i]);
// 		}	
		
// 	}	

// 	for(auto i : anss)
// 	{
// 		ans.push_back(i);
// 	}
// 	return ans;
// }

//2.BETTER SOLUTION -> TC-O(NLOG+N) SC-O(N)

// #include<bits/stdc++.h>
// vector<int> majorityElement(vector<int> v) {
// 	// Write your code here
// 	int n = v.size();
// 	int chk = n/3;
// 	map<int,int>mpp;
// 	vector<int>ans;

// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		mpp[v[i]]++;
// 	}

// 	for(auto x : mpp)
// 	{
// 		if(x.second>chk) ans.push_back(x.first); 
// 	}
// 	return ans;
// }

//3.OPTIMAL SOLUTION -> (EXTENDED MOORE'S VOTING METHOD)  TC-O(2N) SC-O(1)

// class Solution {
//     public:
//         vector<int> majorityElement(vector<int>& nums) {
//             int ele1 = INT_MIN;
//             int ele2 = INT_MIN;
//             int cnt1 = 0;
//             int cnt2 = 0;
//             int n = nums.size();
//             int chk = n/3;
//             vector<int>ans;
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 if(cnt1==0 && nums[i]!=ele2)
//                 {
//                     cnt1 = 1;
//                     ele1 = nums[i];
//                 }
    
//                 else if(cnt2==0 && nums[i]!=ele1)
//                 {
//                     cnt2 = 1;
//                     ele2 = nums[i];
//                 }
//                 else if(ele1==nums[i])
//                 {
//                     cnt1++;
//                 }
//                 else if(ele2==nums[i])
//                 {
//                     cnt2++;
//                 }
    
//                 else
//                 {
//                     cnt1--;
//                     cnt2--;
//                 }
//             }
//             cnt1 = 0;
//             cnt2 = 0;
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 if(ele1==nums[i]) cnt1++;
//                 if(ele2==nums[i]) cnt2++;
//             }
    
//             if(cnt1>chk) ans.push_back(ele1);
//             if(cnt2>chk) ans.push_back(ele2);
//             sort(ans.begin(),ans.end());
//             return ans;
    
//         }
//     };