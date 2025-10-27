//1.BRUTE SOLUTION - TC-O((SUM OF ARR - MAX OF ARR+1)*N) SC-O(1)

//JUST REMOVE THE PART OF BINARY SEARCH AND IMPLEMENT LINEAR SEARCH


//2.BRUTE SOLUTION - TC-O(LOG BASE 2(SUM OF ARR - MAX OF ARR+1)*N) SC-O(1)

// class Solution {
//     private:
//         int possibility(vector<int>&v,int target,int mid)
//         {
//             int n = v.size();
//             int sum = 0;
//             int days = 0;
//             for(int i = 0 ; i < n ; i++)
//             {
//                 if((sum+v[i])>mid)
//                 {
//                     days++;
//                     sum = v[i];
//                 }
//                 else sum+=v[i];
    
//             }
//             if(sum<=mid) days++;
    
//             if(days<=target) return 1;
//             else return 0;
//         }
    
//     public:
//         int shipWithinDays(vector<int>& weights, int days) {
//             int n = weights.size();
    
//             int low = *max_element(weights.begin(),weights.end());
//             int high = accumulate(weights.begin(),weights.end(),0);
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
//                 int chk = possibility(weights,days,mid);
//                 if(chk==1) high = mid-1;
//                 else low = mid+1;
//             }
//             return low;
//         }
//     };