//1.BRUTE SOLUTION - TC-O(3*N) SC-O(N)

// class Solution
// {
//     public:
//         int candy(vector<int> &ratings)
//         {
//             int n = ratings.size();
//             vector<int> v(n, -1);
//             v[0] = 1;
//             v[n - 1] = 1;
//             int it = 1;
//             for (int i = 1; i < n; i++)
//             {
//                 if (ratings[i] > ratings[i - 1])
//                 {
//                     it++;
//                     v[i] = max(v[i], it);
//                 }
//                 else
//                 {
//                     it = 1;
//                     v[i] = max(v[i], it);
//                 }
//             }

//             it = 1;
//             for (int i = n-2 ; i >= 0; i--)
//             {
//                 if (ratings[i] > ratings[i + 1])
//                 {
//                     it++;
//                     v[i] = max(v[i], it);
//                 }
//                 else
//                 {
//                     it = 1;
//                     v[i] = max(v[i], it);
//                 }
//             }

//             int ans = accumulate(v.begin(),v.end(),0);
//             return ans;
//         }
// };

//2.BETTER SOLUTION - TC-O(2N) SC-O(N)

// class Solution
// {
//     public:
//         int candy(vector<int> &ratings)
//         {
//             int n = ratings.size();
//             vector<int> v(n, -1);
//             v[0] = 1;
//             v[n - 1] = 1;

//             int l = 1, r = n - 2, it1 = 1, it2 = 1;
//             while (l < n && r >= 0)
//             {
//                	//considering left niggas
//                 if (ratings[l] > ratings[l - 1])
//                 {
//                     it1++;
//                     v[l] = max(v[l], it1);
//                 }
//                 else
//                 {
//                     it1 = 1;
//                     v[l] = max(v[l], it1);
//                 }
//                	//considering right niggas
//                 if (ratings[r] > ratings[r + 1])
//                 {
//                     it2++;
//                     v[r] = max(v[r], it2);
//                 }
//                 else
//                 {
//                     it2 = 1;
//                     v[r] = max(v[r], it2);
//                 }

//                 l++; r--;
//             }

//             int ans = accumulate(v.begin(), v.end(), 0);
//             return ans;
//         }
// };
//3.OPTIMAL SOLUTION - USING SLOPE CONCEPT TC-O(N) SC-O(1)

// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         int n = ratings.size();
//         int sum = 1 , i = 1;
//         while(i<n){
//             if(ratings[i]==ratings[i-1]) 
//             {
//                 sum+=1;
//                 i++;
//                 continue;
//             }

//             int peak = 1;
//             while(i<n && ratings[i]>ratings[i-1]){
//                 peak++;
//                 sum+=peak;
//                 i++;
//             }
            
//             int down = 1;
//             while(i<n && ratings[i]<ratings[i-1]){
//                 sum+=down;
//                 down++;
//                 i++;
//             }
//             // down+=1;
//             if(peak<down) sum+=(down-peak);
//         }
//         return sum;
//     }
// };
