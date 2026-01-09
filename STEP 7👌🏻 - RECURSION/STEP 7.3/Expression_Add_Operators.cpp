//1.RECURSION - 

// ✅ Final Complexity Summary
// Type	Complexity	Explanation
// Time	O(3ⁿ × n)	At each of (n−1) gaps, 3 choices; building string O(n)
// Auxiliary Space	O(n)	Recursion depth & temporary strings
// Output Space	O(k × n)	For k valid expressions

// class Solution {
// public:
//     void calcpls(string &num, int target, vector<string> &ans,
//                  long long prev, long long res, int idx, string currs)
//     {
//         if (idx == num.size()) {
//             if (res == target)
//                 ans.push_back(currs);
//             return;
//         }

//         string temp = "";
//         long long t = 0;

//         for (int i = idx; i < num.size(); i++) {
//             if (i > idx && num[idx] == '0') break;
//             temp += num[i];
//             t = t * 10 + (num[i] - '0');

//             if (currs == "") {
//                 calcpls(num, target, ans, t, t, i + 1, temp);
//             } else {
//                 calcpls(num, target, ans, t, res + t, i + 1, currs + "+" + temp);
//                 calcpls(num, target, ans, -t, res - t, i + 1, currs + "-" + temp);
//                 calcpls(num, target, ans, prev * t, res - prev + prev * t, i + 1, currs + "*" + temp);
//             }
//         }
//     }

//     vector<string> addOperators(string num, int target) {
//         vector<string> ans;
//         calcpls(num, target, ans, 0, 0, 0, "");
//         return ans;
//     }
// };
