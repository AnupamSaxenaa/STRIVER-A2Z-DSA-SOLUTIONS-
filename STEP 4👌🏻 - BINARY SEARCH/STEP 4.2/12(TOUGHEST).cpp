//1.BRUTE SOLUTION - TC-O(K*N+N) SC-O(1)

// #include<bits/stdc++.h>
// double minimiseMaxDistance(vector<int> &arr, int k){
// 	// Write your code here.
// 	int n = arr.size();
// 	vector<int>check(n-1,0);

// 	for(int i = 0 ; i < k ; i++)
// 	{
// 		int itsidx = -1;
// 		long double maxsection = -1;
// 		for(int j = 0 ; j < n-1 ; j++)
// 		{
// 			long double diff = arr[j+1]-arr[j];
// 			long double persection = diff/((long double)(check[j]+1));
// 			if(persection>maxsection)
// 			{
// 				itsidx = j;
// 				maxsection = persection;
// 			}
// 		}
// 		check[itsidx]++;
// 	}

// 	long double ans = -1;

// 	for(int i = 0 ; i < n-1 ; i++)
// 	{
// 		long double diff = arr[i+1]-arr[i];
// 		long double persection = diff/((long double)(check[i]+1));
// 		ans = max(persection,ans);
// 	}
// 	return ans;

// }

//2.BETTER SOLUTION - TC-O(NLOGN + KLOGN) SC-O(N)

// #include<bits/stdc++.h>
// double minimiseMaxDistance(vector<int> &arr, int k){
// 	// Write your code here.
// 	int n = arr.size();
// 	vector<int>check(n-1,0);
// 	priority_queue<pair<long double,int>>pq;
// 	for(int i = 0 ; i < n-1 ; i++)
// 	{
// 		long double diff = arr[i+1]-arr[i];
// 		int sectionidx = i;
// 		pq.push( {diff,sectionidx});
// 	}

// 	for(int i = 0 ; i < k ; i++)
// 	{
// 		int idx = pq.top().second;
// 		check[idx]++;
// 		long double prelength = arr[idx+1]-arr[idx];
// 		long double tobedividedwith = (check[idx] + 1);
// 		pq.pop();
// 		long double sectionsnow = prelength/(long double)tobedividedwith;
// 		pq.push({sectionsnow,idx});
// 	}

// 	return pq.top().first;

// }

//3.OPTIMAL SOLUTION - TC-O(N+NLOG(RANGE/DIFF)) SC-O(1)

// #include<bits/stdc++.h>

// bool chkfunc(vector<int>&v,int k ,long double mid)
// {
// 	int cnt = 0;
// 	for(int i = 0 ; i < v.size()-1 ; i++)
// 	{
// 		int howmany = (v[i+1]-v[i])/mid;
// 		if((v[i+1]-v[i])==howmany*mid) howmany--;
// 		cnt+=howmany; 
// 	}
// 	if(cnt>k) return false;
// 	return true;
// }

// double minimiseMaxDistance(vector<int> &arr, int k){
// 	// Write your code here.	
// 	int n = arr.size();
// 	long double low = 0;
// 	long double high = -1;

// 	for(int i = 0 ; i < n-1 ; i++)
// 	{
// 		high = max(high,(long double)(arr[i+1]-arr[i]));
// 	}
// 	long double diff = 1e-6;
// 	while((high-low)>diff)
// 	{
// 		long double mid = (low+high)/2.0;
// 		if(chkfunc(arr,k,mid)==true) high = mid;
// 		else low = mid;
// 	}
// 	return high;

// }

