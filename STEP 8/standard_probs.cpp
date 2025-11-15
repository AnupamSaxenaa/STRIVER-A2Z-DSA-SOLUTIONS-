#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//swap two nos
void swappy(int a , int b)
{
    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<" "<<b<<endl;
    return;
}

//ith bit set or not
void checkpls(int n,int i)
{
    n = n>>(i);
    n = n&1;
    if(n==0) cout<<"THE ith bit is not set\n";
    else cout<<"THE ith bit is set\n";
    return;

    //or do either way



    // if(((n)&(1<<i))!=0) cout<<"SET"<<endl;
    // else cout<<"NOT SET"<<endl;
    
}

//set the ith bit
void setpls(int n, int i)
{
    n = n | (1<<i);
    cout<<n<<endl;
    return;
}

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;
    setpls(9,2);
    return 0;
}