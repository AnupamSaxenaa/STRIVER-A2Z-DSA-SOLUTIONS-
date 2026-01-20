// BETTER SOLUTION - TC-O(NLOGN + N) SC-O(N+LOG(INTRO SORT))

// class Solution
// {
//     public:
//         vector<vector < int>> insert(vector<vector < int>> &intervals, vector< int > &newInterval)
//         {
//             if (intervals.empty())
//             {
//                 return {
//                     newInterval
//                 };
//             }

//             int p = newInterval[0], q = newInterval[1];
//             int st = p, lt = q;
//             vector<vector < int>> ans;
//             bool makingchanges = false;
//             bool changes = false;
//             for (int i = 0; i < intervals.size(); i++)
//             {
//                 int a = intervals[i][0], b = intervals[i][1];

//                 if ((p <= a && q >= a && q <= b) || (a <= p && b >= q) || (p >= a && q >= b && b >= p) || (a>=p && q>=b))
//                 {
//                     st = min(st, a);
//                     lt = max(lt, b);
//                     makingchanges = true;
//                     changes = true;
//                 }
//                 else
//                 {
//                     if (makingchanges)
//                     {
//                         ans.push_back({ st,
//                             lt });
//                         makingchanges = false;
//                     }
//                     ans.push_back({ a,
//                         b });
//                 }
//             }
//             if (makingchanges)
//             {
//                 ans.push_back({ st,
//                     lt });
//                 makingchanges = false;
//             }
//             if(changes==false){
//                 ans.push_back({st,lt});
//             }
//             sort(ans.begin(),ans.end());
//             return ans;
//         }
// };

// 2.OPTIMAL SOLUTION - TC-O(2N) SC-O(N)

// class Solution
// {
//     public:
//         vector<vector < int>> insert(vector<vector < int>> &intervals, vector< int > &newInterval)
//         {
//             if (intervals.empty())
//             {
//                 return {
//                     newInterval
//                 };
//             }

//             int p = newInterval[0], q = newInterval[1];
//             int st = p, lt = q;
//             vector<vector < int>> ans;
//             bool makingchanges = false;
//             bool changes = false;
//             int con = -1;
//             for (int i = 0; i < intervals.size(); i++)
//             {
//                 int a = intervals[i][0], b = intervals[i][1];

//                 if ((p <= a && q >= a && q <= b) || (a <= p && b >= q) || (p >= a && q >= b && b >= p) || (a >= p && q >= b))
//                 {
//                     st = min(st, a);
//                     lt = max(lt, b);
//                     makingchanges = true;
//                     changes = true;
//                 }
//                 else
//                 {
//                     if (makingchanges)
//                     {
//                         ans.push_back({ st,
//                             lt });
//                         makingchanges = false;
//                     }
//                     if (q < a && q < b && changes==false)
//                     {
//                         ans.push_back({ p,
//                             q });
//                         con = i;
//                         makingchanges = false;
//                         changes = true;
//                         break;
//                     }
//                     ans.push_back({ a,
//                         b });
//                 }
//             }
//             if (makingchanges)
//             {
//                 ans.push_back({ st,
//                     lt });
//                 makingchanges = false;
//             }
//             if (changes == false)
//             {
//                 ans.push_back({ st,
//                     lt });
//             }
//             if (con != -1)
//             {
//                 for (int i = con; i < intervals.size(); i++)
//                 {
//                     ans.push_back({ intervals[i][0],
//                         intervals[i][1] });
//                 }
//             }
//             return ans;
//         }
// };

// 3.OPTIMAL SOLUTION - TC-O(N) SC-O(N)

// class Solution
// {
// public:
//     vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
//     {
//         int n = intervals.size();
//         vector<vector<int>> ans;
//         int i = 0;
//         // left part
//         while (i < n && intervals[i][1] < newInterval[0])
//         {
//             ans.push_back({intervals[i][0], intervals[i][1]});
//             i++;
//         }
//         while (i < n && intervals[i][0] <= newInterval[1])
//         {
//             newInterval[0] = min(newInterval[0], intervals[i][0]);
//             newInterval[1] = max(newInterval[1], intervals[i][1]);
//             i++;
//         }
//         ans.push_back({newInterval[0], newInterval[1]});
//         while (i < n)
//         {
//             ans.push_back({intervals[i][0], intervals[i][1]});
//             i++;
//         }

//         return ans;
//     }
// };