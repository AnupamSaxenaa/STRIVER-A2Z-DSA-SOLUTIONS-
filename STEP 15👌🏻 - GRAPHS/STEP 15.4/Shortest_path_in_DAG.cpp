//TC-O(3E+4V) SC-O(5V+E)
// class Solution {
//   public:
//     void calcpls(vector<vector<pair<int,int>>>& adj,vector<int>& vis,stack<int>&s,int node)
//     {
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it.first]) calcpls(adj,vis,s,it.first);
//         }
//         s.push(node);
//         return;
//     }
//     vector<int> shortestPath(int V, vector<vector<int>>& edges) {
//         vector<vector<pair<int,int>>>adj(V);
//         for(int i = 0 ; i < edges.size(); i++)
//         {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             int w = edges[i][2];
//             adj[u].push_back({v,w});
//         }       
//         //topo sort
//         stack<int>s;
//         vector<int>vis(V,0);
//         for(int i = 0 ; i < V ; i++)
//         {
//             if(!vis[i]) {
//                 calcpls(adj,vis,s,i);
//             }
//         }       
//         //applying real algo
//         vector<int>dist(V,INT_MAX);
//         dist[0] = 0;
//         while(!s.empty())
//         {
//             int node = s.top();
//             s.pop();
//             if(dist[node]==INT_MAX) continue;
//             for(auto it : adj[node])
//             {
//                 int node2 = it.first;
//                 int dist2 = it.second;
//                 if(dist[node2]>dist[node]+dist2) dist[node2] = dist[node]+dist2;
//             }
//         }       
//         for(int i = 1 ; i < V ; i++)
//         {
//             if(dist[i]==INT_MAX) dist[i] = -1;
//         }
//         return dist;        
//     }
// };
