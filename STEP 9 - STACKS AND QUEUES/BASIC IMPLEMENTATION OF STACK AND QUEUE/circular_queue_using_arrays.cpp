// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class queueUsingArrays{
//     vector<int>st;
//     int top = -1;
//     int front = -1;
//     int currs = 0;
//     public:
//     queueUsingArrays(int n){
//         st.resize(n);
//     }
//     void push(int num){
//         if(currs==st.size()) {
//             cout<<"QUEUE IS FULL!"<<endl;
//             return;
//         }
//         if(currs==0) 
//             front = top = 0;
//         else top=(top+1)%st.size();
//         st[top] = num;
//         currs++;
//     }
//     void pop(){
//         if(currs==0){
//             cout<<"QUEUE IS EMPTY!"<<endl;
//             return;
//         }
//         int val = st[front];
//         //if queue becomes empty after poping you can reset front and top to -1 but here no need it will be handled by push seperately
//         front = (front+1)%st.size();
//         cout<<val<<" is popped!\n";
//         currs--;      
//     }
//     void printbaby() {
//         if(currs==0){
//             cout<<"QUEUE IS EMPTY!\n";
//             return;
//         }
//         int i = front;
//         for(int j = 1 ; j <= currs ; j++){
//             cout<<st[i]<<"->";
//             i = (i+1)%st.size();
//         }
//         cout<<"END REACHED"<<endl;
//     }
//     void size(){
//         cout<<"SIZE : "<<currs<<endl;
//     }
//     void topp(){
//         if(currs==0){
//             cout<<"EMPTY!"<<endl;
//             return;
//         }
//         cout<<"FRONT ELEMENT : "<<st[front]<<endl;
//     }
// };
// int main() {
//     cout << "PROGRAM RUNNING FINE!" << endl;
//     int n;
//     cout<<"ENTER THE SIZE OF THE QUEUE YOU WANTED"<<endl;
//     cin>>n;
//     queueUsingArrays s(n);
//     while (true)
//     {
//         cout<<"YOUR MENU FOR QUEUE USING ARRAY : \n";
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