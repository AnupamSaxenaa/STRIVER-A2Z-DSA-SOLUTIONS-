#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (auto &x : s) if (x==' ') x = '_';
    s += ".cpp";
    string cmd = "echo \"" + s + "\" | pbcopy";
    system(cmd.c_str());
    cout << s << " (copied!)" << endl;
}
