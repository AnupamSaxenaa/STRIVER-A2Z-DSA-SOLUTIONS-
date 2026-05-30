//FOR POSITIVE NUMBERS ONLY
//1.TABULATION APPROACH - TC-O(N*K+K) SC-O(K)
// int minSubsetSumDifference(vector<int>& arr, int n)
// {
// 	                int totsum = accumulate(arr.begin(),arr.end(),0),k = totsum;
//                 vector<bool> dp(k + 1, false);
//                 dp[k] = true;
//                 for (int idx = n - 1; idx >= 0; idx--)
//                 {
//                     vector<bool> temp(k + 1, false);
//                     for (int sum = 0; sum <= k; sum++)
//                     {
//                         bool take = false;
//                         if (sum <= k - arr[idx]) take = dp[sum + arr[idx]];
//                         bool nottake = dp[sum];
//                         temp[sum] = (take || nottake);
//                     }
//                     dp = temp;
//                 }
//                 int mini = INT_MAX;
//                 for(int t = 0 ; t <= (totsum+1)/2 ; t++)
//                 {
//                     if(dp[t]==true)
//                         mini = min(mini,abs(2*t-totsum));
//                 }
//                 return mini;
// }

//FOR ALL 
//MEET IN THE MIDDLE APPROACH - TC-O(2^N*N) SC-O(2^N)
// class Solution
// {
// public:
//     int minimumDifference(vector<int> &nums)
//     {
//         int N = nums.size(), n = N / 2;
//         long long sum = accumulate(nums.begin(), nums.end(), 0LL);

//         vector<vector<int>> left(n + 1), right(n + 1);

//         for (int i = 0; i < (1 << n); i++)
//         {
//             int sz = 0;
//             long long ls = 0, rs = 0;

//             for (int j = 0; j < n; j++)
//             {
//                 if (i & (1 << j))
//                 {
//                     sz++;
//                     ls += nums[j];
//                     rs += nums[n + j];
//                 }
//             }

//             left[sz].push_back(ls);
//             right[sz].push_back(rs);
//         }

//         for (int i = 0; i <= n; i++)
//             sort(right[i].begin(), right[i].end());

//         long long res = LLONG_MAX;

//         for (int sz = 0; sz <= n; sz++)
//         {
//             for (auto &a : left[sz])
//             {
//                 int rsz = n - sz;
//                 auto &v = right[rsz];

//                 long long b = (sum - 2 * a) / 2;

//                 auto itr = lower_bound(v.begin(), v.end(), b);

//                 if (itr != v.end())
//                     res = min(res, llabs(sum - 2 * (a + *itr)));

//                 if (itr != v.begin())
//                 {
//                     itr--;
//                     res = min(res, llabs(sum - 2 * (a + *itr)));
//                 }
//             }
//         }

//         return (int)res;
//     }
// };