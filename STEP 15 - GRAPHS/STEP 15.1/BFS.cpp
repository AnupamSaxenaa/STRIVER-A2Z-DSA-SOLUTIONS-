//TC-O(N+2E) SC-O(3N) 2E = TOTAL DEGREE
// vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
//     // Write your code here.
//     vector<int>bfs;
//     vector<int>vis(n,0);
//     queue<int>q;
//     q.push(0);
//     vis[0] = 1;
//     while(!q.empty())
//     {
//         int v = q.front();
//         q.pop();
//         bfs.push_back(v);
//         for(auto it : adj[v]){
//             if(!vis[it]){
//                 q.push(it);
//                 vis[it] = 1;
//             }
//         }
//     }
//     return bfs;
// }