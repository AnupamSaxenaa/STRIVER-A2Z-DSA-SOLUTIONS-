//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1)

// vector<int> findMissingRepeatingNumbers(vector < int > a) {
//     // Write your code here
//     int n = a.size();
//     int sum = 0;
//     int twiceval = -1;
//     for(int i = 0 ; i < n ; i++)
//     {
//         sum+=a[i];
//         for(int j = i+1 ; j < n ; j++)
//         {
//             if(a[i]==a[j]) twiceval = a[j];
//         }
//     }
//     int missingval = (n*(n+1))/2-(sum-twiceval);
//     vector<int>ans = {twiceval,missingval};
//     return ans;
// }

//2.BETTER SOLUTION - using hashing TC-O(2N) SC-O(N)

// vector<int> findMissingRepeatingNumbers(vector < int > a) {
//     // Write your code here
//     int n = a.size();
//     vector<int>temp(n,0);
    
//     for(int i = 0 ; i < n ; i++)
//     {
//         temp[a[i]-1]++;
//     }
//     int missingval = 0;
//     int twiceval = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         if(temp[i]==2) twiceval = i+1;
//         if(temp[i]==0) missingval = i+1;
//     }
//     vector<int>ans = {twiceval,missingval};
//     return ans;
// }

//3.

//OPTIMAL SOLUTION  - 1 using maths with no extra space TC-O(N) SC-O(1);

// vector<int> findMissingRepeatingNumbers(vector < int > a) {
//     // Write your code here
//     int n = a.size();
//     long long sumofa = 0;
//     long long sumofsqofa = 0;
//     long long N = n;

//     for(int i = 0 ; i < n ; i++)
//     {
//         sumofa+=a[i];
//         sumofsqofa+=(a[i]*a[i]);
//     }

//     long long diffofsums = (N*(N+1))/2-sumofa;
//     long long diffofsqsums = ((N*(N+1)*(2*N+1))/6-sumofsqofa)/diffofsums;

//     int missing = (diffofsums+diffofsqsums)/2;
//     int repeating = missing-diffofsums;

//     return {repeating,missing};
// }

//OPTIMAL SOLUTION - 2 COME AFTER BIT MANUPULATION