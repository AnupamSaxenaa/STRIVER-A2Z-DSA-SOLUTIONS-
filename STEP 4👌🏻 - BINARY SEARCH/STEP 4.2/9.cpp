//1.BRUTE SOLUTION - TC-O((HIGH-LOW+1)*N) SC-O(1)

// int count(vector<int>& arr,int n,int m,int i)
// {
//     int cnt = 1;
//     int sum = 0;

//     for(int j = 0 ; j < n ; j++)
//     {
//         if((sum+arr[j])<=i) sum+=arr[j];
//         else
//         {
//             cnt++;
//             sum = arr[j];
//         }
//     }
//     return cnt;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     // Write your code here.
//     if(n<m) return -1;
//     int low = *max_element(arr.begin(),arr.end());
//     int high = accumulate(arr.begin(),arr.end(),0);

//     for(int i = low ; i <= high ; i++)
//     {
//         int student = count(arr,n,m,i);
//         if(student<=m) return i;
//     }
// }

//2.OPTIMAL SOLUTION - TC-O(LOG(HIGH-LOW+1)*N) SC-O(1)

// int count(vector<int>& arr,int n,int m,int i)
// {
//     int cnt = 1;
//     int sum = 0;

//     for(int j = 0 ; j < n ; j++)
//     {
//         if((sum+arr[j])<=i) sum+=arr[j];
//         else
//         {
//             cnt++;
//             sum = arr[j];
//         }
//     }
//     return cnt;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     // Write your code here.
//     if(n<m) return -1;
//     int low = *max_element(arr.begin(),arr.end());
//     int high = accumulate(arr.begin(),arr.end(),0);

//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         int ans = count(arr,n,m,mid);
//         if(ans<=m) high = mid-1;
//         else low = mid+1;
//     }
//     return low;
// }