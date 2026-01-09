//1.BRUTE SOLUTION - TC-O((MAX OF ARR)*N) SC-O(1)

//JUST REMOVE THE BINARY SEARCH PORTION AND DO LINEAR SEARCH FROM 1 TO MAX OF ARR

//2.OPTIMAL SOLUTION - TC-O((LOG BASE 2 MAX OF ARR)*N) SC-O(1)

// class Solution {
//     private:
//         int possibility(vector<int>&v,int threshold,int mid)
//         {
//             int sum = 0;
//             for(int i = 0 ; i < v.size() ; i++)
//             {
//                 sum+=(v[i]+mid-1)/mid;
//                 if(sum>threshold) return 0;
//             }
//             return 1;
//         }
//     public:
//         int smallestDivisor(vector<int>& nums, int threshold) {
//             int n = nums.size();
//             if(n>limit) return -1; //this condition is necessary when in the ques it is not confirmed that the ans may be poss or not
//             int low = 1;
//             int high = *max_element(nums.begin(),nums.end());
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 int chk = possibility(nums,threshold,mid);
//                 if(chk==1)
//                 {
//                     high = mid-1;
//                 }
//                 else low = mid+1;
//             }
//             return low;
//         }
//     };