//TC-O(2V+2E) SC-O(4V+E)
// class Solution {
//   public:
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>>adj(V);
//         vector<int>indegree(V,0);
//         queue<int>q;
//         vector<int>vis(V,0);
//         for(int i = 0 ; i < edges.size() ; i++)
//         {
//             int x = edges[i][0];
//             int y = edges[i][1];
//             adj[x].push_back(y);
//             indegree[y]++;
//         }
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(indegree[i]==0) q.push(i);
//         }
//         //topo sort using bfs
//         vector<int>ans;
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             ans.push_back(node);
//             for(auto it : adj[node]){
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         return ans;   
//     }
// };