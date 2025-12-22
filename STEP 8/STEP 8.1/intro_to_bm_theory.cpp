

#include <bits/stdc++.h>
using namespace std;

// convert binary to decimal
void convert2decimal(string &s)
{
    int decimal = 0;
    int power = 1;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        int bit = s[i] - '0';
        decimal += bit * power;
        power *= 2;
    }
    cout << decimal << endl;
}

// convert decimal to binary
void convert2binary(string &t, int nos)
{
    //recursion
    // //base condition
    // if(nos<=1){
    //     t+=(nos+'0');
    //     return;
    // }
    // //work
    // convert2binary(t,nos/2);
    // t+=(nos%2+'0');

    // iterative
    // while (nos > 1)
    // {
    //     t += (nos % 2 + '0');
    //     nos /= 2;
    // }
    // t += (nos + '0');
    // reverse(t.begin(), t.end());
    // cout << t << endl;
}

int main()
{
    cout << "PROGRAM RUNNING FINE!" << endl;
    string s = "1101";
    convert2decimal(s);
    string temp = "";
    convert2binary(temp, 23);
    return 0;
}
