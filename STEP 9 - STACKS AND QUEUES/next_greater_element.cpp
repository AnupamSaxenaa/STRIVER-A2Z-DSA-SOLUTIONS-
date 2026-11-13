//TC-O(2N) SC-O(N+N)
// class Solution
// {
//     public:
//         vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
//         {
//             stack<int> st;
//             vector<int> tr = nums2;
//             unordered_map<int,int>mpp;
//             for (int i = nums2.size() - 1; i >= 0; i--)
//             {
//                 mpp[nums2[i]] = i;
//                 if (st.empty())
//                 {
//                     st.push(nums2[i]);
//                     nums2[i] = -1;
//                 }
//                 else
//                 {
//                     while (!st.empty() && st.top() <= nums2[i])
//                     {
//                         st.pop();
//                     }    
//                     if (st.empty())
//                     {
//                         st.push(nums2[i]);
//                         nums2[i] = -1;
//                     }
//                     else
//                     {
//                         int ov = nums2[i];
//                         nums2[i] = st.top();
//                         st.push(ov);
//                     }
//                 }
//             }
//             vector<int>ans;
//             for(auto x : nums1){
//                 ans.push_back(nums2[mpp[x]]);
//             }
//             return ans;
//         }
// };