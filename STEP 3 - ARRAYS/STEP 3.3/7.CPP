//1.BRUTE SOLUTION - TC-O(NLOGN+2N) SC-O(N)

// class Solution {
//     public:
//         vector<vector<int>> merge(vector<vector<int>>& intervals) {
//             int n = intervals.size();
//             sort(intervals.begin(),intervals.end());
//             vector<vector<int>>ans;
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 int st = intervals[i][0];
//                 int en = intervals[i][1];
    
//                 if(!ans.empty() && en<=ans.back()[1]) continue;
    
//                 for(int j = i+1 ; j < n ; j++)
//                 {
//                     if(en>=intervals[j][0]) en = max(en,intervals[j][1]);
//                     else break;
//                 }
//                 ans.push_back({st,en});
//             }
            
//             return ans;
//         }
//     };

//2.OPTIMAL SOLUTION - TC-O(NLOGN+N) SC-O(N)

// class Solution {
//     public:
//         vector<vector<int>> merge(vector<vector<int>>& intervals) {
//             int n = intervals.size();
//             vector<vector<int>>ans;
//             sort(intervals.begin(),intervals.end());
    
//             for(int i = 0 ; i < n ; i++)
//             {
//                 if(ans.empty() || ans.back()[1]<intervals[i][0])
//                 {
//                     ans.push_back(intervals[i]);
//                 }
//                 else
//                 {
//                     ans.back()[1] = max(ans.back()[1],intervals[i][1]);
//                 }
//             }
//             return ans;
//         }
//     };