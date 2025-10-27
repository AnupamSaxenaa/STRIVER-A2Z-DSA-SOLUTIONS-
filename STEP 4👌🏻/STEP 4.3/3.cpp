//1.BRUTE SOLUTION - TC-O(N*M) SC-O(1)

// class Solution {
//     public:
//         bool searchMatrix(vector<vector<int>>& matrix, int target) {
//             int n = matrix.size();
//             int m = matrix[0].size();
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 for(int j = 0 ; j < m ; j++)
//                 {
//                     if(matrix[i][j]==target) return true;
//                 }
//             }
//             return false;
//         }
//     };

//2.BETTER SOLUTION - TC-O(N*LOG BASE 2 M) SC-O(1)

// class Solution {
//     public:
//         bool searchMatrix(vector<vector<int>>& matrix, int target) {
//             int n = matrix.size();
//             int m = matrix[0].size();
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 int low = 0;
//                 int high = m - 1;
    
//                 while(low <= high)
//                 {
//                     int mid = low + (high - low) / 2;
//                     if(matrix[i][mid] == target) return true;
//                     else if(matrix[i][mid] > target) high = mid - 1;
//                     else low = mid + 1;
//                 }
//             }
//             return false;
//         }
//     };

//3.OPTIMAL SOLUTION - TC-O(N+M) SC-O(1)

// class Solution {
//     public:
//         bool searchMatrix(vector<vector<int>>& matrix, int target) {
//             int n = matrix.size();
//             int m = matrix[0].size();
            
//             int row = 0;
//             int column = m-1;
    
//             while(row<n && column>=0)
//             {
//                 if(matrix[row][column]==target) return true;
//                 else if(matrix[row][column]>target) column--;
//                 else row++;
//             }
//             return false;
//         }
//     };