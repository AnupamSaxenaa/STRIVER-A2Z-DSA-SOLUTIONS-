//TC-O(2E+2V) SC-O(E+4V)
// class Solution {
// public:
//     vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//         int v = numCourses,e = prerequisites.size();
//         vector<vector<int>>adj(v);
//         vector<int>indegree(v);
//         for(int i = 0 ; i < e ; i++)
//         {
//             int x = prerequisites[i][0];
//             int y = prerequisites[i][1];
//             adj[y].push_back(x);
//             indegree[x]++;
//         }
//         vector<int>ans;
//         queue<int>q;
//         for(int i = 0 ; i < v ; i++)
//         {
//             if(indegree[i]==0) q.push(i);
//         }
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             ans.push_back(node);
//             for(auto it : adj[node])
//             {
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         if(ans.size()!=v) return {};
//         return ans;
//     }
// };