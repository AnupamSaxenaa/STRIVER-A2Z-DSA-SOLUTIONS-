#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    // #endif
    cout << "PROGRAM RUNNING FINE!" << endl;
    // PATTERN
    //  *
    //  **
    //  ***
    //  ****
    //  ***
    //  **
    //  *

    cout << "ENTER A NUMBER :-" << ' ';
    int a;
    cin >> a;

    for (int i = 0; i < 2 * a - 1; i++)
    {
        if (i < a)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*" << " ";
            }
            cout<<endl;
        }

        else
        {
            for (int j = 0; j < a-(i-a)-1; j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}