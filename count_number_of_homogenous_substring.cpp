#include <iostream>
#include <string>
using namespace std;

int countHomogenous(string s) {
    long long ans = 0;
    long long len = 0;
    int MOD = 1e9 + 7;

    for (int i = 0; i < s.length(); i++) {
        if (i - 1 >= 0 && s[i] == s[i - 1]) {
            len += 1;
        } else {
            len = 1;
        }
        ans = (ans + len) % MOD;
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << countHomogenous(s) << endl;

    return 0;
}