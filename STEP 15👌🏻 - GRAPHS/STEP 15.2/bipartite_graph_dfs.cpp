// TC-O(V+2E) SC-O(2V)
// class Solution
// {
//     public:
//         bool isBipartite(vector<vector < int>> &graph)
//         {
//             int n = graph.size();
//             vector<int> c(n, -1);
//             for (int i = 0; i < n; i++)
//             {
//                 if (c[i] == -1)
//                 {
//                     stack<int> s;
//                     s.push(i);
//                     c[i] = 0;
//                     while (!s.empty())
//                     {
//                         int node = s.top();
//                         s.pop();
//                         for (auto it: graph[node])
//                         {
//                             if (c[it] != -1 && c[it] == c[node]) return false;
//                             if (c[it] != -1) continue;
//                             c[it] = 1 - c[node];
//                             s.push(it);
//                         }
//                     }
//                 }
//             }
//             return true;
//         }
// };


//RECURSIVE SOLUTION - TC-O(V+2E) SC-O(2V)
// class Solution
// {
//     public:
//         bool calcpls(vector<vector < int>> &graph,vector<int>&c,int col,int node)
//         {
//             c[node] = col;
//             for(auto it : graph[node])
//             {
//                 if(c[it]!=-1 && c[it]==col) return false;
//                 if(c[it]!=-1) continue;
//                 if(calcpls(graph,c,1-c[node],it)==false) return false;
//             }
//             return true;
//         }
//         bool isBipartite(vector<vector < int>> &graph)
//         {
//             int n = graph.size();
//             vector<int> c(n, -1);
//             for(int i = 0 ; i < n ; i++)
//             {
//                 if(c[i]==-1){
//                     if(calcpls(graph,c,0,i)==false) return false;
//                 }
//             }
//             return true;
//         }
// };