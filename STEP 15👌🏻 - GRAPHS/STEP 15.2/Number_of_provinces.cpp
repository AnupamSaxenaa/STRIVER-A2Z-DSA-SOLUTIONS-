// TC-O(N^2)<-IN THIS CASE WHEN ADJACENCY MATRIX IS NOT GIVE TC WILL BE O(N^2) BUT IF ADJACENCY LIST GIVEN, TC WILL BE O(N+(2E+V)) APPROX TO O(N) SC-O(2N)
// class Solution {
// public:
//     void dfs(int start,vector<int>&vis,vector<vector<int>>& isConnected)
//     {
//         //base
//         if(vis[start]==1) return;
//         //work
//         vis[start] = 1;
//         int i = 0;
//         for(auto it : isConnected[start])
//         {
//             if(it){
//                 dfs(i,vis,isConnected);
//             }
//             i++;
//         }
//         return;
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size(),cnt = 0;
//         vector<int>vis(n,0);
//         for(int i = 0; i < n ; i++)
//         {
//             if(vis[i]==0){
//                 cnt++;
//                 dfs(i,vis,isConnected);
//             }
//         }
//         return cnt;
//     }
// };

