#include <bits/stdc++.h>
using namespace std;

bool halvesAreAlike(string s) {
    int len = s.length();
    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for(int i = 0; i < (len / 2); i++){
        if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u'){
            freq1[tolower(s[i]) - 'a']++;
        }
    }

    for(int i = (len / 2); i < len; i++){
        if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u'){
            freq2[tolower(s[i]) - 'a']++;
        }
    }

    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < 26; i++){
        sum1 += freq1[i];
        sum2 += freq2[i];
    }

    return sum1 == sum2;
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    if(halvesAreAlike(s)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}