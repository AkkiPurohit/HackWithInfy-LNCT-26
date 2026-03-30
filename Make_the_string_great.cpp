#include <bits/stdc++.h>
using namespace std;

string makeGood(string s) {
    string ans = "";

    for(char ch : s){
        if(!ans.empty() && (ans.back() + 32 == ch || ans.back() - 32 == ch)){
            ans.pop_back();
        }
        else{
            ans.push_back(ch);
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << makeGood(s) << endl;

    return 0;
}