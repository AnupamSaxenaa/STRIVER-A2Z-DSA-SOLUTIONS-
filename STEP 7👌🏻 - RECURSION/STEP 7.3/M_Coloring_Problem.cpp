//1.RECURSION - TC-O(V^M) SC-O(N(COLOR ARRAY) + N(AUXILIARY STACK SPACE)...MORE)

// class Solution {
//   public:
  
//     bool safe(vector<vector<int>> &adj,int v,int m,int node,vector<int>&color,int tr)
//     {
//         for(int neighbours : adj[node]){
//             if(color[neighbours]==tr) return false;
//         }
//         return true;
//     }
    
//     bool calcpls(vector<vector<int>> &adj,int v,int m,int node,vector<int>&color)
//     {
//         //base conditionå
//         if(node==v) return true;
//         //work
        
//         for(int i = 1 ; i <= m ; i++){
//             if(safe(adj,v, m,node,color,i)){
//                 color[node] = i;
//                 if(calcpls(adj,v,m,node+1,color)) return true;
//                 color[node] = 0;
//             }
//         }
        
//         return false;
//     }
    
  
//     bool graphColoring(int v, vector<vector<int>> &edges, int m) {
//         // code here
        
//         //adjacency matrix creqtion
//         vector<vector<int>> adj(v);
//         for (auto &e : edges) {
//         int u = e[0];
//         int vip = e[1];
//         adj[u].push_back(vip);
//         adj[vip].push_back(u); 
//         }
//         vector<int>color(v,0);
//         return calcpls(adj,v,m,0,color);
//     }
// };