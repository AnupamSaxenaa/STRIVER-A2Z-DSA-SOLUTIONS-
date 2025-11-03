//1.RECURSION - TC-O(2^N*N^2) SC-O(2^N*N + N)

// class Solution
// {
//     public:

//         bool palchk(string s){
//             string temp = s;
//             reverse(temp.begin(),temp.end());
//             return (s==temp);
//         }

//         void calcpls(string &s, vector<string> collec, vector<vector< string>> &ans, int idx)
//         {
//             if (idx >= s.size())
//             {
//                 ans.push_back(collec);
//                 return;
//             }

//             int i = idx;
//             while (i < s.size())
//             {
//                 bool chk = palchk(s.substr(idx, i - idx + 1));
//                 if(chk==true){
//                         collec.push_back(s.substr(idx, i - idx + 1));
//                         calcpls(s, collec, ans, i + 1);
//                         collec.pop_back();
//                 }
//                 i++;
//             }
//         }

//     vector<vector < string>> partition(string s)
//     {
//         vector<vector < string>> ans;
//         vector<string> collec;
//         calcpls(s, collec, ans, 0);
//         return ans;
//     }
// };