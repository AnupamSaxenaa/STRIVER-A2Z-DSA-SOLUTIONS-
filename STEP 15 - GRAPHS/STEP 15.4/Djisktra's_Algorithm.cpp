//1.USING PRIORITY QUEUE - TC-O(ELOGV) SC-O(E+V)
// class Solution {
//   public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         // Code here
//         vector<vector<pair<int,int>>>adj(V);
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
//         vector<int>dist(V,1e9);
//         dist[src] = 0;
//         q.push({0,src});    
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
//             int node = q.top().second;
//             q.pop();
//             for(auto it : adj[node]){
//                 int node2 = it.second;
//                 int dist2 = it.first;
//                 if(dist1 + dist2 < dist[node2])
//                 {
//                     dist[node2] = dist1+dist2;
//                     q.push({dist[node2],node2});
//                 }
//             }
//         }
//         return dist;
//     }
// };

//2.USING SET - TC-O(ELOGV) SC-O(E+V)
// class Solution {
//   public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
//         // Code here
//         set<pair<int,int>>s;
//         vector<int>dist(V,1e9);
//         s.insert({0,src});
//         dist[src] = 0;
//         vector<vector<pair<int,int>>>adj(V);
//         for(int i = 0 ; i < edges.size();i++)
//         {
//             int n1 = edges[i][0];
//             int n2 = edges[i][1];
//             int wt = edges[i][2];
//             adj[n1].push_back({wt,n2});
//             adj[n2].push_back({wt,n1});
//         } 
//         while(!s.empty())
//         {
//             auto it = *(s.begin());
//             int node1 = it.second;
//             int dist1 = it.first;
//             s.erase(it);
//             for(auto x : adj[node1])
//             {
//                 int dist2 = x.first;
//                 int node2 = x.second;
//                 if(dist1+dist2<dist[node2]){
//                     if(dist[node2]!=1e9) s.erase({dist[node2],node2});
//                     dist[node2] = dist1+dist2;
//                     s.insert({dist[node2],node2});
//                 }
//             }
//         }
//         return dist;
//     }
// };