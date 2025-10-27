//1.BRUTE SOLUTION - TC-O(ROOT OF N) SC-O(1)

// int floorSqrt(int n)
// {
//     // Write your code here.
//     if(n==0) return 0;
//     int x = 1;
//     while((x*x)<=n)
//     {
//         if((x*x)==n) return x;
//         else x++;
//     }
//     return x-1;
// }

//2.OPTIMAL SOLUTION - TC-O(LOGN) SC-O(1)

// class Solution {
//     public:
//         int mySqrt(int x) {
//             if(x==0) return 0;
    
//             int low = 1;
//             int high = x;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 long long sqr = (long long)mid*mid;
//                 if(sqr==(long long)x) return mid;
//                 else if(sqr<(long long)x)
//                 {
//                     low = mid+1;
//                 }
//                 else
//                 {
//                     high = mid-1;
//                 }
//             }
//             return high;
//         }
//     };
