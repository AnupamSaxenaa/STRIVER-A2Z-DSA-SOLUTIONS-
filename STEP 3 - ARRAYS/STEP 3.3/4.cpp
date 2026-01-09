//1.BRUTE SOLUTION - tc - o(n^4*log(no. of unique quadruplets)) sc - o(2*no of unique quadruplets)

// #include<set>
// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     // Write your code here
//     int n = nums.size();
//     set<vector<int>>s;

//     for(int i = 0 ; i < n ; i++)
//     {
//         for(int j = i+1 ; j < n ; j++)
//         {
//             for(int k = j+1 ; k < n ; k++)
//             {
//                 for(int l = k+1 ; l < n ; l++)
//                 {
//                     int sum = nums[i]+nums[j]+nums[k]+nums[l];
//                     if(sum==target)
//                     {
//                         vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
//                         sort(temp.begin(),temp.end());
//                         if(s.find(temp)==s.end())
//                         {
//                             s.insert(temp);
//                         }
//                     }

//                 }
//             }
//         }
//     }
//     vector<vector<int>>ans(s.begin(),s.end());
//     return ans;
// }

//2.BETTER SOLUTION - tc-o(n^3*logm) sc-o(2*no. of unique quadruplets + n)

// #include<set>
// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     // Write your code here
//     int n = nums.size();
//     set<vector<int>>s;
//     for(int i = 0 ; i < n ; i++)
//     {
//         for(int j = i+1 ; j< n ; j++)
//         {
//             set<int>hash;
//             for(int k = j+1 ; k < n ; k++)
//             {
//                 int sum = nums[i]+nums[j]+nums[k];
//                 int rem = target-sum;
//                 if(hash.find(rem)==hash.end()) hash.insert(nums[k]);
//                 else
//                 {
//                     vector<int>temp = {nums[i],nums[j],nums[k],rem};
//                     sort(temp.begin(),temp.end());
//                     if(s.find(temp)==s.end())
//                     {
//                         s.insert(temp);
//                     }
//                 }

//             }
//         }
//     }
//     vector<vector<int>>ans(s.begin(),s.end());
//     return ans;

// }


//3.OPTIMAL SOLUTION - tc - o(nlogn + n*3) sc - o(no. of unique quadruplets)

// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     // Write your code here
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     vector<vector<int>>ans;

//     for(int i = 0 ; i < n ; i++)
//     {
//         if(i!=0 && nums[i]==nums[i-1]) continue;

//         for(int j = i+1 ; j < n ; j++)
//         {
//             if(j!=i+1 && nums[j]==nums[j-1]) continue;
//             int left = j+1;
//             int right = n-1;

//             while(left<right)
//             {
//                 int sum = nums[i]+nums[j]+nums[left]+nums[right];
//                 if(sum==target)
//                 {
//                     vector<int>temp = {nums[i],nums[j],nums[left],nums[right]};
//                     ans.push_back(temp);
//                     left++;
//                     while(left<right && nums[left]==nums[left-1])
//                     {
//                         left++;
//                     }
//                     right--;
//                     while(left<right && nums[right]==nums[right+1])
//                     {
//                         right--;
//                     }
            
//                 }
//                 else if(sum>target)
//                 {
//                     right--;
//                     while(left<right && nums[right]==nums[right+1])
//                     {
//                         right--;
//                     }
//                 }
//                 else{
//                     left++;
//                     while(left<right && nums[left]==nums[left-1])
//                     {
//                         left++;
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

