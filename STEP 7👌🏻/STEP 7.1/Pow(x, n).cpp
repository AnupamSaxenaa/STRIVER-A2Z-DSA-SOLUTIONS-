//1.BRUTE SOLUTION - TC-O(|N|) SC-O(1)

//N BAAR ITERATE KRO AND ANS = 1 KO BAAR BAAR ANS*=X KRTE RHO

// class Solution {
// public:
//     double myPow(double x, int n) {
//         double ans = 1;
//         long long N = n;

//         if (N < 0) {
//             x = 1 / x;
//             N = -N;
//         }

//         for (long long i = 0; i < N; i++)
//             ans *= x;

//         return ans;
//     }
// };

//2.RECURSIVE SOLUTION - TC-O(LOG BASE 2 |N|) SC-O(LOG BASE 2 |N|) STACK SPACE

// class Solution {
// public:
//     double myPow(double x, int n) {
//         long long N = n;
//         if(N==0) return 1;
//         if(N<0){
//             x = 1/x;
//             N = -(long long)N;
//         }

//         double half = myPow(x,N/2);
//         if(N%2==0) return half*half;
//         else return half*half*x;
//     }
// };