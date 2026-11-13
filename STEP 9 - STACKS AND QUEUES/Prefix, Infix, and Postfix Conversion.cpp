//1.INFIX TO POSTFIX - TC-O(N) SC-O(N)
// class Solution {
//   public:
//     string infixToPostfix(string& s) {
//         // code here
//         stack<char>st;
//         string ans;
//         unordered_map<char,int>pt;
//         pt['+'] = 1;
//         pt['-'] = 1;
//         pt['*'] = 2;
//         pt['/'] = 2;
//         pt['^'] = 3;
//         for(int i = 0 ; i < s.size( ) ; i++)
//         {
//             if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//                ans+=s[i]; 
//             else if(s[i]=='(') st.push(s[i]);
//             else if(s[i]==')'){
//                 while(!st.empty() && st.top()!='('){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 if(!st.empty()) st.pop();
//             }
//             else{
//                 while(!st.empty() && st.top()!='(' && (pt[st.top()]>pt[s[i]] || (pt[st.top()]==pt[s[i]] && s[i]!='^'))){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 st.push(s[i]);
//             }
//         }
//         while(!st.empty()) {
//             ans+=st.top();
//             st.pop();
//         }
//         return ans;        
//     }
// };

//2.INFIX TO PREFIX - TC-O(N) SC-O(N)
// class Solution {
//   public:
//     string infixToPrefix(string &s) {
//         // code here
//         //reverse the string
//         string revs = s;
//         reverse(revs.begin(),revs.end());
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if(revs[i]=='(') revs[i]=')';
//             else if(revs[i]==')') revs[i]='(';
//         }
//         //applying infix to postfix
//         string ans;
//         stack<char>st;
//         unordered_map<char,int>pt;
//         pt['+'] = 1;
//         pt['-'] = 1;
//         pt['*'] = 2;
//         pt['/'] = 2;
//         pt['^'] = 3;
//         for(int i = 0 ; i < revs.size() ; i++){
//             if((revs[i]>='a' && revs[i]<='z') || (revs[i]>='A' && revs[i]<='Z') || (revs[i]>='0' && revs[i]<='9')){
//                 ans+=revs[i];
//             }
//             else if(revs[i]=='(') st.push(revs[i]);
//             else if(revs[i]==')'){
//                 while(!st.empty() && st.top()!='('){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 if(!st.empty()) st.pop();
//             }else{
//                 while(!st.empty() && st.top()!='(' && (pt[st.top()]>pt[revs[i]] || (pt[st.top()]==pt[revs[i]] && st.top()=='^'))){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 st.push(revs[i]);
//             }
//         }
//         while(!st.empty()) {
//             ans+=st.top();
//             st.pop();
//         }
//         //reverse the string
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
 
//3.POSTFIX TO INFIX - TC-O(N^2) SC-O(N)
// class Solution {
//   public:
//     string postToInfix(string &s) {
//         // code here
//         stack<string>st;
//         string ans;
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//                 st.push(string(1,s[i]));
//             else{
//                 string fi = st.top(); st.pop();
//                 string se = st.top(); st.pop();
//                 st.push('('+se+s[i]+fi+')');
//             }
//         }
//         return st.top();
//     }
// };

//4.PREFIX TO INFIX - TC-O(N^2) SC-O(N)
// class Solution {
//   public:
//     string preToInfix(string &s) {
//         // code here
//         stack<string>st;
//         for(int i = s.size() - 1 ; i >= 0 ; i--)
//         {
//             if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//                 st.push(string(1,s[i]));
//             else{
//                 string fi = st.top(); st.pop();
//                 string se = st.top(); st.pop();
//                 st.push("("+fi+s[i]+se+")");
//             }
//         }
//         return st.top();
//     }
// };

//5.POSTFIX TO PREFIX - TC-O(N^2) SC-O(N)
// class Solution {
//   public:
//     string postToPre(string s) {
//         // code here
//         stack<string>st;
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//                 st.push(string(1,s[i]));
//             else{
//                 string fi = st.top(); st.pop();
//                 string se = st.top(); st.pop();
//                 st.push(s[i]+se+fi);
//             }
//         }
//         return st.top();
//     }
// };

//6.PREFIX TO POSTFIX - TC-O(N^2) SC-O(N) 
// class Solution {
//   public:
//     string preToPost(string &s) {
//         // code here
//         stack<string>st;
//         for(int i = s.size()-1; i>=0 ; i--)
//         {
//             if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
//                 st.push(string(1,s[i]));
//             else{
//                 string fi = st.top(); st.pop();
//                 string se = st.top(); st.pop();
//                 st.push(fi+se+s[i]);
//             }
//         }
//         return st.top();
//     }
// };