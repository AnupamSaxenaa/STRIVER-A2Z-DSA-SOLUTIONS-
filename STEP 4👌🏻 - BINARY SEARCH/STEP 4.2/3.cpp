//1.BRUTE SOLUTION - TC-O(MAX(ARR)*M)

// #include<bits/stdc++.h>
// int maxi(vector<int>& v)
// {
//     int ans = INT_MIN;
//     for(int i = 0 ; i < v.size() ; i++)
//     {
//         if(v[i]>ans) ans = v[i];
//     }
//     return ans;
// }

// int minimumRateToEatBananas(vector<int> v, int h) {
//     // Write Your Code Here
//     int rate = 1;
//     int n = v.size();

//     for(int i = 1 ; i <= maxi(v) ; i++)
//     {
//         int hours = 0;
//         for(int j = 0 ; j < n ; j++)
//         {
//             hours+=(i+v[j]-1)/i;
//             if(hours>h) break;
//         }

//         if(hours<=h) return i;
//     }
// }

//2.OPTIMAL SOLUTION - TC-O(N+(LOG BASE 2 MAX(ARR))*N) SC-O(1)

// class Solution {
//     private:
//         int maxi(vector<int>& v)
//         {
//             int ans = INT_MIN;
//             for(int i = 0 ; i < v.size() ; i++)
//             {
//                 if(v[i]>ans) ans = v[i];
//             }
//             return ans;
//         }
    
//     public:
//         int minEatingSpeed(vector<int>& piles, int h) {
//             int n = piles.size();
//             int low = 1;
//             int high = maxi(piles);
            
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 int hours = 0;
    
//                 for(int i = 0 ; i < n ; i++)
//                 {
//                     hours += (mid+piles[i]-1)/mid;
//                     if(hours>h) break;
//                 }
    
//                 if(hours<=h) high = mid-1;
//                 else low = mid+1;
    
//             }
//             return low;
//         }
//     };