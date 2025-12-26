//1.OPTIMAL SOLUTION - TC-O(N+NLOG(LOG(N))+QLOGN) SC-O(N)

// class Solution{
// public:
//     vector<vector<int>> primeFactors(vector<int>& queries){
//         const int MAXN = 200000;

//         // smallest prime factor array
//         vector<int> spf(MAXN + 1);
//         for(int i = 1; i <= MAXN; i++) spf[i] = i;

//         // sieve to compute SPF
//         for(int i = 2; i * i <= MAXN; i++){
//             if(spf[i] == i){
//                 for(int j = i * i; j <= MAXN; j += i){
//                     if(spf[j] == j)
//                         spf[j] = i;
//                 }
//             }
//         }

//         vector<vector<int>> ans;

//         for(int x : queries){
//             vector<int> factors;
//             while(x != 1){
//                 factors.push_back(spf[x]);
//                 x /= spf[x];
//             }
//             ans.push_back(factors);   
//         }

//         return ans;
//     }
// };
