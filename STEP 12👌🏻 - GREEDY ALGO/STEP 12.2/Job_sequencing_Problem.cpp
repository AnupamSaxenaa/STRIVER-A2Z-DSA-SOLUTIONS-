//1.BRUTE SOLUTION - TC-O(N+NLOGN+N*MAXDEADLINE) SC-O(MAXDEADLINE)

// class Solution {
// public:
//     vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
//         int n = deadline.size();
//         vector<pair<int,int>> con;
//         int maxi = INT_MIN;

//         for (int i = 0; i < n; i++) {
//             con.push_back({profit[i], deadline[i]});
//             maxi = max(maxi, deadline[i]);
//         }

//         sort(con.rbegin(), con.rend());

//         vector<int> v(maxi + 1, -1);
//         int ans = 0, cnt = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = con[i].second; j >= 1; j--) {
//                 if (v[j] == -1) {
//                     ans += con[i].first;
//                     cnt++;
//                     v[j] = 1;
//                     break;
//                 }
//             }
//         }

//         return {cnt, ans};
//     }
// };

//2.BETTER SOLUTION - TC-O(N+NLOGN+DLOGD+NLOGD) SC-O(D+N) D-MAXDEADLINE

// class Solution {
//   public:
//     vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
//         // code here
//         int n = deadline.size(),maxi = INT_MIN;
//         vector<pair<int,int>>con;
//         for(int i = 0 ; i < n ; i++)
//         {
//             maxi = max(maxi,deadline[i]);
//             con.push_back({profit[i],deadline[i]});
//         }
        
//         sort(con.rbegin(),con.rend());
//         int ans = 0 ,cnt = 0;
//         set<int>s;
//         for(int i = 1 ; i<=maxi ;i++)
//             s.insert(i);
            
//         for(int i = 0 ; i < n ; i++)
//         {
//             auto it = s.upper_bound(con[i].second);
//             if(it==s.begin()) continue;
//             --it;
//             cnt++;
//             ans+=con[i].first;
//             s.erase(it);
//         }
//         return {cnt,ans};
//     }
// };