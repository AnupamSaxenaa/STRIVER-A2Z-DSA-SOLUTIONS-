//1.OPTIMAL SOLUTION - TC-O(NLOGN + N) SC-O(1)

// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         if(intervals.size()<=1) return 0;
//         sort(intervals.begin(),intervals.end(),[](vector<int>a,vector<int>b){
//             return a[1]<b[1];
//         });
//         int cnt = 0;
//         int r = intervals[0][1];
//         for(int i = 1 ; i < intervals.size() ; i++)
//         {
//             if(r<=intervals[i][0]){
//                 r = max(r,intervals[i][1]);
//             }else cnt++;
//         }
//         return cnt;
//     }
// };