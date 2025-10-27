//1.BRUTE FORCE SOLUTION

// #include<bits/stdc++.h>
// using namespace std;
// void twosumdetector(vector<int>v,int target)
// {
//     int n = v.size();
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int sum = v[i]+v[j];
//             if(sum==target)
//             {
//                 cout<<v[i]<<"->idx->"<<i<<"+"<<v[j]<<"->idx->"<<j<<"="<<target<<endl;
//             }
//         }
        
//     }
    
// }

// int main()
// {
//     vector<int>v = {1,2,4,6,3,8};
//     int target = 10;
//     twosumdetector(v,target);
//     return 0;
// }

//tc->n^2,sc->1

//2.BETTER SOLUTION(HASHING)

// #include<bits/stdc++.h>
// using namespace std;
// void twosumdetector(vector<int>v,int target)
// {
//     map<int,int>mpp;
//     for (int i = 0; i < v.size(); i++)
//     {
//         auto it = mpp.find(target-v[i]);
//         if(it != mpp.end()) 
//         {
//             cout<<v[i]<<"idx->"<<i<<"+"<<target-v[i]<<"idx->"<<mpp[target-v[i]]<<endl;
//         }
//         mpp[v[i]] = i;
//     }
    
// }

// int main()
// {
//     vector<int>v = {1,3,6,2,7,4};
//     int target = 10;
//     twosumdetector(v,target);
//     return 0;
// }

// tc->o(nlogn),sc->(n)


//3.OPTIMIZED SOLUTION(TWO POINTER APPROACH) (ONLY OPTIMAL FOR VARIETY 1 IF WE ARE NOT REQUIRED TO PRINT THE INDEXES ALSO!!)

// #include<bits/stdc++.h>
// using namespace std;
// void twosumdetector(vector<int>v,int target)
// {
//     int left  = 0;
//     int right = v.size()-1;

//     while (left<right)
//     {
//         if(v[left]+v[right] == target)
//         {
//             cout<<"YES";
//             return;
//         }

//         else if(v[left]+v[right] > target)
//         {
//             right--;
//         }

//         else if(v[left]+v[right] < target)
//         {
//             left++;
//         }
//     }
//     cout<<"NO";
//     return;
    
// }

// int main()
// {
//     vector<int>v = {1,3,6,2,7,4};
//     int target = 10;
//     sort(v.begin(),v.end());
//     twosumdetector(v,target);
//     return 0;
// }

// tc->o(n+nlogn) sc->o(1)
