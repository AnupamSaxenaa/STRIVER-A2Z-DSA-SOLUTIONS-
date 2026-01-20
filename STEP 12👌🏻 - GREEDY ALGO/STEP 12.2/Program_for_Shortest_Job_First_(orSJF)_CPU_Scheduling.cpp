//1.OPTIMAL SOLUTION - TC-O(N+NLOGN) SC-O(1)

// class Solution {
//   public:
//     long long solve(vector<int>& bt) {
//         // code here
//         int n = bt.size();
//         sort(bt.begin(),bt.end());
//         long long t = 0 , sum = 0;
//         for(int i = 0 ; i < n-1 ; i++)
//         {
//             t+=bt[i];
//             sum+=t;
//         }
//         return sum/n;
//     }
// };