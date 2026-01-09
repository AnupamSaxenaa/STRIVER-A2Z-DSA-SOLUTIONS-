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
    // 12345
    // 1234
    // 123
    // 12
    // 1

    cout<<"ENTER A NUMBER :-"<<' ';
    int a;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= a-i; j++)
        {
            cout<<j<<' ';
        }
        cout<<endl;
    }
    

    return 0;
}