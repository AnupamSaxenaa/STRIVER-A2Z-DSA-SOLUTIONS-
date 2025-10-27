//1.BRUTE SOLUTION ->

// #include <bits/stdc++.h>
// using namespace std;

// void markrow(vector<vector<int>>&v,int row)
// {
//     for (int i = 0; i < v[0].size() ; i++)
//     {
//         v[row][i]=-1;
//     }
    
// }

// void markcolumn(vector<vector<int>>&v,int column)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         v[i][column] = -1;
//     }
    
// }

// void setmatzeros(vector<vector<int>> v)
// {
//     int row = v.size();
//     int column = v[0].size();

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if(v[i][j]==0)
//             {
//                 markrow(v,i);
//                 markcolumn(v,j);
//             }
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if(v[i][j]==-1) v[i][j]=0;
//         }
        
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<vector<int>> v = {{1, 1, 1, 1, 1}, {1, 0, 0, 1, 1}, {1, 1, 0, 1, 1}, {1, 1, 1, 1, 1}};
//     setmatzeros(v);

//     return 0;
// }

// TC -> O(N*M*(N+M)+N*M) SC -> O(1)

//2.BETTER SOLUTION -> 

// #include<bits/stdc++.h>
// using namespace std;

// void setmatzeros(vector<vector<int>> v)
// {
//     int row = v.size();
//     int column = v[0].size();
//     vector<int>tempfr(row,0);
//     vector<int>tempfc(column,0);

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if(v[i][j]==0)
//             {
//                 tempfr[i] = 1;
//                 tempfc[j] = 1;
//             }
//         }
        
//     }
    
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if(tempfr[i]==1 || tempfc[j]==1) v[i][j]=0;
//         }
        
//     }
    

//     for (int i = 0; i < row; i++)
//     {
//         for (int k = 0; k < column; k++)
//         {
//             cout<<v[i][k]<<" ";
//         }
//         cout<<endl;
//     }
    
    
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<vector<int>> v = {{1, 1, 1, 1, 1}, {1, 0, 0, 1, 1}, {1, 1, 0, 1, 1}, {1, 1, 1, 1, 1}};
//     setmatzeros(v);

//     return 0;
// }

// TC -> O(2*N*M) SC -> O(N+M)

//3.OPTIMAL SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void setmatzeros(vector<vector<int>>&v)
// {
//     int r = v.size();
//     int c = v[0].size();
//     int cols = 1;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c ; j++)
//         {
//             if(v[i][j]==0)
//             {
//                 v[i][0] = 0;
//                 if(j==0) cols = 0;
//                 else v[0][j] = 0;
//             }
//         }
        
//     }

//     for (int i = 1; i < r; i++)
//     {
//         for (int j = 1; j < c; j++)
//         {
//             if(v[i][j]!=0)
//             {
//                 if(v[i][0]==0 || v[0][j]==0) v[i][j]=0;
//             }
//         }
        
//     }

//     if(cols==0)
//     {
//         for (int i = 0; i < r; i++)
//         {
//             v[i][0]=0;
//         }
        
//     }
//     if(v[0][0]==0)
//     {
//         for (int i = 0; i < c; i++)
//         {
//             v[0][i]=0;
//         }
        
//     }
    
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<vector<int>> v = {{1, 0, 1, 1, 1}, {1, 0, 0, 1, 1}, {1, 1, 0, 1, 1}, {1, 1, 1, 1, 1}};
//     setmatzeros(v);
    
//     return 0;
// }

// TC -> O(2R*C+R+C) SC -> (1)

