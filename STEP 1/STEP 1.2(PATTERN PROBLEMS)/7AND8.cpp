#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
    cout << "PROGRAM RUNNING FINE!" << endl;

    //PATTERN
    //    *  
    //   *** 
    //  *****  
    //   and 
    // reverse

    int a = 0;
    cout<<"ENTER A NUMBER :-"<<" ";
    cin>>a;

    cout<<"UPPER TRIANGLE"<<endl;
    
    for (int i = 0; i < a; i++)
    {

        for (int k = 0; k < a-1-i; k++)
        {
            cout<<" ";
        }
        

        for (int j = 0; j < (2*i+1); j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }

    cout<<"LOWER TRIANGLE"<<endl;

    for (int i = 0; i < a; i++)
    {

        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        

        for (int j = 0; j < ((a*2-1)-2*i); j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    

    return 0;
}