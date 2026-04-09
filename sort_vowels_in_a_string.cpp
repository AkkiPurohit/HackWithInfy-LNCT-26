#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

string sortVowels(string s) {
    vector<char> vowels;

    for(int i = 0; i < s.length(); i++){
        if(isVowel(s[i])){
            vowels.push_back(s[i]);
            s[i] = '!';
        }
    }

    sort(vowels.begin(), vowels.end());

    int idx = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '!'){
            s[i] = vowels[idx++];
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << sortVowels(s) << endl;

    return 0;
}