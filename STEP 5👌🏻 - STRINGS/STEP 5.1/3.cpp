//1.BETTER SOLUTION - TC - O(N) SC - O(N)
// class Solution {
// public:
//     string largestOddNumber(string num) {
//         int n = num.size();
//         int i = 0 , idx = 0;
//         bool hasOdd = false;
//         while(i<n)
//         {
//             if(num[i]=='1' || num[i]=='3' || num[i]=='5' || num[i]=='7' || num[i]=='9')
//             {
//                 idx = i;
//                 hasOdd = true;
//             }
//             i++;
//         }

//         if(hasOdd==false) return "";
//         string result = "";
//         for(int k = 0 ; k <= idx ; k++)
//         {
//             result+=num[k];
//         }
//         return result;

//     }
// };

//2.OPTIMAL SOLUTION - TC - O(N) SC - O(1)
// class Solution {
// public:
//     string largestOddNumber(string num) {
//         int n = num.size();
//         int i = 0 , idx = 0;
//         bool hasOdd = false;
//         while(i<n)
//         {
//             if(num[i]=='1' || num[i]=='3' || num[i]=='5' || num[i]=='7' || num[i]=='9')
//             {
//                 idx = i;
//                 hasOdd = true;
//             }
//             i++;
//         }

//         if(hasOdd==false) return "";
//         return num.substr(0,idx+1);

//     }
// };
