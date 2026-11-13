//let avg size of every string be k AND avg no of string in one row be m
//TC-O(N*M*(K (COST OF FIND IS O(1) BUT AS STRING SO O(K) AS CHAR BY CHAR MATCHING) 
//+ α(N)) + NM*(ALPHA(N)+K(COST OF STRING COPYING TO ANS)) + NMKLOGM)) ,  SC-O(2N+N*M*K(FOR WC MAP SC)+N*M*K+NMK)
// class disjointSet
// {
//     vector<int> rank, parent;
//     public:
//         disjointSet(int n)
//         {
//             rank.resize(n + 1, 0);
//             parent.resize(n + 1);
//             for (int i = 0; i < n + 1; i++) parent[i] = i;
//         }
//     int findUpar(int node)
//     {
//         if (node == parent[node]) return node;
//         return parent[node] = findUpar(parent[node]);
//     }
//     void unionByRank(int u, int v)
//     {
//         if (findUpar(u) == findUpar(v)) return;
//         int pu = findUpar(u);
//         int pv = findUpar(v);
//         if (rank[pu] > rank[pv]) parent[pv] = pu;
//         else if (rank[pu] < rank[pv]) parent[pu] = pv;
//         else
//         {
//             parent[pu] = pv;
//             rank[pv]++;
//         }
//     }
// };
// class Solution
// {
//     public:
//         vector<vector < string>> accountsMerge(vector<vector < string>> &accounts)
//         {
//             int n = accounts.size();
//             disjointSet ds(n);
//             unordered_map<string, int> mpp;
//             vector<vector < string>> ans(n);
//             for (int i = 0; i < n; i++)
//             {
//                 ans[i].push_back(accounts[i][0]);
//                 int father = i;
//                 for (int j = 1; j < accounts[i].size(); j++)
//                 {
//                     if (mpp.find(accounts[i][j]) == mpp.end())
//                     {
//                         mpp[accounts[i][j]] = father;
//                     }
//                     else
//                     {
//                         int node = mpp[accounts[i][j]];
//                         ds.unionByRank(father, node);
//                     }
//                 }
//             }
//             for (auto it: mpp)
//             {
//                 string s = it.first;
//                 int node = it.second;
//                 int fnode = ds.findUpar(node);
//                 ans[fnode].push_back(s);
//             }
//             vector<vector < string>> result;
//             for (int i = 0; i < n; i++)
//             {
//                 if (ans[i].size() > 1)
//                 {
//                     sort(ans[i].begin() + 1, ans[i].end());
//                     result.push_back(ans[i]);
//                 }
//             }
//             return result;
//         }
// };