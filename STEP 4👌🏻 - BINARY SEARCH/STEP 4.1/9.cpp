//1.BRUTE SOLUTION - TC-O(N) SC-O(1)

// bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
//     // Write your code here.
//     int n = A.size();
//     for(int i = 0 ; i < n ; i++)
//     {
//         if(A[i]==key) return true;
//     }
//     return false;
// }


//TIP BY STRIVER AT THE END: if you get questions envolving duplicates then try to solve them as unique element based and modify 
//the code where the condition fails , for ex here it breaks at identifying the sorting portion

//2.OPTIMAL SOLUTION - TC(AVERAGE)-O(LOGN) TC(WORST CASE)-O(N/2) SC-O(1)

// bool searchInARotatedSortedArrayII(vector<int>&a, int k) {
//     // Write your code here.
//     int n = a.size();
//     int low = 0;
//     int high = n-1;

//     while(low<=high)
//     {
//         int mid = low+ (high-low)/2;
//         if(a[mid]==k) return true;
//         else if(a[mid]==a[low] && a[mid]==a[high]) 
//         {
//             low++;
//             high--;
//         }
//         else if(a[mid]>=a[low])
//         {
//             if(a[mid]>=k && a[low]<=k) high = mid-1;
//             else low = mid+1;
//         }
//         else{
//             if(a[mid]<=k && a[high]>=k) low = mid+1;
//             else high = mid-1;
//         }
//     }
//     return false;
// }



