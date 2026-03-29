#include <bits/stdc++.h>
using namespace std;

string largestEven(string s) {
    int len = s.length();

    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '2') {
            return s;
        } else {
            s.pop_back();
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << largestEven(s);

    return 0;
}