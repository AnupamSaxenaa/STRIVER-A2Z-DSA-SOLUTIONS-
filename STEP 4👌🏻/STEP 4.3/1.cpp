//1.BRUTE SOLUTION - TC-O(N*M) SC-O(1) 

// class Solution {
//     public:
//         vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//             int n = mat.size();
//             int m = mat[0].size();
    
//             int idx = -1;
//             int maxi = -1;
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 int cnt = 0;
//                 for(int j = 0 ; j < m ; j++)
//                 {
//                     if(mat[i][j]==1) cnt++;
//                 }
//                 if(cnt>maxi)
//                 {
//                     maxi = cnt;
//                     idx = i;
//                 }
//             }
//             return {idx,maxi};
//         }
//     }

//2.OPTIMAL SOLUTION - TC-O(LOGM*N) SC-O(1) (USE UPPER BOUND OR LOWERBOUND CONCEPT) OR USE THIS
// class Solution {
//     public:
//         vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//             int n = mat.size();
//             int m = mat[0].size();
    
//             int maxi = -1;
//             int idx = -1;
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 int low = 0;
//                 int high = m-1;
//                 int firstone = m;
    
//                 while(low <= high)
//                 {
//                     int mid = low + (high - low) / 2;
//                     if(mat[i][mid] == 1)
//                     {
//                         firstone = mid;
//                         high = mid - 1;
//                     } 
//                     else {
//                         low = mid + 1;
//                     }
//                 }
    
//                 int cnt = m - firstone;
//                 if(cnt > maxi) 
//                 {
//                     maxi = cnt;
//                     idx = i;
//                 }
//             }
//             return {idx, maxi};
//         }
//     };
    