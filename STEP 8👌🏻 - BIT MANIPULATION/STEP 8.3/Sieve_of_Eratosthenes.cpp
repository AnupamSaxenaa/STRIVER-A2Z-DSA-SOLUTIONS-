//1.OPTIMAL SOLUTION - TC-O(NLOG(LOGN)) SC-O(N)

// class Solution {
// public:
//     int countPrimes(int n) {
//         vector<int>v(n+1,1);
//         for(int i = 2 ; i*i<=n ; i++){
//             if(v[i]==1){
//                 for(int j = i*i ; j<=n ; j = j+i){
//                     v[j] = 0;
//                 }
//             }
//         }

//         int cnt = 0;
//         for(int i = 2 ; i < n ; i++){
//             if(v[i]==1) cnt++;
//         }
//         return cnt;
//     }
// };