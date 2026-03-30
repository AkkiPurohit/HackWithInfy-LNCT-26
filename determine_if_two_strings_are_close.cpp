#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string word1, string word2) {
    if(word1.length() != word2.length()){
        return false;
    }

    set<char> s1, s2;
    vector<int> freq1(26, 0), freq2(26, 0);

    for(char ch : word1){
        freq1[ch - 'a']++;
        s1.insert(ch);
    }

    for(char ch : word2){
        freq2[ch - 'a']++;
        s2.insert(ch);
    }

    // compare sets (same characters)
    if(s1 != s2){
        return false;
    }

    // compare frequency distribution
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    if(freq1 != freq2){
        return false;
    }

    return true;
}

int main() {
    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    if(closeStrings(word1, word2)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}