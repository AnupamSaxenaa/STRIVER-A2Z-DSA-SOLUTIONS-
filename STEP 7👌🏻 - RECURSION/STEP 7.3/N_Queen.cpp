//1.RECURSION - TC-O(N^2*N!) SC-O(N^2+N) (BRUTE)
              //TC-O(N!) SC-O(N) (OPTIMAL)      

// class Solution
// {
//     public:

//         bool issafe(vector<string>board,int &n,int col,int row){
//             int cc = col;
//             int rr = row;

//             //left checking
//             while(cc>=0){
//                 if(board[rr][cc]=='Q') return false;
//                 cc--;
//             }

//             //left up checking
//             cc = col;
//             while(cc>=0 && rr>=0){
//                 if(board[rr][cc]=='Q') return false;
//                 cc--;
//                 rr--;
//             }

//             cc = col;
//             rr = row;

//             //left down checking
//             while(cc>=0 && rr<n){
//                 if(board[rr][cc]=='Q') return false;
//                 cc--;
//                 rr++;
//             }

//             return true;
//         }

//         void calcpls(vector<vector<string>> &ans,vector<string>board,int &n,int col)
//         {
//             if(col==n){
//                 ans.push_back(board);
//                 return;
//             }

//             //row
//             for(int i = 0 ; i < n ; i++){
//                 if(issafe(board,n,col,i)){
//                     board[i][col] = 'Q';
//                     calcpls(ans,board,n,col+1);
//                     board[i][col] = '.';
//                 }
//             }
//         }   

//         vector<vector < string>> solveNQueens(int n)
//         {
//             vector<vector<string>>ans;
//             vector<string>board(n , string(n,'.'));
//             calcpls(ans,board,n,0);
//             return ans;
//         }
// };