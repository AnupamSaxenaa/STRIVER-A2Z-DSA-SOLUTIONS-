//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

//MAKE ALL SUBARRAYS !!

//2.BETTER SOLUTION - TC-O(2N) SC-O(1)

//ONLY IF ENTRIES ARE POSITIVE ELSE WE NEED TO YOU HASHMAP AND PREFIX SUM METHOD

// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//        int l = 0 , r = 0 , n = a.size() , len = 0;
//         long long sum = 0;
        
//         while(r<n){
//             sum+=a[r];
//             while(l<=r && sum>k){
//                 sum-=a[l];
//                 l++;
//             }
//             if(sum==k) len = max(len,r-l+1);
            
//             r++;
//         }
//         return len;
// }



//!!!!!!!!!!!NOT SURE IF THE SOLUTION IS CORRECT OR NOT!!!!!!!!!!!!!!!!
//3.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

//ONLY IF ENTRIES ARE POSITIVE ELSE WE NEED TO YOU HASHMAP AND PREFIX SUM METHOD

// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//        int l = 0 , r = 0 , n = a.size() , len = 0;
//         long long sum = 0;
        
//         while(r<n){
//             sum+=a[r];
//             if(sum>k){
//                 sum-=a[l];
//                 l++;
//             }
//             if(sum==k) len = max(len,r-l+1);
            
//             r++;
//         }
//         return len;
// }