//1.OPTIMAL SOLUTION (COMBINATION RECURSION) - TC-O(K*C(9,K)) SC-O(K*C(9,K) + K)

// class Solution
// {
//     public:

//         void calcpls(int k, int n, vector<int> num, vector<vector< int>> &ans, int last)
//         {
//             if (last >= 10 || num.size() == k)
//             {
//                 if (num.size() == k && n == 0) ans.push_back(num);
//                 return;
//             }

//             for (int i = last; i <= 9; i++)
//             {
//                 if (i>n) break;
//                     num.push_back(i);
//                     calcpls(k, n - i, num, ans, i+1);
//                     num.pop_back();
//             }
//         }

//     vector<vector < int>> combinationSum3(int k, int n)
//     {
//         vector<vector < int>> ans;
//         vector<int> num;
//         calcpls(k, n, num, ans, 1);
//         return ans;
//     }
// };

//2.BETTER SOLUTION (BINARY RECURSION) - (Worst case) TC-O(2^N*N) SC-O(N*2^N) OR 0(N*X) .... .

// class Solution {
// public:

//     void calcpls(vector<int>& nums,int k,int n,vector<int>num,vector<vector<int>> &ans,int idx)
//     {
//         if(idx>=nums.size() || num.size()==k){
//             if(num.size()==k){
//                 if(n==0) ans.push_back(num);
//             }
//             return;
//         }

//         num.push_back(nums[idx]);
//         calcpls(nums,k,n-nums[idx],num,ans,idx+1);
//         num.pop_back();
//         calcpls(nums,k,n,num,ans,idx+1);
//     }

//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<int>nums(9);
//         iota(nums.begin(),nums.end(),1);
//         vector<vector<int>>ans;
//         vector<int>num;
//         calcpls(nums,k,n,num,ans,0);
//         return ans;
//     }
// };