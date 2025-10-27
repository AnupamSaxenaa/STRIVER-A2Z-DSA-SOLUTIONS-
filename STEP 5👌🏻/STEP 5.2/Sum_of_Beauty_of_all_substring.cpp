// 1.BRUTE SOLUTION - TC-O(N^3) SC-O(N)

// class Solution {
// public:
//     int beautySum(string s) {
//         int b = 0, n = s.size();

//         auto bvalid = [&](string sub) {
//             unordered_map<char, int> mpp;
//             for (int i = 0; i < sub.size(); i++)
//                 mpp[sub[i]]++;

//             int mini = INT_MAX;
//             int maxi = INT_MIN;

//             for (auto &p : mpp) {
//                 if (p.second > maxi) maxi = p.second;
//                 if (p.second < mini) mini = p.second;
//             }

//             return maxi - mini;
//         };

//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 int chk = bvalid(s.substr(i, j - i + 1));
//                 b += chk;
//             }
//         }

//         return b;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N^2)APPROX SC-O(1 in bc and N in wc)

// class Solution
// {
// public:
//     int beautySum(string s)
//     {
//         int n = s.size();
//         int chk = 0;

//         for (int i = 0; i < n; i++)
//         {
//             unordered_map<char, int> freq;
//             for (int j = i; j < n; j++)
//             {
//                 freq[s[j]]++;

//                 int maxi = INT_MIN;
//                 int mini = INT_MAX;

//                 for (auto &p : freq)
//                 {
//                     maxi = max(maxi, p.second);
//                     mini = min(mini, p.second);
//                 }

//                 chk += (maxi - mini);
//             }
//         }

//         return chk;
//     }
// };


