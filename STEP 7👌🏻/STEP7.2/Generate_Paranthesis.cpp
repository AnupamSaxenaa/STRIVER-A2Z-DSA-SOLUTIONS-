//RECURSION OPTIMAL - TC-O((4^N)ROOT(N)) SC-O((4^N)ROOT(N)) FOUND USING NTH CATALON SERIES!
//WC TC-O(4^N) SC-O(2N+2N*4^N)

// class Solution {
// public:

//     void generate(string s,vector<string>&ans,int close,int open)
//     {
//         if(close==0 && open==0){
//             ans.push_back(s);
//             return;
//         }

//         if(open>0) generate(s+"(",ans,close,open-1);
//         if(close>open) generate(s+")",ans,close-1,open);
//         return;
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string>ans;
//         generate("",ans,n,n);
//         return ans;
//     }
// };

//RECURSION BRUTE - TC-O(2N*4^N) SC-O(2N+2N*4^N) 2N=RECURSION DEPTH AND 4^N*2N FOR DELIVERING ANS

// class Solution {
// public:  

//     bool isValid(string s,int n){
//         int t = 0;
//         for(auto &x : s){
//             if(x=='(') t++;
//             else t--;
//             if(t<0) return false;
//         }
//         return ((!t)?true:false);
//     }

//     void generate(string s,vector<string>&ans,int n)
//     {
//         if(s.size()==n){
//             bool validity = isValid(s,n);
//             if(validity)
//             ans.push_back(s);

//             return;
//         }
//         generate(s+"(",ans,n);
//         generate(s+")",ans,n);
//         return;
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string>ans;
//         generate("",ans,2*n);
//         return ans;
//     }
// };

