//1.BRUTE SOLUTION - 

//YOU CAN MAKE IT YOUR WAY!!

//2.OPTIMAL SOLUTION - TC-O(LOG BASE TOTAL EVEN INDICES + TOTAL ODD INDICES) SC-O(LOG BASE TOTAL EVEN INDICES + TOTAL ODD INDICES)

// class Solution {
// public:
//     long long MOD = 1e9+7;

//     long long expo(long long x,long long n){
//         if(n==0) return 1;
//         if(n<0){
//             x = 1/x;
//             n = -n;
//         }

//         long long half = expo(x,n/2);
//         if(n%2==0) return (half*half)%MOD;
//         else return (half*half*x)%MOD;
//     }

//     int countGoodNumbers(long long n) {
//         long long t_ei = (n+1)/2;
//         long long t_oi = n/2;
//         return (int)((expo(5,t_ei)*expo(4,t_oi)%MOD));
//     }
// };