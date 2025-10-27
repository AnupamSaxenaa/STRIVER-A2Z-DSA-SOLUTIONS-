//1.BRUTE SOLUTION

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //#ifndef ONLINE_JUDGE
// //	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// //#endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {-2,-4,-3,0,32,1,2,4};

//     int maxi = INT_MIN;
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i; j < v.size(); j++)
//         {
//             int sum = 0;
//            for (int k = i; k <= j; k++)
//            {
//                 sum+=v[k];
//            }
//            maxi = max(sum,maxi);
           
//         }
        
//     }
//     cout<<maxi;
    
//     return 0;
// }

// tc -> O(n^3) sc -> O(1)

//2.BETTER SOLUTION

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {-2,-4,-3,0,32,1,2,4};

//     int maxi = INT_MIN;
//     for (int i = 0; i < v.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < v.size(); j++)
//         {
//            sum+=v[j];
//            maxi = max(sum,maxi);
//         }
        
//     }
//     cout<<maxi;
    
//     return 0;
// }

// tc -> O(n^2) sc -> O(1)

//3.OPTIMAL SOLUTION(KADANE'S ALGORITHM)

//PART-1 (IF ONLY SUM IS ASKED ONLY!!)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //#ifndef ONLINE_JUDGE
// //	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// //#endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {-2,-3,4,-1,-2,1,5,-3};
//     int maxi = INT_MIN;
//     int sum = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         sum+=v[i];
//         maxi = max(sum,maxi);
//         if(sum<0) sum = 0;
//         
        
//     }

//     cout<<maxi;
    

//     return 0;
// }

// tc -> O(n) , sc -> O(1)

//PART-2 (IF ONLY SUM IS ASKED ONLY!!)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //#ifndef ONLINE_JUDGE
// //	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// //#endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {-2,-3,4,-1,-2,1,5,-3};
//     int maxi = INT_MIN;
//     int sum = 0;
//     int start = 0;
//     int astart = 0;
//     int eend = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(sum==0)
//         {
//             start = i;
//         }
//         sum+=v[i];
//         if(sum>maxi)
//         {
//             maxi = sum;
//             astart = start;
//             eend = i;
//         }
//         else if(sum<0) sum = 0;   
        
//     }

//     for (int i = astart; i <= eend; i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
//     cout<<endl<<maxi;

    

//     return 0;
// }

// tc -> O(n) , sc -> O(1)