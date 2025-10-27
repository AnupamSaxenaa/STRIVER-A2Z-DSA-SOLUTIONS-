//1.BRUTE SOLUTION -> TC -> O(n^3*log(no of unique triplets)) SC -> 2*0(no. of unique triplets)

// #include<set>
// vector<vector<int>> triplet(int n, vector<int> &arr)
// {
//     vector<vector<int>> ans;
//     set<vector<int>> s;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == 0)
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());

//                     if (s.find(temp) == s.end())
//                     {
//                         ans.push_back(temp);
//                         s.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

//2.BETTER SOLUTION -> HASHING sc - o(2*n+m) tc - o(n*n*(logn+logm))

// #include<set>
// vector<vector<int>> triplet(int n, vector<int> &arr)
// {
//     // Write your code here.
//     set<vector<int>>s;
    

//     for(int i = 0 ; i < arr.size() ; i++)
//     {
//         set<int>hash;
//         for(int j = i+1 ; j < arr.size() ; j++)
//         {
//             int sum = arr[i]+arr[j];
//             int rem = -(arr[i]+arr[j]);
//             if(hash.find(rem)==hash.end()) hash.insert(arr[j]);

//             else if(hash.find(rem)!=hash.end())
//             {
//                 vector<int>temp = {arr[i],arr[j],rem};
//                 sort(temp.begin(),temp.end()); // tc - o(approx 1 as sorting 3 ele can be done in no time)
//                 if(s.find(temp)==s.end()) s.insert(temp);
//                 temp.clear();
//             }
//         }
//     }
//     vector<vector<int>> ans(s.begin(),s.end());
//     return ans;
// }


// 3.OPTIMAL SOLUTION  - TC - O(NLOGN + N^2) SC - O(no of unique triplets)for returning ans;

// #include<set>
// vector<vector<int>> triplet(int n, vector<int> &arr)
// {
//     // Write your code here.
//     vector<vector<int>>ans;
//     sort(arr.begin(),arr.end());
    
//     for(int i = 0 ; i < arr.size() ; i++)
//     {
//         int left = i+1;
//         int right = arr.size()-1;
        
//         if(i!=0 && arr[i]==arr[i-1])
//         {
//             continue;
//         }
       
        
//         while(left<right)
//         {
//             if(arr[i]+arr[left]+arr[right]==0)  
//             {
//                 vector<int>temp = {arr[i],arr[left],arr[right]};
//                 ans.push_back(temp);
//                 left++;
//                 right--;
//                 while(arr[left]==arr[left-1])
//                 {
//                     left++;
//                 }
//                 while(arr[right]==arr[right+1])
//                 {
//                     right--;
//                 }
//                 temp.clear();
//             }

//             else if(arr[i]+arr[left]+arr[right]>0)
//             {
//                 right--;
//                 while(arr[right]==arr[right+1])
//                 {
//                     right--;
//                 }
//             }
//             else 
//             {
//                 left++;
//                 while(arr[left]==arr[left-1])
//                 {
//                     left++;
//                 }
//             }
//         }

//     }
    
//     return ans;
// }

