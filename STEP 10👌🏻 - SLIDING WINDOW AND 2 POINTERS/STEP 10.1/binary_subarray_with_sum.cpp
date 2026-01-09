//1. BETTER SOLUTION - TC-O(N*(MAP KI TC)) SC-O(N)

// class Solution {
// public:

//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         unordered_map<int,int>mpp;
//         mpp[0] = 1;
//         int n = nums.size() , sum = 0, cnt = 0;
//         for(int i = 0 ; i < n ; i++){
//             sum+=nums[i];
//             int rem = sum-goal;
//             if(mpp.find(rem)!=mpp.end()){
//                 cnt+=mpp[rem];
//             }
//             mpp[sum]++;
//         }
//         return cnt;
//     }
// };

//2.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

//GENERATE ALL SUBARRAYS//

//3.OPTIMAL SOLUTION - TC-O(2*N) SC-O(1)

// class Solution {
// public:

//     int docalc(const vector<int>& nums,int goal)
//     {
//         int n = nums.size(), l = 0 , r = 0 , cnt = 0;
//         long long sum = 0;

//         while(r<n){
//             if(goal<0) break;
//             sum+=nums[r];
//             while(sum>goal){
//                 sum-=nums[l];
//                 l++;
//             }
//             cnt+=(r-l+1);
//             r++;
//         }

//         return cnt;

//     }

//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int f1 = docalc(nums,goal);
//         int f2 = docalc(nums,goal-1);
//         return (f1-f2);
//     }
// };