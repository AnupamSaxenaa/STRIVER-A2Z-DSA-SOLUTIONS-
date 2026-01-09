//1 OPTIMAL SOLUTION - TC - O(N) SC-O(N)

// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         string result = "";
//         int depth = 0;
//         for(auto x : s)
//             {
//                 if(x=='(')
//                 {
//                     if(depth>0) result+=x;
//                     depth++;
//                 }
//                 else
//                 {
//                     depth--;
//                     if(depth>0) result+=x;
//                 }
//             }
//     return result;
//     }
// };

//2.BETTER SOLUTION - TC-O(N) SC-O(N)

// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         stack<char>st;
//         string result;
//         for(auto x : s)
//         {
//             if(x=='(')
//             {
//                 if(!st.empty())
//                 {
//                     result+=x;
//                 }
//                 st.push(x);
//             }

//             else if(x==')')
//             {
//                 st.pop();
//                 if(!st.empty())
//                 {
//                     result+=x;
//                 }
//             }
//         }
//         return result;
//     }
// };