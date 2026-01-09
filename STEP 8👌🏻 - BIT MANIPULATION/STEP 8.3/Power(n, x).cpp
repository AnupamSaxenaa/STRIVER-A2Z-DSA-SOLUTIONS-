//1.OPTIMAL SOLUTION - TC-O(LOG BASE 2 N) SC-O(1)

// class Solution {
// public:
//     double myPow(double x, int n) {
//         double ans = 1;
//         long long N = n;

//         if (N < 0) {
//             x = 1 / x;
//             N = -N;
//         }

//         while(N){
//             if(N%2!=0){
//                 ans*=x;
//                 N--;
//             }else{
//                 x *= x;
//                 N/=2;
//             }
//         }

//         return ans;
//     }
// };