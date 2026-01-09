//OPTIMAL SOLUTION ->

// #include <bits/stdc++.h>
// using namespace std;

// void spiralprint(vector<vector<int>> v)
// {
//     int l = 0, r = v[0].size() - 1, t = 0, b = v.size() - 1;

//     while (l <= r && t <= b)
//     {
//         for (int i = l; i <= r; i++)
//         {
//             cout << v[t][i] << " ";
//         }
//         t++;

//         for (int i = t; i <= b; i++)
//         {
//             cout << v[i][r]<<" ";
//         }
//         r--;

//         if (t <= b)
//         {
//             for (int i = r; i >= l; i--)
//             {
//                 cout << v[b][i]<<" ";
//             }
//             b--;
//         }
        
//         if(l<=r)
//         {
//             for (int i = b; i >= t; i--)
//             {
//                 cout << v[i][l]<<" ";
//             }
//             l++;
//         }
//     }
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<vector<int>> v = {{1, 2, 3, 4, 5},
//                              {6, 7, 8, 9, 10},
//                              {11, 12, 13, 14, 15},
//                              {16, 17, 18, 19, 20}};
//     spiralprint(v);
//     return 0;
// }

// TC -> O(N*M) SC -> O(1)