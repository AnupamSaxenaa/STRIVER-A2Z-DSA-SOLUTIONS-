//1.BRUTE SOLUTION - TC-O(N*M + N*M*LOG BASE 2 N*M) SC-O(N*M)

// int median(vector<vector<int>> &matrix, int m, int n) {
//     // Write your code here.
//     vector<int>temp;
//     for(int i = 0 ; i < m ; i++)
//     {
//         for(int j = 0 ; j < n ; j++)
//         {
//             temp.push_back(matrix[i][j]);
//         }
//     }
//     sort(temp.begin(),temp.end());
//     int totalele = n*m;
//     int idx = n*m/2;
//     return temp[idx];
// }

//2.OPTIMAL SOLUTION - TC-O((LOG BASE 2 10^9) *N*(LOG BASE 2 M)) SC-O(1)

// #include<bits/stdc++.h>

// int findcnt(vector<vector<int>> &matrix,int mid)
// {
//     int cnt = 0;
//     for(int i = 0 ; i < matrix.size() ; i++)
//     {
//         auto it = upper_bound(matrix[i].begin(),matrix[i].end(),mid);
//         cnt+=(it-matrix[i].begin());
//     }
//     return cnt;
// }

// int median(vector<vector<int>> &matrix, int m, int n) {
//     // Write your code here.
//     int low = INT_MAX;
//     int high = INT_MIN;

//     //FOR LOW
//     for(int i = 0 ; i < m ; i++)
//     {
//         if(matrix[i][0]<low)
//         {
//             low = matrix[i][0];
//         }
//     }
//     //FOR HIGH
//         for(int i = 0 ; i < m ; i++)
//     {
//         if(matrix[i][n-1]>high)
//         {
//             high = matrix[i][n-1];
//         }
//     }
//     int req = (n*m)/2;
//     while(low<=high)
//     {
//         int mid = low+(high-low)/2;
//         int count = findcnt(matrix,mid);
//         if(count<=req) low = mid+1;
//         else high = mid-1;
//     }
//     return low;
// }