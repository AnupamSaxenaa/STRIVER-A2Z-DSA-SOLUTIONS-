//1.BRUTE RECURSION - TC-O(2^N*NLOGX) SC-O(N*K)

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
//     public:
//         void calcpls(vector<int> &candidates, int target, vector<vector< int >> &ans, vector< int > num, int idx, set< vector< int>> &checker)
//         {
//             if (idx >= candidates.size() || target <= 0)
//             {
//                 if (target == 0)
//                 {
//                     sort(num.begin(), num.end());
//                     checker.insert(num);
//                 }
//                 return;
//             }

//             num.push_back(candidates[idx]);
//             calcpls(candidates, target - candidates[idx], ans, num, idx + 1, checker);
//             num.pop_back();
//             calcpls(candidates, target, ans, num, idx + 1, checker);
//             return;
//         }

//     vector<vector < int>> combinationSum2(vector<int> &candidates, int target)
//     {
//         set<vector < int>> checker;
//         vector<vector < int>> ans;
//         vector<int> num;
//         calcpls(candidates, target, ans, num, 0, checker);

//         vector<vector < int>> v(checker.begin(), checker.end());
//         return v;
//     }
// };


//2.OPTIMAL RECURSION - TC-O(2^N*K) SC-O(K*X) K CAN BE N (WC)

// class Solution
// {
// public:
//     void calcpls(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> num, int idx)
//     {
//         if (idx >= candidates.size() || target <= 0)
//         {
//             if (target == 0)
//                 ans.push_back(num);
//             return;
//         }

//         for (int i = idx; i < candidates.size(); i++)
//         {
//             if (i > idx && candidates[i] == candidates[i - 1])
//                 continue;
//             if(candidates[i]>target) break;

//             num.push_back(candidates[i]);
//             calcpls(candidates, target - candidates[i], ans, num, i + 1);
//             num.pop_back();
//         }
//     }

//     vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
//     {
//         sort(candidates.begin(), candidates.end());
//         vector<vector<int>> ans;
//         vector<int> num;
//         calcpls(candidates, target, ans, num, 0);
//         return ans;
//     }
// };
