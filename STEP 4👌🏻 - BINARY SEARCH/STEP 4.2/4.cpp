//1.BRUTE SOLUTION - TC-((MAX OF ARR -min of arr+1)*n) sc-o(1)

// #include<bits/stdc++.h>
// int checkpossibility(vector<int>arr,int k,int m,int mid)
// {
// 	int n = arr.size();
// 	int cnt = 0;
// 	int bouquet = 0;
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(arr[i]<=mid)
// 		{
// 			cnt++;
// 			if(cnt==k)
// 			{
// 				bouquet++;
// 				cnt=0;
// 			}
			
// 		}
// 		else cnt=0;
// 	}
// 	if(bouquet>=m) return 1;
// 	return 0;
// }

// int roseGarden(vector<int> arr, int k, int m)
// {
// 	// Write your code here
// 	int n = arr.size();
// 	if((long long)k*m>n) return -1;

// 	for(int i = 1 ; i <= *max_element(arr.begin(),arr.end()) ; i++)
// 	{
// 		int ans = checkpossibility(arr,k,m,i);
// 		if(ans==1) return i;
// 	}

// }


//2.OPTIMAL SOLUTION - TC-O((LOG BASE 2 (MAX OF ARR-min of arr+1)*N) SC-(1)

// #include<bits/stdc++.h>
// int checkpossibility(vector<int>arr,int k,int m,int mid)
// {
// 	int n = arr.size();
// 	int cnt = 0;
// 	int bouquet = 0;
// 	for(int i = 0 ; i < n ; i++)
// 	{
// 		if(arr[i]<=mid)
// 		{
// 			cnt++;
// 			if(cnt==k)
// 			{
// 				bouquet++;
// 				cnt=0;
// 			}
			
// 		}
// 		else cnt=0;
// 	}
// 	if(bouquet>=m) return 1;
// 	return 0;
// }

// int roseGarden(vector<int> arr, int k, int m)
// {
// 	// Write your code here
// 	int n = arr.size();
// 	if((long long)k*m>n) return -1;

// 	int low = *min_element(arr.begin(),arr.end());
// 	int high = *max_element(arr.begin(),arr.end());

// 	while(low<=high)
// 	{
// 		int mid = low+(high-low)/2;
// 		int check = checkpossibility(arr,k,m,mid);
// 		if(check==1) high = mid-1;
// 		else low = mid+1;
// 	}

// 	return low;

// }