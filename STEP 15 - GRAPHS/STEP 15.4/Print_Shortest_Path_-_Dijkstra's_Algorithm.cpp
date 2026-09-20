//TC-O(ELOGV) SC-O(E+V)
// class Solution {
//   public:
//     vector<int> shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
//         // Code here
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
//         vector<int>dist(V+1,1e9);
//         dist[src] = 0;
//         vector<int>chk(V+1);
//         for(int i = 1 ; i <= V ; i++) chk[i] = i;
//         q.push({0,src});
//         vector<vector<pair<int,int>>>adj(V+1);
//         for(int i = 0 ; i < edges.size();i++)
//         {
//             int n1 = edges[i][0];
//             int n2 = edges[i][1];
//             int wt = edges[i][2];
//             adj[n1].push_back({wt,n2});
//             adj[n2].push_back({wt,n1});
//         }  
//         while(!q.empty())
//         {
//             int dist1 = q.top().first;
//             int node1 = q.top().second;
//             q.pop();
//             for(auto it : adj[node1])
//             {
//                 int dist2 = it.first;
//                 int node2 = it.second;
//                 if(dist1 + dist2 < dist[node2])
//                 {
//                     dist[node2] = dist1+dist2;
//                     q.push({dist[node2],node2});
//                     chk[node2] = node1;
//                 }
//             }
//         }
//         if(dist[dest]==1e9) return {-1};
//         vector<int>ans;
//         ans.push_back(dest);
//         int st = dest;
//         while(true)
//         {
//             int fnode = chk[st];
//             ans.push_back(fnode);
//             st = fnode;
//             if(st==src) break;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };