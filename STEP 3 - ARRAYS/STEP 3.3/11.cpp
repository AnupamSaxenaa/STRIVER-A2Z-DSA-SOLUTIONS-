//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

// int team(vector <int> & skill, int n)
// {
//     // Write your code here.
//     int cnt = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//        for(int j = i+1 ; j < n ; j++)
//        {
//            if(skill[i]>2*skill[j]) cnt++;
//        } 
//     }
//     return cnt;
// }


//but i am distorting the array which the interviewer might not like so tell him if you dont like i can take a copy and do on that
//2.OPTIMAL SOLUTION - TC-(2*N*LOGN) SC-O(N)

// void merge(vector<int>&a,int low,int mid,int high)
// {
//     int left = low;
//     int right = mid+1;
//     vector<int>temp;
//     while(left<=mid && right<=high)
//     {
//         if(a[left]>a[right])
//         {
//             temp.push_back(a[right++]);
//         } 
//         else
//         {
//             temp.push_back(a[left++]);
//         }
//     }

//     while(left<=mid)
//     {
//         temp.push_back(a[left++]);
//     }

//     while(right<=high)
//     {
//         temp.push_back(a[right++]);
//     }

//     for(int i = low ; i <= high ; i++)
//     {
//         a[i]=temp[i-low];
//     }
// }

// int countpairs(vector<int>&a,int low,int mid,int high)
// {
//     int cnt = 0;
//     int right = mid+1;
//     for(int i = low ; i <= mid ; i++)
//     {
//         while(right<=high && a[i]>2*a[right])
//         {
//             right++;
//         }
//         cnt+=(right-(mid+1));
//     }
//     return cnt;
// }

// int mergesort(vector<int>&a,int low,int high)
// {
//     int cnt=0;
//     if(low>=high) return cnt;
//     int mid = (low+high)/2;
//     cnt+=mergesort(a,low,mid);
//     cnt+=mergesort(a,mid+1,high);
//     cnt+=countpairs(a,low,mid,high);
//     merge(a,low,mid,high);
//     return cnt;
// }

// int team(vector <int> & skill, int n)
// {
//     // Write your code here.
//     return mergesort(skill,0,n-1);
// }





