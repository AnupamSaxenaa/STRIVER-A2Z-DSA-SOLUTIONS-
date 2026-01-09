//DP IS MUCH BETTER BUT LETS USE GREEDY HERE AS IT WORKS HERE

//1.OPTIMAL SOLUTION - TC-O(V) SC-O(1)

// vector<int> minCoins(int V) {
//     int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
//     int n = 9;
//     vector<int> ans;
//     for (int i = n - 1; i >= 0; i--) {
//         while (V >= coins[i]) {
//             V -= coins[i];
//             ans.push_back(coins[i]);
//         }
//     }
//     return ans;
// }