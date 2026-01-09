//1.BRUTE SOLUTION -> 

// #include<bits/stdc++.h>
// using namespace std;

// void tsubarrays(vector<int>v,int k)
// {
//     int cnt = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < v.size(); j++)
//         {
//             sum+=v[j];
//             if(sum==k)  cnt++;
//         }
        
//     }
//     cout<<cnt;
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {1,2,5,6,-1,0,-5,3};
//     tsubarrays(v,5);

//     return 0;
// }

// TC->O(n^2) SC->O(1)

//2.OPTIMAL SOLUTION ->

// class Solution {
//     public:
//         int subarraySum(vector<int>& nums, int k) {
//             map<long long , int>mpp;
//             mpp[0] = 1;
        
//             long long sum = 0;
//             int cnt = 0;
    
//             for(int i = 0 ; i < nums.size() ; i++)
//             {
//                 sum+=nums[i];
//                 long long rem = sum-k;
//                 if(mpp.find(rem)!=mpp.end())
//                 {
//                     cnt+=mpp[rem];
//                     mpp[sum]++;
//                 }
//                 else mpp[sum]++;
    
//             }
//             return cnt;
//         }
//     };
    
    //TC - > O(NlogN) SC - > O(N)