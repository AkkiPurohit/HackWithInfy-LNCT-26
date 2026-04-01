#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string>& strs) {
    int ans = 0;

    for (int j = 0; j < strs[0].length(); j++) {
        for (int i = 0; i < strs.size() - 1; i++) {
            if (strs[i][j] > strs[i + 1][j]) {
                ans++;
                break;
            }
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;  // number of strings

    vector<string> strs(n);
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    int result = minDeletionSize(strs);
    cout << result << endl;

    return 0;
}