//TC-O(ELOGE+E*V*ALPHA*2) SC-O(2V)
// class disjointSet{
//     vector<int>rank,parent;
//     public:
//     disjointSet(int n){
//         rank.resize(n+1,0);
//         parent.resize(n+1);
//         for(int i = 0 ; i <= n ; i++) parent[i] = i;
//     }
//     int findSupP(int node){
//         if(node==parent[node]) return node;
//         return parent[node] = findSupP(parent[node]);
//     }
//     void unionByRank(int u, int v){
//      int pu = findSupP(u);
//      int pv = findSupP(v);
//      if(pu==pv) return;
//      if(rank[pu]>rank[pv]) parent[pv] = pu;
//      else if(rank[pu]<rank[pv]) parent[pu] = pv;
//      else{
//          parent[pu] = pv;
//          rank[pv]++;
//      }
//     }
// };
// class Solution {
//   public:
//     int kruskalsMST(int V, vector<vector<int>> &edges) {
//         // code here
//         int wt = 0;
//         disjointSet ds(V);
//         sort(edges.begin(),edges.end(),[](vector<int>&a,vector<int>&b){
//             return a[2]<b[2];
//         });
//         for(auto it : edges){
//             int wtt = it[2];
//             int u = it[0];
//             int v = it[1];
//             if(ds.findSupP(u)==ds.findSupP(v)) continue;
//             ds.unionByRank(u,v);
//             wt+=wtt;
//         }
//         return wt;
//     }
// };