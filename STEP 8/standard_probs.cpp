#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// swap two nos
void swappy(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;
    return;
}

// ith bit set or not
void checkpls(int n, int i)
{
    n = n >> (i);
    n = n & 1;
    if (n == 0)
        cout << "THE ith bit is not set\n";
    else
        cout << "THE ith bit is set\n";
    return;

    // or do either way

    // if(((n)&(1<<i))!=0) cout<<"SET"<<endl;
    // else cout<<"NOT SET"<<endl;
}

// set the ith bit
void setpls(int n, int i)
{
    n = n | (1 << i);
    cout << n << endl;
    return;
}

// clear the ith bit
void clearpls(int n, int i)
{
    cout << (n & ~(1 << i)) << endl;
}

// toggle the ith bit
void togglepls(int n, int i)
{
    cout << (n ^ (1 << i)) << endl;
}

// remove the last set bit
void removepls(int n)
{
    // int t = 1 ;
    // while (t < n)
    // {
    //     int temp = (n & ~t);
    //     if(temp!=n){
    //         cout<<temp<<endl;
    //         return;
    //     }
    //     t = t<<1;
    // }

    //or

    cout<<(n & (n-1))<<endl;
}

int main()
{
    cout << "PROGRAM RUNNING FINE!" << endl;
    removepls(0);
    return 0;
}