//1.BRUTE SOLUTION - TC-O((N+K)*LOG N) SC-O(1)

// class Solution {
//     private:
//         int findme(vector<int>vec,int target)
//     {
//         int n = vec.size();
//         int low = 0;
//         int high = n-1;
    
//         while(low<=high)
//         {
//             int mid = low+(high-low)/2;
//             if(vec[mid]==target) return mid;
//             else if(vec[mid]>target) high = mid-1;
//             else low = mid+1;
//         }
//         return -1;
    
//     }    
//     public:
//         int findKthPositive(vector<int>& arr, int k) {
//         int cnt = 0;
//         int i = 1;
//         while(cnt<=k)
//         {
//             if(findme(arr,i)==-1)
//             {
//                 cnt++;
//                 if(cnt==k) return i;
//             }
//             i++;
//         }
//         return -1;
//      }   
//     };

//2.BETTER SOLUTION - TC-O(N) SC-O(1)

// class Solution {
//     public:
//         int findKthPositive(vector<int>& arr, int k) {
//             int n = arr.size();
//             int cnt = 0;
//             //handling front
//             cnt+=(arr[0]-1);
//             if(cnt>=k) return k;
//             //handling back
//             for(int i = 0 ; i < n-1 ; i++)
//             {
//                 cnt+=(arr[i+1]-arr[i]-1);
//                 if(cnt>=k) return (arr[i+1]-1-(cnt-k));
//             }
//             //handling last
//             return arr[n-1]+(k-cnt);
    
    
//         }
//     };

//3.OPTIMAL SOLUTION - TC-O(LOGN) SC-(1)

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n = arr.size();
//         // if(arr[0]>k) return k;
//         // if(((arr[n-1])-n)<k) return (arr[n-1]+(k-(arr[n-1]-n)));

//         int low = 0;
//         int high = n-1;

//         while(low<=high)
//         {
//             int mid = low+(high-low)/2;
//             int missing = arr[mid]-(mid+1);

//             if(missing<k) low = mid+1;
//             else high = mid-1;   
//         }

//         return k+low;
//         //arr[high]+(k-(arr[high]-(high+1)));
//         //k+high+1; 
//         //or
//         //k+low
//     }
// };