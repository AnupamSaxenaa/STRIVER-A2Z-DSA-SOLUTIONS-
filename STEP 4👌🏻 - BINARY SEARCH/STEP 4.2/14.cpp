//1.BRUTE SOLUTION - TC-O(N+M) SC-O(N+M)

// int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
//     // Write your code here   
//     int left = 0;
//     int right = 0;  
//     vector<int>v;

//     while(left<=(n-1) && right<=(m-1))
//     {
//         if(arr1[left]>=arr2[right]) v.push_back(arr2[right++]);
//         else v.push_back(arr1[left++]);
//     }
//     while(left<=(n-1)) v.push_back(arr1[left++]);
//     while(right<=(m-1)) v.push_back(arr1[right++]);
//     return v[k-1];
    
// }

//2.BETTER SOLUTION - TC-O(N+M) SC-O(1)

// int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
//     // Write your code here   
//     int left = 0;
//     int right = 0;  
    
//     int cnt = 0;
    
//     while(left<=(n-1) && right<=(m-1))
//     {
//         if(arr1[left]<=arr2[right])
//         {
//             cnt++;
//             if(cnt==k) return arr1[left];
//             left++;
//         }
//         else
//         {
//             cnt++;
//             if(cnt==k) return arr2[right];
//             right++;
//         }
//     }
//     while(left<=(n-1))
//     {
//         cnt++;
//         if(cnt==k) return arr1[left];
//         left++;
//     }
//     while(right<=(m-1))
//     {
//         cnt++;
//         if(cnt==k) return arr2[right];
//         right++;
//     }
 
    
// }

//3.OPTIMAL SOLUTION - TC-O(LOG BASE 2 MIN(M,N)) SC-O(1)

// #include<bits/stdc++.h>
// int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
//     // Write your code here
//     if(n>m) return kthElement(arr2,arr1,m,n,k);
//     int low = max(k-m,0);
//     int high = min(k, n);
//     int targetonleft = k;

//     while(low<=high)
//     {
//         int mid1 = low+(high-low)/2;
//         int mid2 = targetonleft-mid1;

//         int l1 = INT_MIN;
//         int l2 = INT_MIN;
//         int r1 = INT_MAX;
//         int r2 = INT_MAX;

//         if(mid1>0) l1 = arr1[mid1-1];
//         if(mid2>0) l2 = arr2[mid2-1];
//         if(mid1!=n) r1 = arr1[mid1];
//         if(mid2!=m) r2 = arr2[mid2];

//         if(l1>r2)
//         {
//             high = mid1-1;
//         }
//         else if(l2>r1)
//         {
//             low = mid1+1;
//         }
//         else{
//             return max(l1,l2);
//         }


//     }
//     return -1;

// }