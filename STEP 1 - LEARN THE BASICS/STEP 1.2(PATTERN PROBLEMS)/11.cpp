#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
    cout<<"PROGRAM RUNNING FINE!"<<endl;
    //PATTERN
    // 1
    // 01
    // 101
    // 0101...

    cout<<"ENTER A NUMBER :-"<<' ';
    int a;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if((j+i)%2!=0) cout<<0;
            else cout<<1;
        }
        cout<<endl;
    }
    

    return 0;
}