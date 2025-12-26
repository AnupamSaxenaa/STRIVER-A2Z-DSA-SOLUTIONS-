//1.OPTIMAL SOLUTION - TC-O(N*SQRT(M)) SC-O(N)

// class Solution {
// public:
//     int distinctPrimeFactors(vector<int>& nums) {
//         unordered_set<int>s;

//         for(auto &x : nums){
//             for(int i = 2 ; i <= sqrt(x) ; i++){
//                 while(x%i==0){
//                     x/=i;
//                     s.insert(i);
//                 }
//             }
//             if(x>1) s.insert(x);
//         }
//         return s.size();
//     }
// };


