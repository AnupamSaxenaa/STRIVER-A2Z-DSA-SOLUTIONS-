// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class stackUsingArray{
//     vector<int>st;
//     int top = -1;
//     public:
//     stackUsingArray(int n){
//         st.resize(n);
//     }
//     void push(int num){
//         if(top==st.size()-1){
//             cout<<"FULL HAI BHAI STACK!!\n";
//             return;
//         }
//         top++;
//         st[top] = num;
//     }
//     void pop(){
//         if(top==-1) return;
//         top--;
//     }
//     void printbaby() {
//         for (int i = 0; i <= top; i++) {
//             cout << st[i] << "-->";
//         }
//         cout << "TOP REACHED!" << endl;
//     }
//     void size(){
//         if(top==-1) {
//             cout<<"EMPTY!"<<endl;
//             return;
//         }
//         cout<<"SIZE : "<<top+1<<endl;
//     }
//     void topp(){
//         if(top==-1){
//             cout<<"EMPTY!"<<endl;
//             return;
//         }
//         cout<<"TOP ELEMENT : "<<st[top]<<endl;
//     }
// };
// int main() {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     int n;
//     cout<<"ENTER THE SIZE OF THE STACK YOU WANTED"<<endl;
//     cin>>n;
//     stackUsingArray s(n);
//     while (true)
//     {
//         cout<<"YOUR MENU FOR STACK USING ARRAY : \n";
//         cout<<" 1 PUSH\n 2 POP\n 3 TOP\n 4 SIZE\n 5 PRINT\n 6 EXIT\n";
//         int ip; cin>>ip;
//         if(ip==6){
//             cout<<"EXITING..."<<endl;
//             break;
//         }
//         switch (ip)
//         {
//         case 1:
//             int val;
//             cout<<"ENTER VALUE TO BE PUSHED!\n";
//             cin>>val;
//             s.push(val);
//             break;    
//         case 2:
//             s.pop();
//             break;   
//         case 3:
//             s.topp();
//             break;
//         case 4:
//             s.size();
//             break;    
//         case 5:
//             s.printbaby();
//             break;
//         default:
//             cout<<"INVALID VALUE ENTERED!"<<endl;
//             break;
//         }
//     }  
//     return 0;
// }