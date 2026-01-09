//exactly similiar to step10.1 > fruit into the basket question.

//1.BETTER SOLUTION - TC-O(2*N) SC-O(K)

// int kDistinctChars(int k, string &str) {
//     int l = 0, r = 0, maxx = 0, n = str.size();
//     unordered_map<char, int> mpp;

//     while (r < n) {
//         mpp[str[r]]++;

//         while (mpp.size() > k) {
//             mpp[str[l]]--;
//             if (mpp[str[l]] == 0)
//                 mpp.erase(str[l]);
//             l++;
//         }

//         maxx = max(maxx, r - l + 1);
//         r++;
//     }

//     return maxx;
// }


//2.OPTIMAL SOLUTION - TC-O(N) SC-O(K)

// #include<bits/stdc++.h>
// int kDistinctChars(int k, string &str) {
//     int l = 0, r = 0, maxx = 0, n = str.size();
//     unordered_map<char, int> mpp;

//     while (r < n) {
//         mpp[str[r]]++;

//         if (mpp.size() > k) {
//             mpp[str[l]]--;
//             if (mpp[str[l]] == 0)
//                 mpp.erase(str[l]);
//             l++;
//         }

//         maxx = max(maxx, r - l + 1);
//         r++;
//     }

//     return maxx;
// }


//3.BRUTE SOLUTION - TC-O(N^2) SC-O(K)

//YOU KNOW IT VERY WELL!!!!!





/// K DEPENDS LIKE IF ALL LETTERS THEN K = 256 , IF LOWERCASE ALPHAS THEN K = 26 ...