// 1.BRUTE SOLUTION

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // #ifndef ONLINE_JUDGE
//     //	freopen("input.txt", "r", stdin);
//     //	freopen("output.txt", "w", stdout);
//     // #endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int> v = {3, 3, 2, 1, 1, 3, 3, 1, 2, 3, 3, 3};
//     int n = v.size();
//     int chk = n / 2;

//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[i] == v[j])
//                 cnt++;
//         }
//         if (cnt > chk)
//         {
//             cout << "yes " << v[i] << " APPEARING " << cnt << " TIMES!" << endl;
//             return 0;
//         }
//     }

//     return 0;
// }

// tc -> O(n^2) , sc -> O(1)

// 2.BETTER SOLUTION(HASHING)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // #ifndef ONLINE_JUDGE
//     //	freopen("input.txt", "r", stdin);
//     //	freopen("output.txt", "w", stdout);
//     // #endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     map<int, int> mpp;
//     vector<int> v = {1, 3, 3, 3, 2, 3, 1, 3, 4, 4, 3, 3};
//     int n = v.size();
//     int chk = n / 2;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[v[i]]++;
//     }
//     int max = INT_MIN;
//     int ele = 0;
//     for (auto it : mpp)
//     {
//         if (it.second > max)
//         {
//             max = it.second;
//             ele = it.first;
//         }
//     }
//     if (max > chk)
//         cout<<ele<<" OCCURS "<<max<<" TIMES! ";

//     return 0;
// }

// tc(wc) -> O(nlogn + n) sc(wc) -> O(n)

// 3.OPTIMAL SOLUTION(Moore's Voting Algorithm)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // #ifndef ONLINE_JUDGE
//     //	freopen("input.txt", "r", stdin);
//     //	freopen("output.txt", "w", stdout);
//     // #endif
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int> v = {1, 2, 3, 3, 3, 4, 3, 3, 2, 3};
//     int n = v.size();
//     int chk = n / 2;

//     int ele = 0;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt == 0)
//         {
//             ele = v[i];
//             cnt = 1;
//         }
//         else if (ele == v[i])
//         {
//             cnt++;
//         }
//         else
//             cnt--;
//     }

//     //TO CHK IF IT APPEARS MORE THAN N/2 OR NOT(IN QUES WILL GIVE LIKE THERE MAY OR MAY NOT EXIST ANY ELE IN ARRAY THAT APPEARS MORE THAN  > N/2)
//     int cnt1 = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]==ele) cnt1++;
//     }
//     if(cnt1>chk) cout<<ele;
    

//     return 0;
// }

// tc -> O(n+n) sc -> O(1)