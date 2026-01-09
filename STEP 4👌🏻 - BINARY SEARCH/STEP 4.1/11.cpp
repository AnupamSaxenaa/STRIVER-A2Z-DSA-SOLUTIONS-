//1.BRUTE SOLUTION - TC-O(N) SC-O(1)

// int findKRotation(vector<int> &arr){
//     // Write your code here. 
//     int n = arr.size();
//     int cnt = 0;
//     for(int i = 1 ; i < n ; i++)
//     {
//         if(arr[i]>=arr[i-1]) cnt++;
//         else break;
//     }   
//     return (cnt+1)%n;
// }

//2.OPTIMAL SOLUTION - TC-O(LOGN) SC-O(1)

// #include<bits/stdc++.h>
// int findKRotation(vector<int> &arr){
//     // Write your code here.  
//    int n = arr.size();
//    int low = 0;
//    int high = n-1;
//    int ans = INT_MAX;
//    int index = -1;

//    while(low<=high)
//    {
//        int mid = low+(high-low)/2;
//        if(arr[mid]>=arr[low])
//        {
//            if(arr[low]<ans)
//            {
//                ans = arr[low];
//                index = low;
//            }
//            low = mid+1;
//        }
//        else 
//        {
//            if(arr[mid]<ans)
//            {
//                ans=arr[mid];
//                index = mid;
//            }
//            high = mid-1;
//        }
//    }
//    return index;
// }