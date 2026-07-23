#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char &c : s) {
        if (c == ' ')
            c = '_';
    }

    s += ".cpp";

    string cmd = "echo \"" + s + "\" | pbcopy";
    system(cmd.c_str());

    cout << "Copied: " << s << '\n';
}