//1.OPTIMAL SOLUTION - TC-O(2*N + NLOGN) SC-O(N)

// class Solution {
//   public:
//     double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
//         vector<pair<double, double>> v;
//         for (int i = 0; i < wt.size(); i++) {
//             double ratio = (double)val[i] / wt[i];
//             v.push_back({ratio, wt[i]});
//         }
//         sort(v.rbegin(), v.rend());
//         double ans = 0.0;
//         for (int i = 0; i < wt.size(); i++) {
//             if (capacity == 0) break;
//             else if (capacity <= v[i].second) {
//                 ans += v[i].first * capacity;
//                 capacity -= capacity;
//             } else {
//                 ans += v[i].first * v[i].second;
//                 capacity -= v[i].second;
//             }
//         }
//         return ans;
//     }
// };
