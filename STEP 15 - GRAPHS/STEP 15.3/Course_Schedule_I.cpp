//USING KAHN'S ALGO (TOPO SORT) (BFS) - 
//TC-O(2V+2E) SC-O(E+3V)
// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         vector<vector<int>>adj(numCourses);
//         vector<int>indegree(numCourses,0);
//         for(int i = 0 ; i < prerequisites.size() ; i++)
//         {
//             int x = prerequisites[i][0];
//             int y = prerequisites[i][1];
//             adj[y].push_back(x);
//             indegree[x]++;
//         }
//         queue<int>q;
//         for(int i = 0 ; i < numCourses ; i++)
//         {
//             if(indegree[i]==0) q.push(i);
//         }
//         int cnt = 0;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             cnt++;
//             for(auto it : adj[node])
//             {
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         return (cnt==numCourses) ? true : false;
//     }
// };

//USING DFS -
//TC-O(2E+2V) SC-O(E+4V)
// class Solution {
// public:
//     bool calcpls(vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathvis,int node)
//     {
//         vis[node] = 1;
//         pathvis[node] = 1;
//         for(auto it : adj[node]){
//             if(vis[it])
//             {
//                 if(pathvis[it]) return true;
//                 continue;
//             }
//             if(calcpls(adj,vis,pathvis,it)) return true;
//         }
//         pathvis[node] = 0;
//         return false;
//     }
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         vector<vector<int>>adj(numCourses);
//         for(int i = 0 ; i < prerequisites.size() ; i++)
//         {
//             int x = prerequisites[i][0];
//             int y = prerequisites[i][1];
//             adj[y].push_back(x);
//         }
//         vector<int>vis(numCourses,0);
//         vector<int>pathvis(numCourses,0);
//         for(int i = 0 ; i < numCourses ; i++)
//         {
//             if(!vis[i]) {
//                 if(calcpls(adj,vis,pathvis,i)) return false;
//             }
//         }
//         return true;
//     }
// };