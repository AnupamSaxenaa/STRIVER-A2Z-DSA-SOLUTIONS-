//1.BRUTE SOLUTION - TC-O((HIGH-LOW)*N) SC-O(1)

// class Solution {
//     private:
//         bool chk(vector<int>& nums,int k ,int i)
//         {
//             int cnt = 1;
//             int sum = 0;
//             for(int j = 0 ; j < nums.size() ; j++)
//             {
//                 if((sum+nums[j])<=i) sum+=nums[j];
//                 else
//                 {
//                     cnt++;
//                     sum = nums[j];
//                 }
//             }
//             if(cnt<=k) return true;
//             return false;
//         }
//     public:
//         int splitArray(vector<int>& nums, int k) {
//             int n = nums.size();
//             if(k>n) return -1;
//             int low = *max_element(nums.begin(),nums.end());
//             int high = accumulate(nums.begin(),nums.end(),0);
    
//             //LINEAR SEARCH
//             for (int i = low; i <= high; i++)
//             {
//                 int ans = chk(nums,k,i);
//                 if(ans==true) return i;
//             }
            
//             return -1;
//         }
//     };

//2.OPTIMAL SOLUTION - TC-O(LOG(HIGH-LOW)*N) SC-O(1)

// class Solution {
// private:
//     bool chk(vector<int>& nums,int k ,int i)
//     {
//         int cnt = 1;
//         int sum = 0;
//         for(int j = 0 ; j < nums.size() ; j++)
//         {
//             if((sum+nums[j])<=i) sum+=nums[j];
//             else
//             {
//                 cnt++;
//                 sum = nums[j];
//             }
//         }
//         if(cnt<=k) return true;
//         return false;
//     }
// public:
//     int splitArray(vector<int>& nums, int k) {
//         int n = nums.size();
//         if(k>n) return -1;
//         int low = *max_element(nums.begin(),nums.end());
//         int high = accumulate(nums.begin(),nums.end(),0);

//         //BINARY SEARCH
//         while(low<=high)
//         {
//             int mid = low+(high-low)/2;
//             int ans = chk(nums,k,mid);
//             if(ans==true) high = mid-1;
//             else low = mid+1;
//         }
//         return low;
//     }
// };