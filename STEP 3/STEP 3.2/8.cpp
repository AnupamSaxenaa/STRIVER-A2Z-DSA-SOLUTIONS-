// 2.BETTER SOLUTION -> (USING NEXT_PERMUTATION STL)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {2,1,4,6,3,2};
//     next_permutation(v.begin(),v.end());
//     for (int i = 0; i < v.size(); i++)
//     cout<<v[i]<<" ";

//     return 0;
// }

// TC -> O(3N) SC->O(1)

// 3.OPTIMIZED SOLUTION -> (basically implementing the next_permutation stl)

// #include <bits/stdc++.h>
// using namespace std;

// void nextpermut(vector<int> &v)
// {
//     int n = v.size();
//     int idx = -1;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (v[i] < v[i + 1])
//         {
//             idx = i;
//             break;
//         }
//     }

//     if (idx == -1)
//     {
//         reverse(v.begin(), v.end());
//         return;
//     }

//     for (int i = n - 1; i > idx; i--)
//     {
//         if (v[idx] < v[i])
//         {
//             swap(v[idx], v[i]);
//             break;
//         }
//     }

//     reverse(v.begin() + idx + 1, v.end());
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int> v = {2, 1, 4, 6, 3, 2};
//     nextpermut(v);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

//TC->O(3N) SC->O(1) OR SC->O(N)(IF NOT WANTED TO CHANGE THE LIST)