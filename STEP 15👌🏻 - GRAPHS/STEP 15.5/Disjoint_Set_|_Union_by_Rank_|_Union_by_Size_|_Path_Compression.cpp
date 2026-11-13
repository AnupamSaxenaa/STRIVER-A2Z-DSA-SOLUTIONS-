//1.UNION BY RANK - TC-O(N*ALPHA) for one operation of any function which is approx constant SC-O(2N)
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
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
// int main() {
//     disjointSet ds(7);
//     ds.unionByRank(1,2);
//     ds.unionByRank(2,3);
//     ds.unionByRank(4,5);
//     ds.unionByRank(6,7);
//     ds.unionByRank(5,6);
//     ds.unionByRank(3,7);
//     //if 3 and 7 are of same compo or not
//     if(ds.findUpar(3)==ds.findUpar(7)) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }

//2.UNION BY SIZE - TC-O(N*ALPHA) FOR ANY OPERATION , SC-O(2N) 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class disjointSet{
//     vector<int>size,parent;
//     public:
//     disjointSet(int n){
//         size.resize(n+1,1);
//         parent.resize(n+1);
//         for(int i = 0 ; i < n+1 ; i++) parent[i] = i;
//     }
//     int findUpar(int node){
//         if(node==parent[node]) return node;
//         return parent[node] = findUpar(parent[node]);
//     }
//     void unionBySize(int u,int v)
//     {
//         int pu = findUpar(u);
//         int pv = findUpar(v);
//         if(pu==pv) return;
//         if(size[pu]>size[pv]){
//             parent[pv] = pu;
//             size[pu]+=size[pv];
//         }else{
//             parent[pu] = pv;
//             size[pv]+=size[pu];
//         }
//     }
// };
// int main() {
//     disjointSet ds(7);
//     ds.unionBySize(1,2);
//     ds.unionBySize(2,3);
//     ds.unionBySize(4,5);
//     ds.unionBySize(6,7);
//     ds.unionBySize(5,6);
//     ds.unionBySize(3,7);
//     //if 3 and 7 are of same compo or not
//     if(ds.findUpar(3)==ds.findUpar(7)) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }