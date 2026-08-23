#include <bits/stdc++.h>
using namespace std;

string trimWhitespace(const string &s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    if (start == string::npos) return "";

    size_t end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

string transformText(const string &input) {
    string cleaned = trimWhitespace(input);

    for (char &ch : cleaned) {
        if (ch == ' ') ch = '_';
    }

    if (cleaned.size() >= 4 && cleaned.substr(cleaned.size() - 4) != ".cpp") {
        cleaned += ".cpp";
    }

    return cleaned;
}

string shellEscape(const string &s) {
    string out;
    for (char ch : s) {
        if (ch == '\'') {
            out += "'\\''";
        } else {
            out += ch;
        }
    }
    return out;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    string result = transformText(text);
    cout << "Result: " << result << "\n";

#if defined(__APPLE__)
    string command = "printf '%s' '" + shellEscape(result) + "' | /usr/bin/pbcopy";
    int status = system(command.c_str());
    if (status == 0) {
        cout << "Copied to clipboard.\n";
    } else {
        cout << "Failed to copy to clipboard.\n";
    }
#else
    cout << "Clipboard copying is supported on macOS via pbcopy.\n";
#endif

    return 0;
}
