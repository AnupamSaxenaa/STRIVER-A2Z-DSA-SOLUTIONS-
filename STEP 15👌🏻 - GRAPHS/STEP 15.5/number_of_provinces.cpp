//TC-O(V^2*(V*ALPHA)+V*(V*ALPHA)) SC-O(2V)
// class disjointSet{
//     vector<int>rank,parent;
//     public:
//     disjointSet(int n){
//         rank.resize(n+1,0);
//         parent.resize(n+1);
//         for(int i = 0 ; i < n+1 ; i++) parent[i] = i;
//     }
//     int findUpar(int node){
//         if(node==parent[node]) return node;
//         return parent[node] = findUpar(parent[node]);
//     }
//     void unionByRank(int u,int v)
//     {
//         if(findUpar(u)==findUpar(v)) return;
//         int pu = findUpar(u);
//         int pv = findUpar(v);
//         if(rank[pu]>rank[pv]) parent[pv] = pu;
//         else if(rank[pu]<rank[pv]) parent[pu] = pv;
//         else {
//             parent[pu] = pv;
//             rank[pv] ++;
//         }
//     }
// };
// class Solution {
// public:
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int v = isConnected.size();
//         disjointSet ds(v);
//         for(int i = 0 ; i < v ;i++){
//             for(int j = 0 ; j < v ;j++){
//                 if(isConnected[i][j]==1){
//                     ds.unionByRank(i,j);
//                 }
//             }
//         }
//         int cnt = 0;
//         for(int i = 0 ; i < v ; i++) if(ds.findUpar(i)==i) cnt++;
//         return cnt;
//     }
// }; 