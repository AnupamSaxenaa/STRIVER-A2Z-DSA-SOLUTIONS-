#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    // #endif
    cout << "PROGRAM RUNNING FINE!" << endl;
    // DIAMOND PATTER FOR EVEN AND ODD

    cout << "ONLY ENTER EVEN OR ODD NUMBER :-" << endl;
    cout << "ENTER A NUMBER :-" << ' ';
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        for (int i = 0; i < a; i++)
        {

            if (i < (a / 2))
            {
                for (int k = 0; k < a / 2 - 1 - i; k++)
                {
                    cout << " ";
                }

                for (int j = 0; j < (2 * i + 1); j++)
                {
                    cout << '*';
                }
                cout << endl;
            }

            else
            {
                for (int k = 0; k < (i - a / 2); k++)
                {
                    cout << ' ';
                }

                for (int j = 0; j < (((a / 2) * 2 - 1) - 2 * (i - a / 2)); j++)
                {
                    cout << '*';
                }
                cout << endl;
            }
        }
    }

    else if (a % 2 != 0)
    {
        for (int i = 0; i < a; i++)
        {

            if (i <= a / 2)
            {
                for (int k = 0; k < a/2 - i; k++)
                {
                    cout << " ";
                }

                for (int j = 0; j < (2 * i + 1); j++)
                {
                    cout << '*';
                }
                cout << endl;
            }

            else
            {
                for (int k = 0; k < (i-a/2); k++)
                {
                    cout << " ";
                }

                for (int j = 0; j < ((a/2 * 2 - 1) - 2 * (i-a/2-1) ); j++)
                {
                    cout << '*';
                }
                cout << endl;
            }
        }
    }

    else
    {
        cout << "ENTER A VALID NUMBER" << endl;
    }

    return 0;
}