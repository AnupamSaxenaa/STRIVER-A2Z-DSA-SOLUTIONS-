//1.BRUTE SOLUTION - TC-O((MAX-MIN)*N+NLOGN) SC-O(1)

// bool cowcanbeplace(vector<int> &stalls, int k,int i,int n)
// {
//     int placed_at = 0;
//     int cow_placed = 1;

//     for(int j = 1 ; j < n ; j++)
//     {
//         if((stalls[j]-stalls[placed_at])>=i)
//         {
//             placed_at = j;
//             cow_placed++;
//             if(cow_placed==k) break;
//         }
//     }

//     if(cow_placed!=k) return false;
//     return true;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.
//     int n = stalls.size();
//     sort(stalls.begin(),stalls.end());

//     int min = stalls[0];
//     int max = stalls[n-1];

    
//     for(int i = 1 ; i <= (max-min) ; i++)
//     {
//         bool ans = cowcanbeplace(stalls,k,i,n);
//         if(ans==false) return i-1;
//     }
// }

//2.OPTIMAL SOLUTION - TC-O(LOG(MAX-MIN)*N+NLOGN) SC-(1)

// bool cowcanbeplace(vector<int> &stalls, int k,int i,int n)
// {
//     int placed_at = 0;
//     int cow_placed = 1;

//     for(int j = 1 ; j < n ; j++)
//     {
//         if((stalls[j]-stalls[placed_at])>=i)
//         {
//             placed_at = j;
//             cow_placed++;
//             if(cow_placed==k) break;
//         }
//     }

//     if(cow_placed!=k) return false;
//     return true;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.
//     int n = stalls.size();
//     sort(stalls.begin(),stalls.end());

//     int max = stalls[n-1];

//     int low = 1;
//     int min = stalls[0];
//     int high = max-min;

//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;

//         if(cowcanbeplace(stalls,k,mid,n)==true) low = mid+1;
//         else high = mid-1;
//     }
//     return high;
// }