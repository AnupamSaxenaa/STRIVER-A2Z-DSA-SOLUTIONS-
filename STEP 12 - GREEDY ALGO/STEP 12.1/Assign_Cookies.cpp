//1.OPTIMAL SOLUTION - TC-O(NLOGN + MLOGM + N+M) SC-O(1)

// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int i = 0 , j = 0 , cnt = 0 , n = g.size() , m = s.size();
//         while(i<n && j<m){
//             if(g[i]<=s[j]){
//                 cnt++;
//                 i++;
//             }
//             j++;
//         }
//         return cnt;
//     }
// };

