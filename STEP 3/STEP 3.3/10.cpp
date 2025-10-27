//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

// int numberOfInversions(vector<int>&a, int n) {
//     // Write your code here.
//     int cnt = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         for(int j = 1+i ; j < n ; j++)
//         {
//             if(a[i]>a[j]) cnt++;
//         }
//     }
//     return cnt;
// }

//but i am distorting the array which the interviewer might not like so tell him if you dont like i can take a copy and do on that
//2.OPTIMAL SOLUTION - (using merge sort) TC-O(NLOGN) SC-O(N)

// int merge(vector<int>&a,int low,int mid,int high)
// {
//     int cnt = 0;
//     int left = low;
//     int right = mid+1;
//     vector<int>temp;
//     while(left<=mid && right<=high)
//     {

//         if(a[left]>a[right])
//         {
//             temp.push_back(a[right]);
//             cnt+=(mid-left+1);
//             right++;
//         }

//         else
//         {
//             temp.push_back(a[left]);
//             left++;
//         }     
//     }

//     while(left<=mid)
//     {
//         temp.push_back(a[left]);
//         left++;
//     }

//     while(right<=high)
//     {
//         temp.push_back(a[right]);
//         right++;
//     }

//     for(int i = low ; i <= high ; i++)
//     {
//         a[i]=temp[i-low];
//     }
//     return cnt;
// }

// int mergesort(vector<int>&a,int low,int high)
// {
//     int cnt = 0;
//     if(low>=high) return cnt;
//     int mid = (low+high)/2;
//     cnt+=mergesort(a,low,mid);
//     cnt+=mergesort(a,mid+1,high);
//     cnt+=merge(a,low,mid,high);
//     return cnt;
// }


// int numberOfInversions(vector<int>&a, int n) {
//     // Write your code here.
//     return mergesort(a,0,n-1);
// }

