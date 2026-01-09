//1.BRUTE SOLUTION

//GIVE ANY BEST SORTING TECHNIQUES FROM ALL WE HAVE LEARNED!!

//2.BETTER SOLUTION

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //#ifndef ONLINE_JUDGE
// //	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// //#endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {0,0,1,1,2,0,2,1,0,2,2,0};
//     int cnt0 = 0;
//     int cnt1 = 0;
//     int cnt2 = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]==0) cnt0++;
//         else if(v[i]==1) cnt1++;
//         else cnt2++;
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(i<cnt0) v[i] = 0;
//         else if(i<cnt0+cnt1) v[i] = 1;
//         else v[i] = 2;
//     }
    
//     for (auto i : v)
//     {
//         cout<<i<<" ";
//     }
    

//     return 0;
// }

// tc->O(2n) sc->O(1)

//3.OPTIMISED SOLUTION(DUTCH NATIONAL FLAG ALGORITHM)

// #include<bits/stdc++.h>
// using namespace std;
// #include <bits/stdc++.h> 
// void sort012(int arr[], int n)
// {
//    //   Write your code here

//         int low = 0;
//         int mid = 0;
//         int high = n-1;

//         while(mid<=high)
//         {
//             if(arr[mid]==1) mid++;
//             else if(arr[mid]==0) 
//             {
//                 swap(arr[mid],arr[low]);
//                 low++;
//                 mid++;
//             }
//             else{
//                 swap(arr[mid],arr[high]);
//                 high--;
//             }
//         }
// }
// int main()
// {
// //#ifndef ONLINE_JUDGE
// //	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// //#endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     int arr[] = {0,2,1,0,1,1,0,2,0};
//     int n = sizeof(arr)/sizeof(int);
//     sort012(arr,n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }