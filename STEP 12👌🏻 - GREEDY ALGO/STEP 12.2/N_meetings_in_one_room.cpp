//1.OPTIMAL SOLUTION - TC-O(N+N+NLOGN) SC-O(N)

//?IMPORTANTLY TUPLES KE BARE MA SIKHNE KO MILA HAI?//

// class Solution {
//   public:
//     int maxMeetings(vector<int>& start, vector<int>& end) {

//         int n = start.size();
//         vector<tuple<int,int,int>> t; 

//         for (int i = 0; i < n; i++) {
//             t.push_back({end[i], start[i], i + 1});
//         }

//         sort(t.begin(), t.end());

//         int cnt = 1;
//         int freeTime = get<0>(t[0]);

//         for (int i = 1; i < n; i++) {
//             if (get<1>(t[i]) > freeTime) {
//                 cnt++;
//                 freeTime = get<0>(t[i]);
//             }
//         }

//         return cnt;
//     }
// };
