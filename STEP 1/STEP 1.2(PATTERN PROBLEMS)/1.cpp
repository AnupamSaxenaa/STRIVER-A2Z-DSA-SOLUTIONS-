#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
    cout <<"PROGRAM RUNNING FINE!"<<endl;
    //pattern 
    // ****
    // ****
    // ****
    // ****
    cout<<"ENTER A NUMBER : -"<<endl;
    int n = 0;
    cin>>n;



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<'*'<<' ';
        }
        cout<<endl;
        
    }
    
    return 0;
}