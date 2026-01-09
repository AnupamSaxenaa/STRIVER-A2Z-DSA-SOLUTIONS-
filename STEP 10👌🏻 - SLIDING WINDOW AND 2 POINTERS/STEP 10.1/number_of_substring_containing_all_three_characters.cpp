//1.BRUTE SOLUTION - TC-O(N^2) SC-O(3)

//TRY ALL POSSIBILITIES//

//2.BETTER SOLUTION - TC-O(2*N) SC-O(3)

// class Solution
// {
// public:
//     int numberOfSubstrings(string s)
//     {
//         int l = 0, r = 0, cnt = 0, n = s.size();
//         vector<int> mpp(3, 0);

//         while (r < n)
//         {
//             mpp[s[r] - 'a']++;

//             while (l <= r && mpp[0] >= 1 && mpp[1] >= 1 && mpp[2] >= 1)
//             {
//                 cnt += (n - r);
//                 mpp[s[l] - 'a']--;
//                 l++;
//             }

//             r++;
//         }

//         return cnt;
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(3)

// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int n = s.size() , r = 0 , cnt = 0;
//         vector<int>v(3,-1);
//         while(r<n){
//             v[s[r]-'a'] = r;
//             if(s[0]!=-1 && s[1]!=-1 && s[2]!=-1){
//                 int mini = min(v[0],v[1]);
//                 mini = min(mini,v[2]);
//                 cnt+=(mini+1);
//             }
//             r++;
//         }
//         return cnt;
//     }
// };
