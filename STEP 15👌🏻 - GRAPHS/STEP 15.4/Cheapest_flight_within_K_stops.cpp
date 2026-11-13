//TC-O(E*K) AS AT EACH NEW STOP WE ARE PROCESSING ALL THE EDGES APPROXIMATELY
//SC-O(E+V)
// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         vector<vector<pair<int,int>>>adj(n);
//         for(int i = 0 ; i < flights.size() ; i++)
//         {
//             int u = flights[i][0];
//             int v = flights[i][1];
//             int w = flights[i][2];
//             adj[u].push_back({w,v});
//         }
//         vector<int>dist(n,1e9);
//         queue<tuple<int,int,int>>q;
//         dist[src] = 0;
//         q.push({0,src,0});
//         while(!q.empty())
//         {
//             auto [stops,node,dis] = q.front();
//             q.pop();
//             if(node==dst && stops > k) continue;
//             for(auto it : adj[node]){
//                 int wt = it.first;
//                 int node2 = it.second;
//                 int newdis = dis+wt;
//                 if(newdis<dist[node2]  && stops <= k){
//                     dist[node2] = newdis;
//                     q.push({stops+1,node2,newdis});
//                 }
//             }
//         }
//         if(dist[dst]==1e9) return -1;
//         return dist[dst];
//     }
// };