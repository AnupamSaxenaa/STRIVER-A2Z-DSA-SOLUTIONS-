//1.BRUTE SOLUTION - TC-O(N*(N+M)) SC-O(256)
// class Solution
// {
//     public:
//         string minWindow(string s, string t)
//         {
//             int n = s.size(), m = t.size(), minlen = INT_MAX, sidx = -1;
//             for (int i = 0; i < n; i++)
//             {
//                 vector<int> h(256, 0);
//                 for (auto &x: t) h[x]++;
//                 int cnt = 0;
//                 for (int j = i; j < n; j++)
//                 {
//                     h[s[j]]--;
//                     if (h[s[j]] >= 0)
//                     {
//                         cnt++;
//                     }

//                     if (cnt == m)
//                     {
//                         minlen = min(minlen, j - i + 1);
//                         sidx = i;
//                         break;
//                     }
//                 }
//             }

//             if (sidx == -1) return "";
//             else return s.substr(sidx, minlen);
//         }
// };

//2.OPTIMAL SOLUTION - TC-O(2*N+M) SC-O(256) CONSIDERING NO COLLISIONS
// class Solution {
// public:
//     string minWindow(string s, string t) {
//         int n = s.size(), m = t.size() , req = t.size(),cnt = 0,minlen = INT_MAX,sidx = -1 , r = 0 , l = 0;
//         unordered_map<char,int>mpp;
//         for(auto &x : t) mpp[x]++;

//         while(r<n){
//             if(mpp[s[r]]>0) cnt++;
//             mpp[s[r]]--;

//             while(l<=r && cnt==req){
//                 if(minlen>(r-l+1)){
//                     minlen = r-l+1;
//                     sidx = l;
//                 }
//                 mpp[s[l]]++;
//                 if(mpp[s[l]]>0) cnt--;
//                 l++;
//             }

//             r++;
//         }

//         if(sidx==-1) return "";
//         else return s.substr(sidx,minlen);
//     }
// };