//1.BRUTE RECURSION - TC - O(2^N*N) SC-O(N+N+ST.SIZE()) RECURSION DEPTH
// class Solution {
// public:

//     unordered_set<string>st;
//     bool calcpls(string &s,int len)
//     {
//         // BASE CONDITION
//         if (len == s.size()) return true;

//         for (int i = len; i < s.size(); i++)
//         {
//             string sub = s.substr(len, i - len + 1);
//             if (st.find(sub) != st.end()) {
//                 if (calcpls(s,i + 1)) 
//                     return true;
//             }
//         }

//         return false;
//     }

//     bool wordBreak(string s, vector<string>& wordDict) {
//         for(auto &x : wordDict){
//             st.insert(x);
//         }
//         return calcpls(s,0);
//     }
// };


//this solution is giving tle do using dp

//2.dp age padhoge

