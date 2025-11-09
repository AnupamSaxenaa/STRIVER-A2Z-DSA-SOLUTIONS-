//RECURSIVE OPTIMAL - WC TC-O(N*2^N) SC-O(N*2^N) as it follows fibonacci series patter which grows roughly 2^n and for copying n string to each section in vector takes n time when i do v.push_back(s) it takes s.size() time for copying + n space is taken and 2^n space taken for stack space

// class Solution {
// public:
//     void generate(string s,int n,vector<string> &ans){
//         if(n==s.size()){
//             ans.push_back(s);
//             return;
//         }
//         if(s.back()=='0'){
//             generate(s+"1",n,ans);
//         }
//         else{
//             generate(s+"1",n,ans);
//             generate(s+"0",n,ans);
//         }

//         return;
//     }

//     vector<string> validStrings(int n) {
//         vector<string>ans;
//         generate("0",n,ans);
//         generate("1",n,ans);
//         return ans;
//     }
// };

//RECURSION BRUTE -  TC-O(2^N*N) SC-O(N + N*2^N) RECURSION DEPTH + ANS STORAGE

// class Solution {
// public:
//     bool isValid(string s) {
//         return (s.find("00") == string::npos);
//     }

//     void generate(string s, int n, vector<string> &ans) {
//         if (s.size() == n) {
//             if (isValid(s))
//                 ans.push_back(s);
//             return;
//         }

//         generate(s + "0", n, ans);
//         generate(s + "1", n, ans);
//     }

//     vector<string> validStrings(int n) {
//         vector<string> ans;
//         generate("", n, ans);
//         return ans;
//     }
// };
