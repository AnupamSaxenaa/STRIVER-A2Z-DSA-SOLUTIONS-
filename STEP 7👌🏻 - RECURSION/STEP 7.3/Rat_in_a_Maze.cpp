//1.RECURSION - TC-O(4^(N^2)) SC-O(K*N^2 + N^2(AUXILIARY)(RECURSION DEPTH))

// class Solution {
//   public:
    
//     void calcpls(vector<vector<int>>& maze, vector<string>& ans, string &tmp, int i, int j, int n)
//     {
        
//         if (i < 0 || j < 0 || i >= n || j >= n || maze[i][j] == 0 || maze[i][j] == -1)
//             return;

 
//         if (i == n - 1 && j == n - 1) {
//             ans.push_back(tmp);
//             return;
//         }
        
//         int temp = maze[i][j];
//         maze[i][j] = -1;
        
//         // DOWN
//         tmp.push_back('D');
//         calcpls(maze, ans, tmp, i + 1, j, n);
//         tmp.pop_back();
        
//         // UP
//         tmp.push_back('U');
//         calcpls(maze, ans, tmp, i - 1, j, n);
//         tmp.pop_back();
        
//         // LEFT
//         tmp.push_back('L');
//         calcpls(maze, ans, tmp, i, j - 1, n);
//         tmp.pop_back();
        
//         // RIGHT
//         tmp.push_back('R');
//         calcpls(maze, ans, tmp, i, j + 1, n);
//         tmp.pop_back();
        
//         maze[i][j] = temp;
//     }
  
//     vector<string> ratInMaze(vector<vector<int>>& maze) {
//         // code here
//         vector<string> ans;
//         string tmp = "";
//         if(maze[0][0] != 1) return ans;
//         calcpls(maze, ans, tmp, 0, 0, maze.size());
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };
