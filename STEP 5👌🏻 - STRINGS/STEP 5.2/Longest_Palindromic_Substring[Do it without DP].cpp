// 1.BRUTE SOLUTION - TC-O(N^3) SC-O(1)

// class Solution {
// public:
//     bool isPalindrome(int l,int r,string& s)
//     {
//         while(l<r)
//         {
//             if(s[l]!=s[r]) return false;
//             l++;r--;
//         }
//         return true;
//     }

//     string longestPalindrome(string s) {
//         int maxi = INT_MIN;
//         string smax = "";
//         int n = s.size();
//         for(int i = 0 ; i < n ; i++)
//         {
//             for(int j = i ; j < n ; j ++)
//             {
//                 bool res = isPalindrome(i,j,s);
//                 if(res==true){
//                     if(maxi < (j-i+1))
//                     {
//                         smax = s.substr(i,j-i+1);
//                         maxi = j-i+1;
//                     }
//                 }
//             }
//         }
//         return smax;
//     }
// };

// 2.OPTIMAL SOLUTION - SC-O(1) TC-O(N^2) (SLINDING WINDOW)

// class Solution
// {
// public:
//     string longestPalindrome(string s)
//     {

//         int n = s.size();
//         if (n <= 1)
//             return s;

//         string smax = "";

//         auto findp = [&](int l, int r, string &s)
//         {
//             while (l >= 0 && r < n && s[l] == s[r])
//             {
//                 r++;
//                 l--;
//             }

//             return s.substr(l + 1, r - l - 1);
//         };

//         for (int i = 0; i < n; i++)
//         {
//             string odd = findp(i, i + 1, s);
//             string even = findp(i, i, s);

//             if (odd.size() > smax.size())
//                 smax = odd;
//             if (even.size() > smax.size())
//                 smax = even;
//         }

//         return smax;
//     }
// };