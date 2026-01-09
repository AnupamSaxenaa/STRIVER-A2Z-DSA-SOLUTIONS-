//1.BETTER SOLUTION - TC-O(N^2) SC-O(1)

// int subarraysWithSumK(vector < int > a, int b) {
//     // Write your code here
//     int cnt = 0;
//     for(int i = 0 ; i < a.size() ; i++)
//     {
//         int xorop = a[i];
//         if(xorop==b) cnt++;
//         for(int j = i+1 ; j < a.size() ; j++)
//         {
//             xorop = xorop^a[j];
//             if(xorop==b) cnt++;
//         }
//     }
//     return cnt;
// }

//2.OPTIMAL SOLUTION - TC - O(NLOGN) SC - O(N)

// #include<bits/stdc++.h>
// int subarraysWithSumK(vector < int > a, int b) {
//     // Write your code here
//     int n = a.size();
//     int cnt = 0;
//     map<int,int>mpp;
//     int chk = 0;

//     for(int i = 0 ; i < n ; i++)
//     {
//         chk = chk^a[i];
//         if(chk==b)
//         {
//             cnt++;
//         }
//         int rem = b^chk;
//         if(mpp.find(rem)!=mpp.end())
//         {
//             cnt = cnt+mpp[rem];
//         }
//         mpp[chk]++;
//     }
//     return cnt;
// }