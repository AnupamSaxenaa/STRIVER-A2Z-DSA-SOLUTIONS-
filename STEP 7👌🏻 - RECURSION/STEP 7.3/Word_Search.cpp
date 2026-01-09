//1.RECURSION - TC-O(4^K*m*n) length of word. SC-O(k) recursion depth

// class Solution
// {
//     public:

//         bool find(vector<vector < char>> &board, string word, int i, int j, int idx)
//         {

//             if (idx == word.size() || i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] == '#' || board[i][j] != word[idx])
//             {
//                 if (idx == word.size()) return true;
//                 return false;
//             }
//             char temp = board[i][j];
//             board[i][j] = '#';
//             bool res =  find(board,word,i+0,j+1,idx+1) || find(board,word,i+1,j+0,idx+1) || find(board,word,i-1,j+0,idx+1) || find(board,word,i+0,j-1,idx+1);
//             board[i][j] = temp;
//             return res;
//         }

//     bool exist(vector<vector < char>> &board, string word)
//     {
//         int n = board.size();
//         int m = board[0].size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (board[i][j] == word[0] && find(board, word, i, j, 0)) return true;
//             }
//         }
//         return false;
//     }
// };
