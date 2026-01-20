//1.OPTIMAL SOLUTION - TC-O(NLOGN + N) SC-O(N)

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end());
//         vector<vector<int>>ans;
//         if(intervals.empty()) return {{}};
//         int st = intervals[0][0] , lt = intervals[0][1];
//         for(int i = 1 ; i < intervals.size() ; i++)
//         {
//             if(intervals[i-1][1]>=intervals[i][0]){
//                 lt = intervals[i][1];
                
//             }else{
//                 ans.push_back({st,lt});
//                 st = intervals[i][0];
//                 lt = intervals[i][1];
//             }
//         }
//         ans.push_back({st,lt});
//         return ans;
//     }
// };