#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
int len;

bool isvalid(string str){
    int val=0;
    if(str.empty()){
        return false;
    }
    if(str.length() > 1 && str[0] == '0') return false;
    for(char c : str){
        val = val * 10 + (c - '0');
    }
    return val <= 255;
}

void solve(string &s, int idx, int parts, string curr){
    if(idx == len && parts == 4){
        curr.pop_back(); // remove last '.'
        ans.push_back(curr);
        return;
    }

    if(parts >= 4) return;
    if(idx + 1 <= len){
        solve(s, idx+1, parts+1, curr + s.substr(idx,1) + ".");
    }
    if(idx + 2 <= len && isvalid(s.substr(idx,2))){
        solve(s, idx+2, parts+1, curr + s.substr(idx,2) + ".");
    }
    if(idx + 3 <= len && isvalid(s.substr(idx,3))){
        solve(s, idx+3, parts+1, curr + s.substr(idx,3) + ".");
    }
}

vector<string> restoreIpAddresses(string s){
    ans.clear();
    len = s.length();

    if(len > 12) return {};

    solve(s, 0, 0, "");
    return ans;
}

int main(){
    string s;
    cin >> s;

    vector<string> result = restoreIpAddresses(s);

    for(string ip : result){
        cout << ip << endl;
    }

    return 0;
}