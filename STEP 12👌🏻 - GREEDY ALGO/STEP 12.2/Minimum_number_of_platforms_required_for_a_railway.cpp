// 1.BRUTE SOLUTION - TC-O(N^2) SC-O(1) //SOMEHOW CODE NOT WORKING//

// class Solution
// {
// public:
//     int minPlatform(vector<int> &arr, vector<int> &dep)
//     {
//         int n = arr.size();
//         int ans = 1;

//         for (int i = 0; i < n; i++)
//         {

//             int count = 1;

//             for (int j = i + 1; j < n; j++)
//             {

//                 if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
//                     (arr[j] >= arr[i] && arr[j] <= dep[i]))
//                 {
//                     count++;
//                 }
//             }

//             ans = max(ans, count);
//         }

//         return ans;
//     }
// };

// 2.OPTIMAL SOLUTION - TC-O(NLOGN + NLOGN + 2*N) SC-O(1)

// class Solution
// {
// public:
//     int minPlatform(vector<int> &arr, vector<int> &dep)
//     {
//         // code here
//         int n = arr.size();
//         sort(arr.begin(), arr.end());
//         sort(dep.begin(), dep.end());
//         int l = 0, r = 0, cnt = 0, ans = 1;
//         while (l < n && r < n)
//         {
//             if (arr[l] > dep[r])
//             {
//                 cnt--;
//                 r++;
//             }
//             else
//             {
//                 cnt++;
//                 l++;
//                 ans = max(ans, cnt);
//             }
//         }
//         return ans;
//     }
// };