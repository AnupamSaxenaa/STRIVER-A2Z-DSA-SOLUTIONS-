//1.OPTIMIZED SOLUTION - TC-O(N) SC-O(1)

// class Solution {
// public:
//     int myAtoi(string s) {
//         int i = 0;
//         int n = s.size();
//         long long num = 0;

//         bool sign = true;

//         while(i<n &&s[i]==' ')
//         i++;
//         if(i<n &&s[i]=='-'){
//             sign = false;
//             i++;
//         }
//         else if(i<n &&s[i]=='+') 
//         {
//             sign = true;
//             i++;
//         }
//         if(i<n &&s[i]==0)
//             while(i<n &&s[i]==0) i++;
//         while(i<n)
//         {
//             if(i<n && s[i]>='0' && s[i]<='9')
//                 {
//                     num = num*10+(s[i]-'0');
//                     if(sign==true)
//                         {
//                             if(num>INT_MAX) return INT_MAX;
//                         }
//                     else 
//                         {
//                             if(num*-1<INT_MIN) return INT_MIN; 
//                         }

//                 }
//             else break;
//             i++;
//         }
//         if(sign==true) return num;
//         return num*-1;
//     }
// };