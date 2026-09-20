//TC-O(ELOGV) SC-O(E+V) AC , SC-O(V^2+V+E) WC
// class Solution {
// public:
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//         vector<vector<pair<int,int>>>adj(n+1);
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         vector<int>dist(n+1,1e9);
//         for(int i = 0 ; i < times.size(); i++)
//         {
//             int u = times[i][0];
//             int v = times[i][1];
//             int w = times[i][2];
//             adj[u].push_back({w,v});
//         }
//         dist[k] = 0;
//         pq.push({0,k});
//         while(!pq.empty()){
//             auto [dist1,node] = pq.top();
//             pq.pop();
//             for(auto it : adj[node]){
//                 int dist2 = it.first;
//                 int node2 = it.second;
//                 if(dist1+dist2<dist[node2]){
//                     dist[node2] = dist1+dist2;
//                     pq.push({dist1+dist2,node2});
//                 }
//             }
//         }
//         int ans = INT_MIN;
//         for(int i = 1 ; i < dist.size() ; i++)
//         {
//             if(dist[i]==1e9) return -1;
//             ans=max(ans,dist[i]);
//         }
//         return ans;
//     }
// };