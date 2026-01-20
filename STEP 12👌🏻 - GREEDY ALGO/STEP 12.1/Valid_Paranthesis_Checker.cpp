//1.BETTER SOLUTION - TC-O(3^N) SC-O(N)

// class Solution {
// public:
//     bool calcpls(string &s, int cnt, int idx) {
//         // invalid state
//         if (cnt < 0) return false;

//         // base case
//         if (idx == s.size()) {
//             return cnt == 0;
//         }

//         if (s[idx] == '(') {
//             return calcpls(s, cnt + 1, idx + 1);
//         }
//         else if (s[idx] == ')') {
//             return calcpls(s, cnt - 1, idx + 1);
//         }
//         else { // '*'
//             return calcpls(s, cnt + 1, idx + 1) ||  // treat as '('
//                    calcpls(s, cnt - 1, idx + 1) ||  // treat as ')'
//                    calcpls(s, cnt, idx + 1);        // treat as empty
//         }
//     }

//     bool checkValidString(string s) {
//         return calcpls(s, 0, 0);
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1) THODA TOUGH TO UNDERSTAND THE CONCEPT MUG THIS UP IF NO IDEA WHATS GOING ON

// class Solution {
// public:
//     bool checkValidString(string s) {
//         int mini = 0 , maxi = 0 , n = s.size();
//         for(auto &x : s){
//             if(x=='(') {
//                 mini+=1;
//                 maxi+=1;
//             }else if(x==')'){
//                 mini-=1;
//                 maxi-=1;
//             }else{
//                 mini-=1;
//                 maxi+=1;
//             }
//             if(mini<0) mini = 0;
//             if(maxi<0) return false;
//         }

//         return mini==0;
//     }
// };

