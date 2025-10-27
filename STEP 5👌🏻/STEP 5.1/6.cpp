//1.BETTER SOLUTION - TC - O(N^2) SC - O(1)
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if(s==goal) return true;
//         if(s.size()!=goal.size()) return false;
//         if(s.size()==2)
//         {
//             swap(s[0],s[1]);
//             if(s==goal) return true;
//             return false;
//         }

//         for(int i = 0 ; i < s.size()-1 ; i++)
//         {
//             swap(s[0],s[s.size()-1]);
//             int j = 0 , k = 1;
//             while(k<(s.size()-1))
//             {
//                 swap(s[j++],s[k++]);
//             }
//             if(s==goal) return true;
//         }
//         return false;
//     }
// };

//2.OPTIMAL SOLUTION - TC - O(N) SC - O(N)
// ******* uses string concatenation and find
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if(s==goal) return true;
//         if(s.size()!=goal.size()) return false;
//         if(s.size()==2)
//         {
//             swap(s[0],s[1]);
//             if(s==goal) return true;
//             return false;
//         }
//         s = s+s;
//         if(s.find(goal)==-1) return false;
//         return true;
//     }
// };
