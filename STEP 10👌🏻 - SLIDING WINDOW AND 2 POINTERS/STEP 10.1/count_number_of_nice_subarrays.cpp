//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1)
//GENERATE ALL SUBARRAYS//

//2.BETTER SOLUTION - TC-O(N*(TC OF MAP USED)) SC-O(N) //HASH+PREFIX SUM//
// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int cnt = 0 , n = nums.size();
//         long long sum = 0;
//         unordered_map<long long,int>m;
//         m[0] = 1;
//         for(int i = 0 ; i < n ; i++)
//         {
//             sum+=(nums[i]%2);
//             long long rem = sum-k;
//             if(m.find(rem)!=m.end()) cnt+=m[rem];
//             m[sum]++;
//         }   

//         return cnt;
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(2*N) SC-O(1)
// class Solution {
// public:

//     int docalc(const vector<int>& nums ,int k)
//     {
//         int l = 0 , r = 0 , n = nums.size() , cnt = 0;
//         long long sum = 0;
//         while(r<n)
//         {
//             sum+=(nums[r]%2);
//             while(l<=r && sum>k)
//             {
//                 sum-=(nums[l]%2);
//                 l++;
//             }
//             cnt+=(r-l+1);
//             r++;
//         }

//         return cnt;
//     }

//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int fk = docalc(nums,k);
//         int fkm = docalc(nums,k-1);
//         return fk-fkm;
//     }
// };