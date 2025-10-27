//1.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

// class Solution
// {
// public:
//     int romanToInt(string s)
//     {
//         vector<pair<string, int>> a = {{"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000}};
//         vector<pair<string, int>> spec = {{"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}};

//         int i = 0;
//         int sum = 0;
//         while (i < s.size())
//         {
//             if (s[i] == 'C')
//             {
//                 if ((i + 1) < s.size() && s[i + 1] == 'D')
//                 {
//                     sum += spec[4].second;
//                     i += 2;
//                 }
//                 else if ((i + 1) < s.size() && s[i + 1] == 'M')
//                 {
//                     sum += spec[5].second;
//                     i += 2;
//                 }
//                 else
//                 {
//                     sum += 100; 
//                     i++;
//                 }
//             }
//             else if (s[i] == 'X')
//             {
//                 if ((i + 1) < s.size() && s[i + 1] == 'L')
//                 {
//                     sum += spec[2].second;
//                     i += 2;
//                 }
//                 else if ((i + 1) < s.size() && s[i + 1] == 'C')
//                 {
//                     sum += spec[3].second;
//                     i += 2;
//                 }
//                 else
//                 {
//                     sum += 10;
//                     i++;
//                 }
//             }
//             else if (s[i] == 'I')
//             {
//                 if ((i + 1) < s.size() && s[i + 1] == 'V')
//                 {
//                     sum += spec[0].second;
//                     i += 2;
//                 }
//                 else if ((i + 1) < s.size() && s[i + 1] == 'X')
//                 {
//                     sum += spec[1].second;
//                     i += 2;
//                 }
//                 else
//                 {
//                     sum += 1;
//                     i++;
//                 }
//             }
//             else
//             {
//                 for (auto x : a)
//                 {
//                     if (x.first[0] == s[i])
//                     {
//                         sum += x.second;
//                         break;
//                     }
//                 }
//                 i++;
//             }
//         }
//         return sum;
//     }
// };

//2.OPTIMAL BUT MORE GOOD - SAME COMPLEXITY

// class Solution {
// public:
//     int romanToInt(string s) {
//         int n = s.size(); 

//         unordered_map<char,int> mpp = {
//             {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
//             {'C', 100}, {'D', 500}, {'M', 1000}
//         };
    
//         int sum = 0;
//         int i = 0;
//         while(i < n) {
//             if((i + 1) < n && mpp[s[i]] < mpp[s[i + 1]]) 
//                 sum -= mpp[s[i]];
//             else 
//                 sum += mpp[s[i]];
//             i++;
//         }
//         return sum;
//     }
// };
