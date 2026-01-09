//1.OPTIMAL SOLUTION - TC-O(LOG BASE 2 M * N) SC-O(1)

// class Solution {
//     private:
//         int findmax(vector<vector<int>>& mat,int n,int m,int mid)
//         {
//             int maxi = INT_MIN;
//             int idx = -1;
//             for(int i = 0 ; i < n ; i++)
//             {
//                 if(mat[i][mid]>maxi) 
//                 {
//                     maxi = mat[i][mid];
//                     idx = i;
//                 }
//             }
//             return idx;
            
//         }    
//     public:
//         vector<int> findPeakGrid(vector<vector<int>>& mat) {
//             int n = mat.size();
//             int m = mat[0].size();
    
//             int low = 0;
//             int high = m-1;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 int rowmax = findmax(mat,n,m,mid);
//                 int left = -1;
//                 int right = -1;
//                 if(mid-1>=0) left = mat[rowmax][mid-1];
//                 if(mid+1<m) right = mat[rowmax][mid+1];
    
//                 if(mat[rowmax][mid]>left && mat[rowmax][mid]>right) return {rowmax,mid};
//                 else if(mat[rowmax][mid]<left) high = mid-1;
//                 else low = mid+1;
//             }
//             return {-1,-1};
//         }
//     };