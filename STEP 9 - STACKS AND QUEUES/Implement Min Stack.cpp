//1.APPROACH 1 - TC-O(1) SC-O(2N)
// class MinStack {
// public:
//     stack<pair<int,int>>st;
//     MinStack() {
//     } 
//     void push(int value) {
//         if(st.empty()) {
//             st.push({value,value});
//         }else{
//             st.push({value,min(value,st.top().second)});
//         }
//     } 
//     void pop() {
//         st.pop();
//     } 
//     int top() {
//         return st.top().first;
//     }  
//     int getMin() {
//         return st.top().second;
//     }
// };

//2.APPROACH 2 - TC-O(1) SC-O(N)
// class MinStack {
// public: 
//     stack<long long>st;
//     long long min_val = LLONG_MAX;
//     MinStack() {
//     }
//     void push(int value) {
//         if(st.empty()) {
//             st.push(value);
//             min_val = value;
//         }else{
//             if(value>min_val) st.push(value);
//             else{
//                 long long val = 2LL*value-min_val;
//                 st.push(val);
//                 min_val = value;
//             }
//         }
//     } 
//     void pop() {
//         if(st.top()>min_val) st.pop();
//         else{
//             long long topval = st.top();
//             st.pop();
//             min_val = 2LL*min_val-topval;
//         }
//     }
//     int top() {
//         long long topval = st.top();
//         if(topval>min_val) return (int)topval;
//         else return (int)min_val;
//     }
//     int getMin() {
//         return (int)min_val;
//     }
// };
