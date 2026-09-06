//TC-O(3V+2E+VLOGV) SC-O(4V+E)
// class Solution {
// public:
//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//         int V = graph.size();
//         vector<vector<int>>adj(V);
//         vector<int>outdegree(V,0);
//         for(int i = 0; i < V; i++)
//         {
//             int u = i;
//             for(auto v : graph[u]){
//                 outdegree[u]++;
//                 adj[v].push_back(u);
//             }
//         }
//         queue<int>q;
//         vector<int>ans;
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(outdegree[i]==0) q.push(i);
//         }
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             ans.push_back(node);
//             for(auto it : adj[node]){
//                 outdegree[it]--;
//                 if(outdegree[it]==0) q.push(it);
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };