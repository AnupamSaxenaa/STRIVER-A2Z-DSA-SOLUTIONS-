//LARGEST RECTANGLE IN HISTOGRAM

//1.BRUTE SOLUTION - TC-O(N*(2N)) SC-O(1)
// class Solution {
//   public:
//     int largestRectangleArea(vector<int>& heights) {
//        int i = 0;
//        int maxi = INT_MIN;
//        while(i<heights.size())
//        {
//             int currh = heights[i];
//             int prev = i-1 , next = i+1;
//             int len = 1;
//             while(prev>=0 && heights[prev]>=currh){
//                 len++;
//                 prev--;
//             }
//             while(next<heights.size() && heights[next]>=currh){
//                 len++;
//                 next++;
//             }
//             maxi = max(maxi , len*currh);
//             i++;
//        }
//        return maxi;
//     }
//     int getMaxArea(vector<int> &arr) {
//         // code here
//         return largestRectangleArea(arr);
//     }
// };

//2.BETTER SOLUTION - TC-O(4*N) SC-O(3*N)
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         vector<int> pse(n), nse(n);
//         stack<int> s;
//         for (int i = 0; i < n; i++) {
//             while (!s.empty() && heights[i] <= heights[s.top()]) {
//                 s.pop();
//             }
//             if (s.empty()) {
//                 pse[i] = 0;
//             }
//             else {
//                 pse[i] = s.top() + 1;
//             }
//             s.push(i);
//         }
//         while (!s.empty()) s.pop();
//         for (int i = n - 1; i >= 0; i--) {
//             while (!s.empty() && heights[i] <= heights[s.top()]) {
//                 s.pop();
//             }
//             if (s.empty()) {
//                 nse[i] = n - 1;
//             }
//             else {
//                 nse[i] = s.top() - 1;
//             }
//             s.push(i);
//         }
//         int maxi = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             int val = (nse[i] - pse[i] + 1) * heights[i];
//             maxi = max(maxi, val);
//         }
//         return maxi;
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(2N) SC-O(N)
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size(),maxA = INT_MIN;
//         stack<int>st;
//         for(int i = 0 ; i <= n ; i++)
//         {
//             while(!st.empty() && (i==n || heights[i]<=heights[st.top()])){
//                 int h = heights[st.top()];
//                 st.pop();
//                 int w;
//                 if(st.empty()) w = i;
//                 else w = i-st.top()-1;
//                 maxA = max(maxA,h*w);
//             }
//             st.push(i);
//         }
//         return maxA;
//     }
// };

//REAL QUESTION STARTS HERE - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

//using optimal solution 3 and some custom concept - TC-O(N*(3M)) SC-O(2M)
// class Solution {
// public:
//     int fun1(vector<int>& h)
//     {
//         int n = h.size();
//         int maxA = INT_MIN;
//         stack<int> st;
//         for (int i = 0; i <= n; i++)
//         {
//             while (!st.empty() && (i == n || h[st.top()] >= h[i]))
//             {
//                 int ht = h[st.top()], w;
//                 st.pop();
//                 if (st.empty())
//                     w = i;
//                 else
//                     w = i - st.top() - 1;
//                 maxA = max(maxA, ht * w);
//             }
//             if (i != n)
//                 st.push(i);
//         }
//         return maxA;
//     }
//     int maximalRectangle(vector<vector<char>>& matrix)
//     {
//         if (matrix.empty()) return 0;
//         vector<int> h(matrix[0].size(), 0);
//         int maxa = INT_MIN;
//         for (int i = 0; i < matrix.size(); i++)
//         {
//             for (int j = 0; j < matrix[0].size(); j++)
//             {
//                 if (matrix[i][j] == '1')
//                     h[j]++;
//                 else
//                     h[j] = 0;
//            }
//            int ans = fun1(h);
//             maxa = max(ans, maxa);
//         }
//         return maxa;
//     }
// };