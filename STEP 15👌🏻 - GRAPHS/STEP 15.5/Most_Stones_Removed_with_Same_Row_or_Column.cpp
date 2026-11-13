//LET NO OF STONES BE - ST , MAP CAN HAVE ATMOST 2*ST ENTRIES I MEAN EVERY STONE ROW AND COLUMN CAN BE PRESENT!!
//TC-O(ST+ST*(ALPHA(N+M+2))+ALPHA(N+M+2)*(2*ST)+O(M+N+2 (OF DSU FOR LOOP))) SC-O(2*(N+M+2)+2*ST)
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
//     int removeStones(vector<vector<int>>& stones) {
//         int n = 0 , m = 0;
//         for(auto it : stones){
//             n = max(n,it[0]);
//             m = max(m,it[1]);
//         }
//         unordered_map<int,int>stoneNodes;
//         disjointSet ds(n+m+2);
//         for(auto it : stones){
//             int x = it[0];
//             int y = it[1];
//             ds.unionByRank(x,y+n+1);
//             stoneNodes[x] = 1;
//             stoneNodes[y+n+1] = 1;
//         }
//         int cnt = 0;
//         for(auto it : stoneNodes)
//         {
//             if(ds.findUpar(it.first)==it.first) cnt++;
//         }
//         return stones.size() - cnt;
//     }
// };