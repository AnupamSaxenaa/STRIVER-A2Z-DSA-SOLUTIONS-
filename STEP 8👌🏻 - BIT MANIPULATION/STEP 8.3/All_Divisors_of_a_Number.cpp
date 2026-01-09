//1.BRUTE SOLUTION - TC-O(N) SC-O(1)

//JUST ITERATE FROM 1 TO N AND WHICH EVER NUMBER DIVIDES THE ELE IT BECOMES THE DIVISOR;

//2.OPTIMAL SOLUTION - TC-O(SQRT(N)) SC-O(1) FOR SOLVING THE QUESTION NOT CONSIDERING ANS CONTAINER SPACES//

// class Solution {
//   public:
//     void print_divisors(int n) {
//         // Code here.
//         vector<int>v;
//         for(int i = 1 ; i*i <= n ; i++){
//             int temp = n;
//             if(n%i==0){
//                 v.push_back(i);
//             }
//             temp = n/i;
//             if(n%temp==0){
//                 if(temp!=i) v.push_back(temp);
//             }
//         }
//         sort(v.begin(),v.end());
//         for(auto &x : v) cout<<x<<" ";
        
//     }
// };