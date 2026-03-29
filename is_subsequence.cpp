#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    if (s.length() > t.length()) {
        return false;
    }

    int curr = 0;

    for (int i = 0; i < t.length(); i++) {
        if (s[curr] == t[i]) {
            curr++;
        }
    }

    if (curr == s.length()) {
        return true;
    }

    return false;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (isSubsequence(s, t)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}