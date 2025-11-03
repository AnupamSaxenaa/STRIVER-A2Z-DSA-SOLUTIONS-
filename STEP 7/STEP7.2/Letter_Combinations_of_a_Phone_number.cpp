//1.COMBINATIONAL RECURSION - TC-O(N*4^N) SC-O(N*4^N)

// class Solution {
// public:

//     vector<string>map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//     void calcpls(string temp,vector<string> &ans,string &digits,int idx)
//     {
//         //base case
//         if(idx>=digits.size() || temp.size()==digits.size()){
//             if(digits.size()==temp.size()) ans.push_back(temp);
//             return;
//         }

//         //small work
//         string curr = map[digits[idx]-'0'];
//         for(auto &x : curr){
//             temp.push_back(x);
//             calcpls(temp,ans,digits,idx+1);
//             temp.pop_back();
//         }
//     }

//     vector<string> letterCombinations(string digits) {
//         string temp = "";
//         vector<string>ans;
//         calcpls(temp,ans,digits,0);
//         return ans;
//     }
// };