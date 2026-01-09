// VARIETY 1 -> (TOTAL POSITIVE NUMS = TOTAL NEGATIVE NUMS)
// 1.BRUTE SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;
// void sortaltsign(vector<int>&v)
// {
//     vector<int>pos;
//     vector<int>neg;
//     int n = v.size();
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]<0) neg.push_back(v[i]);
//         else pos.push_back(v[i]);
//     }

//     int idxpos = 0 , idxneg = 0;
//     for (int i = 0; i < n ; i++)
//     {
//         if(i%2==0) v[i] = pos[idxpos++];
//         else v[i] = neg[idxneg++];
//     }

//     //ALTERNATE OPTIMIZATION
//     for (int i = 0; i < n/2 ; i++)
//     {
//         v[2*i] = pos[i];
//         v[2*i+1] = neg[i];
//     }

// }
// int main()
// {

//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {1,2,3,-1,-4,-5};
//     if(v.size()%2!=0) return 0;
//     sortaltsign(v);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     return 0;
// }

// TC -> O(N+N/2) SC -> (N)

// 2.OPTIMAL SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void sortaltsign(vector<int>v)
// {
//     vector<int>ans(v.size(),0);
//     int idxeven = 0;
//     int idxodd = 1;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]>=0)
//         {
//             ans[idxeven] = v[i];
//             idxeven+=2;
//         }
//         else
//         {
//             ans[idxodd] = v[i];
//             idxodd+=2;
//         }

//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }

// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;

//     vector<int>v = {1,2,3,-1,-2,-3};
//     sortaltsign(v);

//     return 0;
// }

// TC -> O(N) SC -> O(N)

// VARIETY 2 -> (TOTAL POSITIVE NUMS != TOTAL NEGATIVE NUMS)

// 1.BRUTE SOLUTION IS THE OPTIMAL SOLUTION ->

// #include <bits/stdc++.h>
// using namespace std;

// void sortaltsign(vector<int> &v)
// {
//     vector<int> pos;
//     vector<int> neg;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] < 0)
//             neg.push_back(v[i]);
//         else
//             pos.push_back(v[i]);
//     }

//     int n = min(pos.size(), neg.size());
//     for (int i = 0; i < n; i++)
//     {
//         v[2 * i] = pos[i];
//         v[2 * i + 1] = neg[i];
//     }

//     if (pos.size() != neg.size())
//     {
//         int temp = 2 * n;
//         for (int i = n; i < v.size() - n; i++)
//         {
//             if (neg.size() > pos.size())
//                 v[temp++] = neg[i];
//             else
//                 v[temp++] = pos[i];
//         }
//     }
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int> v = {1, 2, -2, 3, -5, 4};
//     sortaltsign(v);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

// TC(WORST CASE) -> O(2N) SC -> O(N)