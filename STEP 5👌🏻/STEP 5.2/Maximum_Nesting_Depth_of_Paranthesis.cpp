// 1.BETTER SOLUTION - TC-O(N) SC-O(N)

// class Solution {
// public:
//     int maxDepth(string s) {
//         stack<char>st;
//         int cnt = 0;
//         int maxi = 0;
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if(s[i]=='(')
//             {
//                 st.push(s[i]);
//                 cnt++;
//                 maxi = max(cnt,maxi);
//             }
//             else if(s[i]==')')
//             {
//                 st.pop();
//                 cnt--;
//             }
//         }

//         return maxi;
//     }
// };


//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

    // class Solution {
    // public:
    //     int maxDepth(string s) {
    //         int cnt = 0;
    //         int maxi = 0;
    //         for(auto &x : s)
    //         {
    //             if(x=='(')
    //             {
    //                 cnt++;
    //                 maxi = max(cnt,maxi);
    //             }
    //             else if(x==')')
    //             {
    //                 cnt--;
    //             }
    //         }
    //         return maxi;
    //     }
    // };