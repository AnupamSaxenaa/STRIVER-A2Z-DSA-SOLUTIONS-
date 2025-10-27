//1.BRUTE SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void buynsell(vector<int>v)
// {
//     int maxi =  INT_MIN;
//     int profit = 0;
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             profit = v[j]-v[i];
//             maxi = max(maxi,profit);
//         }
        
//     }
//     cout<<maxi;
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {9,8,7,6,5,4};
//     buynsell(v);
//     return 0;
// }

// TC -> O(N^2) SC -> O(1)

//2.OPTIMISED SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void buynsell(vector<int>v)
// {
//     int mini = v[0];
//     int profit = 0;
//     for (int i = 1; i < v.size(); i++)
//     {
//         int diff = v[i]-mini;
//         profit = max(profit,diff);
//         mini = min(mini,v[i]);
//     }
//     cout<<"PROFIT: "<<profit;
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {3,4,5,1,2,9,8,4};
//     buynsell(v);
//     return 0;
// }

// TC -> O(N) SC ->(1)