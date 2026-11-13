//LET n*m = N
//TC-O(Q*4*(3*ALPHA(N))) SC-O(2N+N+Q)
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
// vector<int> numOfIslandsII(int n, int m, vector<vector<int>> &q){
// 	// Write your code here.
// 	int N = n*m;
// 	disjointSet ds(N);
// 	vector<int>vis(N,0);
// 	vector<int>ans;
// 	int currIsl = 0;
// 	for(auto it : q)
// 	{
// 		int x = it[0];
// 		int y = it[1];
// 		int nodeNo = (x*m+y);
// 		if(vis[nodeNo]==0){
// 			vis[nodeNo] = 1;
// 			currIsl++;
// 			//exploring 4 directions
// 			if(x-1>=0 && vis[m*(x-1)+y]==1){
// 				if(ds.findUpar(nodeNo)!=ds.findUpar(m*(x-1)+y)){
// 					currIsl--;
// 					ds.unionByRank(nodeNo,m*(x-1)+y);
// 				}
// 			}
// 			if(x+1<n && vis[m*(x+1)+y]==1){
// 				if(ds.findUpar(nodeNo)!=ds.findUpar(m*(x+1)+y)){
// 					currIsl--;
// 					ds.unionByRank(nodeNo,m*(x+1)+y);
// 				}
// 			}
// 			if(y-1>=0 && vis[m*(x)+(y-1)]==1){
// 				if(ds.findUpar(nodeNo)!=ds.findUpar(m*x+(y-1))){
// 					currIsl--;
// 					ds.unionByRank(nodeNo,m*x+(y-1));
// 				}
// 			}
// 			if(y+1<m && vis[m*x+(y+1)]==1){
// 				if(ds.findUpar(nodeNo)!=ds.findUpar(m*x+(y+1))){
// 					currIsl--;
// 					ds.unionByRank(nodeNo,m*x+(y+1));
// 				}
// 			}
// 			ans.push_back(currIsl);
// 		}
// 	}
// 	return ans;
// }