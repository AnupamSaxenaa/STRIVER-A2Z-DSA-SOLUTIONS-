//TC-O(2E+2V) SC-O(3V+E)
// class Solution {
//   public:
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         // code here
//         vector<int>indegree(V,0);
//         vector<vector<int>>adj(V);
//         for(int i = 0 ; i < edges.size() ; i++)
//         {
//             int x = edges[i][0];
//             int y = edges[i][1];
//             adj[x].push_back(y);
//             indegree[y]++;
//         }
//         queue<int>q;
//         int cnt = 0;
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(indegree[i]==0) q.push(i);
//         }
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             cnt++;
//             for(auto it : adj[node])
//             {
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         return (cnt==V) ? false : true;
//     }
// };