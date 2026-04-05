#include <bits/stdc++.h>
using namespace std;

string smallestSubsequence(string s) {
    vector<int> lastOccurence(26, -1);
    vector<bool> taken(26, false);
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        lastOccurence[s[i] - 'a'] = i;
    }

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int idx = ch - 'a';

        if (taken[idx]) continue;

        while (!result.empty() &&
               result.back() > ch &&
               lastOccurence[result.back() - 'a'] > i) {
            
            taken[result.back() - 'a'] = false;
            result.pop_back();
        }

        result.push_back(ch);
        taken[idx] = true;
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << smallestSubsequence(s) << endl;

    return 0;
}