//1.BRUTE SOLUTION - (LINEAR SEARCH) TC-O(M*N) SC-O(1) 

//2.BETTER SOLUTION - TC-O(N+LOG BASE 2 M) SC-O(1)

// bool searchMatrix(vector<vector<int>>& mat, int target) {
//     int n = mat.size();
//     int m = mat[0].size();

//     for(int i = 0 ; i < n ; i++)
//     {
//         int low = 0;
//         int high = m-1;
//         if(target<mat[i][low] || target>mat[i][high]) continue;
//         while(low<=high)
//         {
//             int mid = low+(high-low)/2;
//             if(mat[i][mid]==target) return true;
//             else if(mat[i][mid]>target) high = mid-1;
//             else low = mid+1;
//         }

//     }
//     return false;
// }

//3.OPTIMAL SOLUTION - 1(deciding which row to target)
// TC-O(LOG BASE 2 (M*N)) SC-O(1)

// class Solution {
//     public:
//         bool searchMatrix(vector<vector<int>>& matrix, int target) {
//             int n = matrix.size();
//             int m = matrix[0].size();
    
//             int idxtobechecked = -1;
//             int low = 0;
//             int high = n-1;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
    
//                 if(target==matrix[mid][m-1]) return true;
//                 else if(target>matrix[mid][m-1]) low = mid+1;
//                 else high = mid-1;
//             }
//             if(low >= n) return false;
    
    
//             idxtobechecked = low;
    
//             low = 0;
//             high = m-1;
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 if(matrix[idxtobechecked][mid]==target) return true;
//                 else if(matrix[idxtobechecked][mid]>target) high = mid-1;
//                 else low = mid+1;
//             }
    
//             return false;
//         }
//     };

//OPTIMAL SOLUTION  - 2(FLATTENING 2D ARRAY INTO 1D ARRAY)
//TC-O(LOG BASE 2 (M*N)) SC-O(1)

// class Solution {
//     public:
//         bool searchMatrix(vector<vector<int>>& matrix, int target) {
//             int n = matrix.size();
//             int m = matrix[0].size();
    
//             int low = 0;
//             int high = n*m-1;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
    
//                 int row = mid/m;
//                 int column = mid%m;
    
//                 if(matrix[row][column]==target) return true;
//                 else if(matrix[row][column]>=target) high = mid-1;
//                 else low = mid+1;
//             }
    
//             return false;
//         }
//     };
