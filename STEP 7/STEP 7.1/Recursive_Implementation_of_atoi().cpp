//1.OPTIMAL SOLUTION (ITERATIVE) - TC-O(N) SC-O(1)

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

//2.BETTER SOLUTION (RECURSIVE) - TC-O(N) SC-O(N) STACK SPACE

// #include<bits/stdc++.h>
// class Solution {
// public:

//     long long savage21(string &s,int i,long long num,int sign){
//         if(s[i]>'9' || s[i]<'0' || i>=s.size()) return num*sign;
//         num = num*10+(s[i]-'0');
//         if(num*sign > INT_MAX) return INT_MAX;
//         if(num*sign < INT_MIN) return INT_MIN;
//         return savage21(s,i+1,num,sign);
//     }

//     int myAtoi(string s) {
//         int sign = 1;
//         int n = s.size();
//         int i = 0;
//         while(i<n && s[i]==' '){
//             i++;
//         }

//         if(i<n && s[i]=='-') {
//             sign = -1;
//             i++;
//         }
//         else if(i<n && s[i]=='+') i++;
        
//         long long ans = savage21(s,i,0,sign);
//         return ans;
//     }
// };
