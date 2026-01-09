// CATEGORY 1 : (GIVEN ROW AND COLUMN . FIND THE ELEMENT AT THAT PLACE!)

// 1.BRUTE SOLUTION - > SEP FUNTION BNAO FAC AND COMBINATION KA FIR SBKO CALCULATE KRO FORMULA MA (BASICALLY MANUAL KRO TRICT MT LGAO) TC->O(N^3)(HIGHLY NOT RECOMMENDED)(OR USE LONG LONG)

// 2.OPTIMAL SOLUTION - > TC -> O(C) SC - > O(1)

// #include<bits/stdc++.h>
// using namespace std;

// int findans(int r,int c)
// {
//     int ans = 1;
//     for (int i = 0; i < c; i++)
//     {
//         ans = ans*(r-i);
//         ans = ans/(i+1);
//     }
//     return ans;
// }

// int main()
// {
// cout << "PROGRAM RUNNING FINE!" << endl;
// int r = 5;
// int c = 3;

// int tobeprint = findans(3,2);
// cout<<tobeprint<<" ";
// return 0;
// }

// CATEGORY 2 : (PRINT THE NTH ROW OF PASCAL TRIANGLE)

// 1.BRUTE SOLUTION -> TC -> O(N*C) SC -> O(1)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     cout << "PROGRAM RUNNING FINE!" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         int ans = 1;
//         int r = n-1;
//         int c = i;
//         for (int j = 0; j < c; j++)
//         {
//             ans = ans*(r-j);
//             ans = ans/(j+1);
//         }
//         cout<<ans<<" ";

//     }

//     return 0;
// }

// 2.OPTIMAL SOLUTION -> TC -> O(N) SC -> (1)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     cout << "PROGRAM RUNNING FINE!" << endl;
//     int r = 5;

//     cout<<1<<" ";
//     int ans = 1;

//     for (int i = 1; i < r; i++)
//     {
//         ans = ans*(r-i);
//         ans = ans/(i);
//         cout<<ans<<" ";
//     }

//     return 0;
// }

// CATEGORY 3 : (GIVEN N PRINT ENTIRE  PASCAL TRIANGLE)

// 1.BRUTE SOLUTION -> (HR ROW KO FILL KRO USING FORMULA NCR AND MAKE SEPERATE FACTORIAL AND COMBINATION FUNCTION )(VERY TIME COSTLY TC -> O(N^3))(NOT RECOMMENDED)

// 2.OPTIMAL SOLUTION -> TC -> O(N^2) (combining cotegory 2 optimal solution)

// vector<int> rowGenerator(int row)
// {
//     vector<int>temp;
//     temp.push_back(1);

//     int ans = 1;
//     for(int column = 1 ; column < row ; column++)
//     {
//         ans = ans*(row-column);
//         ans = ans/(column);
//         temp.push_back(ans);
//     }
//     return temp;
// }

// vector<vector<int>> pascalTriangle(int N) {
//     // Write your code here.
//     vector<vector<int>>temp;
//     for(int row = 1 ; row <= N ; row++)
//     {
//         temp.push_back(rowGenerator(row));
//     }
//     return temp;
// }