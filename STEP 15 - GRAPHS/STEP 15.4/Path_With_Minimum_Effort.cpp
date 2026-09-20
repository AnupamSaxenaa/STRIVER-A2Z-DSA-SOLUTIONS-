//TC-O(ELOGV) E = 4NM , V = NM
//SC-O(E+V) ALSO DIRECTLY O(NM+4NM)
// class Solution
// {
//     public:
//         int minimumEffortPath(vector<vector < int>> &heights)
//         {
//             int n = heights.size(), m = heights[0].size();
//             vector<vector < int>> dist(n, vector<int> (m, 1e9));
//             priority_queue<tuple<int, int, int>, vector< tuple<int, int, int>>, greater<tuple<int, int, int>>> p;
//             dist[0][0] = 0;
//             p.push({ 0,
//                 0,
//                 0 });
//             int ans = -1;
//             while (!p.empty())
//             {
//                 auto[diff, x, y] = p.top();
//                 p.pop();
//                 if (x == n - 1 && y == m - 1){
//                     ans = diff;
//                     break;
//                 }
//                	//left
//                 if (y - 1 >= 0)
//                 {
//                     int neweffort = max(abs(heights[x][y] - heights[x][y - 1]),diff);
//                     if(neweffort < dist[x][y-1])
//                     {
//                         dist[x][y-1] = neweffort;
//                         p.push({neweffort,x,y-1});
//                     }
//                 }
//                	//right
//                 if (y + 1 < m)
//                 {
//                     int neweffort = max(abs(heights[x][y] - heights[x][y + 1]),diff);
//                     if(neweffort < dist[x][y+1])
//                     {
//                         dist[x][y+1] = neweffort;
//                         p.push({neweffort,x,y+1});
//                     }
//                 }
//                	//up
//                 if (x - 1 >= 0)
//                 {
//                     int neweffort = max(abs(heights[x][y] - heights[x-1][y]),diff);
//                     if(neweffort < dist[x-1][y])
//                     {
//                         dist[x-1][y] = neweffort;
//                         p.push({neweffort,x-1,y});
//                     }
//                 }
//                	//down
//                 if (x + 1 < n)
//                 {
//                     int neweffort = max(abs(heights[x][y] - heights[x+1][y]),diff);
//                     if(neweffort < dist[x+1][y])
//                     {
//                         dist[x+1][y] = neweffort;
//                         p.push({neweffort,x+1,y});
//                     }
//                 }
//             }
//             return ans;
//         }
// };