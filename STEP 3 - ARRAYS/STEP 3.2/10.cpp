//1.BRUTE SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// bool linearsearch(vector<int>v,int k)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]==k) return true;
//     }
//     return false;
    
// }

// void findmaxl(vector<int>v)
// {
//     int cnt = 1;
//     int lmax = 1;
//     for (int i = 0; i < v.size(); i++)
//     {
//         int temp = v[i];
//         while (linearsearch(v,temp)==true)
//         {
//             cnt++;
//             temp++;
//         }
//         lmax = max(lmax,cnt);
//         cnt=1;
//     }
//     cout<<lmax-1;
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v= {102,105,2,4,5,3,104,103,1};
//     findmaxl(v);
//     return 0;
// }

// TC -> O(N^3) SC -> O(1)

//2.BETTER SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void longconseseq(vector<int>&v)
// {
//     int maxl = 1;
//     int cnt = 1;
//     sort(v.begin(),v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i]==v[i+1]) continue;
//         else if((v[i]+1)==v[i+1]) cnt++;
//         else{
//             maxl = max(maxl,cnt);
//             cnt = 1;
//         }
//     }
//     cout<<maxl;
// }

// int main()
// {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {1,3,5,7};
//     longconseseq(v);
//     return 0;
// }

// // TC -> O(NLOGN + N) SC -> (1)

//3.OPTIMAL SOLUTION ->

// #include<bits/stdc++.h>
// using namespace std;

// void longconseseq(vector<int>v)
// {
//     int cnt = 1;
//     int lmax = 1;
//     unordered_set<int>s;
//     for (int i = 0; i < v.size(); i++)
//     {
//         s.insert(v[i]);
//     }

//     for (auto it : s)
//     {
//         if(s.find(it-1)==s.end())
//         {
//             while (s.find(++it)!=s.end())
//             {
//                 cnt++;
//             }
            
//         }
//         lmax = max(lmax,cnt);
//         cnt = 1;
//     }
//     cout<<lmax;
    
// }

// int main()
// {

//     cout << "PROGRAM RUNNING FINE!" << endl;
//     vector<int>v = {102,4,100,1,101,3,2,1,1};
//     longconseseq(v);

//     return 0;
// }

// (IMP) TC -> O(3N) SC -> O(1)