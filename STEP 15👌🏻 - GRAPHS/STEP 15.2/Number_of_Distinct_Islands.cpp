//TC-O(NM+4NM*LOG(NM)) SC-O(4NM) APPROX
// class Solution {
//   public: 
//     void calcpls(vector<vector<char>>& grid,vector<vector<int>>& vis,set<vector<pair<int,int>>>&s,int i ,int j)
//     {
//         int bx = i ,by = j;
//         vector<pair<int,int>>v;
//         queue<pair<int,int>>q;
//         q.push({i,j});
//         vis[i][j]=1;
//         while(!q.empty())
//         {
//             int n = q.size();
//             while(n)
//             {
//                 auto it = q.front();
//                 int x = it.first,y = it.second;
//                 q.pop();
//                 v.push_back({it.first-bx,it.second-by});              
//                 if(y-1>=0 && !vis[x][y-1] && grid[x][y-1]=='L') {
//                     vis[x][y-1]=1;
//                     q.push({x,y-1});
//                 }
//                 if(y+1<grid[0].size() && !vis[x][y+1] && grid[x][y+1]=='L') {
//                     vis[x][y+1]=1;
//                     q.push({x,y+1});
//                 }
//                 if(x-1>=0 && !vis[x-1][y] && grid[x-1][y]=='L') {
//                     vis[x-1][y]=1;
//                     q.push({x-1,y});
//                 }
//                 if(x+1<grid.size() && !vis[x+1][y] && grid[x+1][y]=='L') {
//                     vis[x+1][y]=1;
//                     q.push({x+1,y});
//                 }         
//                 n--;
//             }
//         }
//         s.insert(v);
//         return;
//     }
//     int countDistinctIslands(vector<vector<char>>& grid) {
//         // code here
//         int n = grid.size(),m = grid[0].size();
//         vector<vector<int>>vis(n,vector<int>(m,0));
//         set<vector<pair<int,int>>>s;
//         for(int i = 0 ; i < n ; i ++)
//         {
//             for(int j = 0 ; j < m ; j++)
//             {
//                 if(!vis[i][j] && grid[i][j]=='L') calcpls(grid,vis,s,i,j);
//             }
//         }
//         return s.size();
//     }
// };
