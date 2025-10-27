//1.BRUTE SOLUTION - >

// #include<bits/stdc++.h>
// using namespace std;

// void findtheleaders(vector<int>v)
// {
//     vector<int>ans;
//     for (int i = 0; i < v.size()-1; i++)
//     {
//         bool flag =  true;
//         for (int j = i+1; j < v.size(); j++)
//         {
//             if(v[i]<v[j])
//             {
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true) ans.push_back(v[i]);
//     }
//     ans.push_back(v[v.size()-1]);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }
    
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {10,22,12,3,0,6};
//     findtheleaders(v);
//     return 0;
// }

// TC -> approx O(N^2) SC -> O(N)(FOR RETURNING THE ANS)

//2.OPTIMAL SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void findtheleaders(vector<int>v)
// {
//     int n = v.size();
//     stack<int>s;
//     int maxi = v[n-1];
//     s.push(v[n-1]);

//     for (int i = n-2 ; i >= 0; i--)
//     {
//         if(v[i]<maxi)
//         {
//             continue;
//         }
//         else{
//             maxi = max(maxi,v[i]);
//             s.push(v[i]);
//         }
//     }

//     while (!s.empty())
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
    
    
    
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {10,22,12,3,0,6};
//     findtheleaders(v);
//     return 0;
// }

// if you want to give sorted ans you can use vector simply but to maintain the order you need to use stack

// TC -> O(N) SC -> (N)