#include <bits/stdc++.h>
using namespace std;

string orderlyQueue(string s, int k) {
    if (k == 1) {
        string ans = s;
        for (int i = 1; i < s.length(); i++) {
            string temp = s.substr(i) + s.substr(0, i);
            ans = min(ans, temp);
        }
        return ans;
    }

    sort(s.begin(), s.end());
    return s;
}

int main() {
    string s;
    int k;

    cin >> s >> k;

    cout << orderlyQueue(s, k);

    return 0;
}