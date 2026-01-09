//1.RECURSION - TC-O(9^(81)*81*81) SC-0(81) OR O(1)

// class Solution
// {
//     public:

//         bool safe(vector<vector < char>> &board, int row, int col, char val)
//         {
//             for (int i = 0; i < 9; i++)
//             {
//                 if (board[row][i] == val) return false;
//                 if (board[i][col] == val) return false;
//                 if (board[3 *(row / 3) + i / 3][3 *(col / 3) + i % 3] == val) return false;
//             }
//             return true;
//         }

//     bool calcpls(vector<vector < char>> &board)
//     {
//         for (int col = 0; col < 9; col++)
//         {
//             for (int row = 0; row < 9; row++)
//             {
//                 if (board[row][col] == '.')
//                 {
//                     for (char val = '1'; val <= '9'; val++)
//                     {
//                         if (safe(board, row, col, val))
//                         {
//                             board[row][col] = val;
//                             if (calcpls(board)) return true;
//                             board[row][col] = '.';
//                         }
//                     }
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }

//     void solveSudoku(vector<vector < char>> &board)
//     {
//         calcpls(board);
//     }
// };