//TC-O(E*(ALPHA(N))+V*(ALPHA(N))) SC-O(2V)
// class disjointSet{
//     vector<int>size,parent;
//     public:
//     int ee = 0;
//     disjointSet(int n){
//         size.resize(n+1,1);
//         parent.resize(n+1);
//         for(int i = 0 ; i<= n ;i++) parent[i] = i;
//     }
//     int findUpar(int node){
//         if(node==parent[node]) return node;
//         return parent[node] = findUpar(parent[node]);
//     }
//     void unionBySize(int u,int v)
//     {
//         int pu = findUpar(u);
//         int pv = findUpar(v);
//         if(pu==pv){
//             ee++;
//             return;
//         }
//         if(size[pu]>size[pv]){
//             parent[pv] = pu;
//             size[pu]+=size[pv];
//         }else{
//             parent[pu] = pv;
//             size[pv]+=size[pu];
//         }
//     }
// };
// class Solution {
// public:
//     int makeConnected(int n, vector<vector<int>>& connections) {
//         disjointSet ds(n);
//         for(auto it : connections){
//             ds.unionBySize(it[0],it[1]);
//         }
//         int nc = 0;
//         for(int i = 0 ; i < n ; i++){
//             if(ds.findUpar(i)==i) nc++;
//         }
//         if(ds.ee >= (nc-1)) return nc-1;
//         return -1;
//     }
// };