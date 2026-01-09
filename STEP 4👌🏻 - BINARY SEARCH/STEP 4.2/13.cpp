//1.BRUTE SOLUTION - TC-O(N+M) SC-O(N+M)

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m1 = nums1.size();
//         int m2 = nums2.size();

//         //VECTOR EMPTY CONDITIONS
//         if(m1==0 && m2==0) return -1;
//         else if(m1==0)
//         {
//             if(m2%2!=0) return nums2[(m2-1)/2];
//             int idx  = m2/2;
//             long double median = (nums2[idx]+nums2[idx-1])/2.0; 
//             return median;
//         }
//         else if(m2==0)
//         {
//             if(m1%2!=0) return nums1[(m1-1)/2];
//             int idx  = m1/2;
//             long double median = (nums1[idx]+nums1[idx-1])/2.0; 
//             return median;
//         }

//         //MERGING
//         vector<int>v;
//         int left = 0;
//         int right = 0;
//         while(left<=(nums1.size()-1) && right<=(nums2.size()-1))
//         {
//             if(nums1[left]>nums2[right]) v.push_back(nums2[right++]);
//             else if(nums1[left]<nums2[right]) v.push_back(nums1[left++]);
//             else
//             {
//                 v.push_back(nums1[left]);
//                 v.push_back(nums1[left]);
//                 left++;
//                 right++;
//             }
//         }

//         while(left<=(nums1.size()-1)) v.push_back(nums1[left++]);
//         while(right<=(nums2.size()-1)) v.push_back(nums2[right++]);
        
//         //MEDIAN CONDITIONS
//         int n = v.size();
//         if(n%2!=0) return v[(n-1)/2];
//         int idx  = n/2;
//         long double median = (v[idx]+v[idx-1])/2.0; 
//         return median;
//     }
// };

//2.BETTER SOLUTION - TC-O(N+M) SC-O(1)

// class Solution {
//     public:
//         double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//             int n1 = nums1.size();
//             int n2 = nums2.size();
//             int n = (n1+n2);
    
//             int left = 0;
//             int right = 0;
//             int idx1 = n/2-1;
//             int idx2 = n/2;
//             int ele1 = 0;
//             int ele2 = 0;
//             int cnt = 0;
    
//             while(left<=(n1-1) && right<=(n2-1))
//             {
//                 if(nums1[left]>nums2[right])
//                 {
//                     if(idx1==cnt) ele1 = nums2[right];
//                     if(idx2==cnt) ele2 = nums2[right];
//                     cnt++;
//                     right++;
//                 }
//                 else
//                 {
//                     if(idx1==cnt) ele1 = nums1[left];
//                     if(idx2==cnt) ele2 = nums1[left];
//                     cnt++;
//                     left++;
//                 }
//             } 
    
//             while(left<=(n1-1))
//             {
//                 if(idx1==cnt) ele1 = nums1[left];
//                 if(idx2==cnt) ele2 = nums1[left];
//                 cnt++;
//                 left++;
//             }
    
//             while(right<=(n2-1))
//             {
//                 if(idx1==cnt) ele1 = nums2[right];
//                 if(idx2==cnt) ele2 = nums2[right];
//                 cnt++;
//                 right++;
//             }
    
//             if(n%2!=0) return ele2;
//             return (double)(ele1+ele2)/2.0;
//         }
//     };

//3.OPTIMAL SOLUTION - TC-O(LOG BASE 2 MIN(N1,N2)) SC-O(1)

// class Solution {
//     public:
//         double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//             int n1 = nums1.size();
//             int n2 = nums2.size();
//             int n = n1+n2;
//             int targetonleft = (n+1)/2;
//             if(n1>n2) return findMedianSortedArrays(nums2,nums1);
//             int low = 0;
//             int high = n1;
    
//             while(low<=high)
//             {
//                 int mid = low+(high-low)/2;
    
//                 int mid1 = mid;
//                 int mid2 = targetonleft-mid;
    
//                 int l1 = INT_MIN;
//                 int l2 = INT_MIN;
//                 int r1 = INT_MAX;
//                 int r2 = INT_MAX;
                
//                 if(mid1!=0) l1 = nums1[mid1-1];
//                 if(mid2!=0) l2 = nums2[mid2-1];
//                 if(mid1!=n1) r1 = nums1[mid1];
//                 if(mid2!=n2) r2 = nums2[mid2];
    
//                 if((l1>r2) && (l2<r1)) high = mid-1;
//                 else if((l1<r2) && (l2>r1)) low = mid+1;
//                 else
//                 {
//                     if(n%2!=0) return max(l1,l2);
//                     else return (max(l1,l2)+min(r1,r2))/2.0;
//                 }
//             }
//             return -1;
//         }
//     };