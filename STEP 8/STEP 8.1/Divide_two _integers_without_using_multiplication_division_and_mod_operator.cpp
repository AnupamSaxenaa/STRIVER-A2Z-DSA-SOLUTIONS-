//1.BRUTE SOLUTION - TC-O(DIVIDEND) SC-O(1)

// class Solution {
// public:
//     int divide(int dividend, int divisor) {

//         if(dividend==0) return 0;

//         long long res = 0 , t = 0 , divid = dividend , divis = divisor;
//         bool dividendpositive = true , divisorpositive = true;

//         if(dividend<0) {
//             dividendpositive = false;
//             divid*=-1;
//         }
//         if(divisor<0){
//             divisorpositive = false;
//             divis*=-1;
//         }

    
//         while(divis + res <= divid){
//             res+=divis;
//             t++;
//         }

//         if((dividendpositive==false && divisorpositive==true) || (dividendpositive==true && divisorpositive==false)){
//             if(res<INT_MIN) return INT_MIN;
//             else return (-1)*(t);
//         }else{
//             if(res>INT_MAX) return INT_MAX;
//         }

//         return t;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O((LOGN)^2) SC-O(1)

// class Solution {
// public:
//     int divide(int dividend, int divisor) {

//         if(dividend==0) return 0;
//         if(dividend==divisor) return 1;

//         long long res = 0 , t = 0 , divid = dividend , divis = divisor;
//         bool dividendpositive = true , divisorpositive = true;

//         if(dividend<0) {
//             dividendpositive = false;
//             divid*=-1;
//         }
//         if(divisor<0){
//             divisorpositive = false;
//             divis*=-1;
//         }

//         while(divid>=divis){
//             int cnt = 0;
//             while(divid>=(divis<<(cnt+1))) cnt++;
//             divid-=(divis<<cnt);
//             res+=(divis<<cnt);
//             t+=(1<<cnt);
//         }
    


//         if((dividendpositive==false && divisorpositive==true) || (dividendpositive==true && divisorpositive==false)){
//             if(res<INT_MIN) return INT_MIN;
//             else return (-1)*(t);
//         }else{
//             if(res>INT_MAX) return INT_MAX;
//         }

//         return t;
//     }
// };