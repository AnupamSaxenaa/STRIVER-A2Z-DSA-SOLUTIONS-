//1.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map<char,int>mpp;
//         int n = s.size();
//         for(auto x : s)
//             mpp[x]++;

//         vector<pair<char,int>> vec(mpp.begin(),mpp.end());
//         sort(vec.begin(),vec.end(),[](pair<char,int>a,pair<char,int>b){
//             return a.second > b.second;
//         });
//         string ans = "";
//         for(auto x : vec)
//         {
//             for(int i = 0 ; i < x.second ; i++)
//             {
//                 ans+=x.first;
//             }
//         }
//         return ans;
//     }
// };


// 2.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// typedef pair<char,int> P;
// class Solution {
// public:
//     string frequencySort(string s) {
//         vector<P>v(256);
//         for(auto &x:s)
//         {
//             int freq = v[x].second;
//             v[x] = {x,freq+1};
//         }

//         auto cmp = [&](P &a,P &b)
//         {
//             return a.second>b.second;
//         };

//         sort(v.begin(),v.end(),cmp);

//         string ans = "";
//         for(auto &x : v)
//         {
//             int freq = x.second;
//             for(int i = 0 ; i < freq ; i++)
//                 ans+=x.first;
//         }

//         return ans;
//     }
// };