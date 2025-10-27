//MERGING TWO SORTED ARRAYS WITH THE HELP OF EXTRA SPACE

// TC-2*O(N+M) SC-O(N+M)

// #include<vector>

// void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
// 	// Write your code here.
// 	int n = a.size();
// 	int m = b.size();
// 	int left1 = 0;
// 	int left2 = 0;
// 	vector<int>temp(n+m);
// 	while(left1<n && left2<m)
// 	{
// 		if(a[left1]<b[left2])
// 		{
// 			temp.push_back(a[left1++]);
// 		}
// 		else if(a[left1]>b[left2])
// 		{
// 			temp.push_back(b[left2++]);
// 		}
// 	}
// 	while(left1<n)
// 	{
// 		temp.push_back(a[left1++]);
// 	}

// 	while(left2<m)
// 	{
// 		temp.push_back(b[left2++]);
// 	}

// 	for(int i = 0 ; i < temp.size() ; i++)
// 	{
// 		if(i>=n) b[i-n]==temp[i];
// 		else a[i]==temp[i];
// 	}
	
// }

//MERGING TWO SORTED ARRAYS WITHOUT EXTRA SPACE 

//OPTIMAL SOLUTION 1 - TC-O(MIN(N,M)+NLOGN+MLOGM)  SC-O(1)

// #include<vector>

// void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
// 	// Write your code here.
// 	int left1 = a.size()-1;
// 	int left2 = 0;
	
// 	while(left1>=0 && left2<b.size())
// 	{
// 		if(a[left1]>b[left2])  swap(a[left1],b[left2]);
// 		left1--;
// 		left2++;
// 	}
// 	sort(a.begin(),a.end());
// 	sort(b.begin(),b.end());
	
// }

//OPTIMAL SOLUTION 2 - {GAP METHOD} TC-O((LOG(BASE 2)(N+M))*(N+M)) SC-O(1)

// #include<vector>

// void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
// 	// Write your code here.
// 	int n = a.size();
// 	int m = b.size();
// 	int sum = n+m;
// 	int gap = (sum+1)/2;

// 	while(gap>0)
// 	{
// 		int left = 0;
// 		int right = left+gap;

// 		while(right<sum)
// 		{
// 			if(left<n && right<n)
// 			{
// 				if(a[left]>a[right]) swap(a[left],a[right]);
// 			}

// 			else if(left>=n)
// 			{
// 				if(b[left-n]>b[right-n]) swap(b[left-n],b[right-n]);
// 			}

// 			else if(left<n && right>=n)
// 			{
// 				if(a[left]>b[right-n]) swap(a[left],b[right-n]);
// 			}
// 			left++;
// 			right++;
// 		}

// 		if(gap==1) break;
// 		gap = (gap+1)/2;
// 	}
// }


