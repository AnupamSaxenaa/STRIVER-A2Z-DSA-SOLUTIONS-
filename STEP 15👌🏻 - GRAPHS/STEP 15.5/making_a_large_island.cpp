//TC-O(N*(2*ALPHA(N)) + N*(4*ALPHA(N))) SC-O(2N)
// class disjointSet
// {
// public:
//     vector<int> size, parent;
//     disjointSet(int n)
//     {
//         size.resize(n, 1);
//         parent.resize(n);
//         for(int i = 0; i < n; i++)
//             parent[i] = i;
//     }
//     int findUpar(int node)
//     {
//         if(node == parent[node])
//             return node;
//         return parent[node] = findUpar(parent[node]);
//     }
//     void unionBySize(int u, int v)
//     {
//         int pu = findUpar(u);
//         int pv = findUpar(v);
//         if(pu == pv)
//             return;
//         if(size[pu] > size[pv])
//         {
//             parent[pv] = pu;
//             size[pu] += size[pv];
//         }
//         else
//         {
//             parent[pu] = pv;
//             size[pv] += size[pu];
//         }
//     }
// };
// class Solution
// {
// public:
//     int largestIsland(vector<vector<int>>& grid)
//     {
//         int n = grid.size();
//         int N = n * n;
//         disjointSet ds(N);
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(grid[i][j] == 0)
//                     continue;
//                 int node = i * n + j;
//                 if(i + 1 < n && grid[i+1][j] == 1)
//                 {
//                     ds.unionBySize(node, (i+1)*n + j);
//                 }
//                 if(j + 1 < n && grid[i][j+1] == 1)
//                 {
//                     ds.unionBySize(node, i*n + j + 1);
//                 }
//             }
//         }
//         int ans = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(grid[i][j] == 1)
//                     continue;
//                 int cnt = 1;
//                 unordered_set<int> components;
//                 if(i - 1 >= 0 && grid[i-1][j] == 1)
//                     components.insert(ds.findUpar((i-1)*n + j));
//                 if(i + 1 < n && grid[i+1][j] == 1)
//                     components.insert(ds.findUpar((i+1)*n + j));
//                 if(j - 1 >= 0 && grid[i][j-1] == 1)
//                     components.insert(ds.findUpar(i*n + j - 1));
//                 if(j + 1 < n && grid[i][j+1] == 1)
//                     components.insert(ds.findUpar(i*n + j + 1));
//                 for(auto root : components)
//                     cnt += ds.size[root];
//                 ans = max(ans, cnt);
//             }
//         }
//         if(ans == 0)
//             return n * n;
//         return ans;
//     }
// };