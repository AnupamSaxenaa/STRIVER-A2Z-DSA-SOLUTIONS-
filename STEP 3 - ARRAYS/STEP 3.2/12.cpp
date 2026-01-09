//1.BRUTE SOLUTION - >

// #include<bits/stdc++.h>
// using namespace std;

// void rotateby90(vector<vector<int>>v)
// {
//     vector<vector<int>>ans(v.size(),vector<int>(v[0].size(),0));
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v.size(); j++)
//         {
//             ans[j][v.size()-1-i] = v[i][j];
//         }
        
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v.size(); j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<vector<int>>v ={{1,2,3},{4,5,6},{7,8,9}};
//     rotateby90(v);
//     return 0;
// }

// TC->O(N^2) SC->O(N^2)


//2.OPTIMAL SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void rotateby90(vector<vector<int>>&v)
// {
//     //FIND THE TRANSPOSE
//     for (int i = 0; i < v.size()-1; i++)
//     {
//         for (int j = i+1; j < v.size() ; j++)
//         {
//             swap(v[i][j],v[j][i]);
//         }
        
//     }
    
//     //REVERSE EACH ROW
//     for (int i = 0; i < v.size(); i++)
//     {
//         reverse(v[i].begin(),v[i].end());
//     }
    

//     //PRINT 
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v.size(); j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<vector<int>>v ={{1,2,3},{4,5,6},{7,8,9}};
//     int n = v.size();

//     rotateby90(v);
    
//     return 0;
// }

// TC->O(N*N/2+N*N/2) SC->(1)

