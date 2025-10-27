//1.BRUTE SOLUTION - TC-O(NTH ROOT OF M)*(LOG BASE 2 N (FOR POWER)) SC-O(1)

// int NthRoot(int n, int m) {
//     // Write your code here.
//     int ans = 1;
//     while(pow(ans,n)<=m)
//     {
//       if(pow(ans,n)==m) return ans; //LOG BASE 2 N (FOR POWER)
//       else ans++;
//     }
//     if(pow(ans,n)!=m) return -1;
  
//   }

//2.OPTIMAL SOLUTION - TC-O((LOG BASE 2 M)*N(thats the tc for power function)) SC-O(1)

// long long powe(int mid,int n,int m)
// {
//   long long ans = 1;
//   for(int i = 1 ; i <= n ; i++)
//   {
//     if(ans>m) break; 
//     ans*=mid;
//   }
//   return ans;
// }

// int NthRoot(int n, int m) {
//   // Write your code here.

//   int low = 1;
//   int high = m;

//   while(low<=high)
//   {
//     int mid = low+(high-low)/2;
//     long long nth = powe(mid,n,m); 
//     if(nth==m) return mid;
//     else if(nth>m) high = mid-1;
//     else low = mid+1;
//   }
//   return -1;

// }