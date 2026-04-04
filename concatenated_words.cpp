#include <bits/stdc++.h>
using namespace std;

unordered_map<string,bool> mp;

bool isconcatinated(string &word, unordered_set<string> &st){
    if(mp.find(word) != mp.end()){
        return mp[word];
    }

    for(int i = 0; i < word.size(); i++){
        string prefix = word.substr(0, i+1);
        string suffix = word.substr(i+1);

        if(suffix.empty()) continue;

        if(st.find(prefix) != st.end() && st.find(suffix) != st.end()){
            return mp[word] = true;
        }
        else if(st.find(prefix) != st.end() && isconcatinated(suffix, st)){
            return mp[word] = true;
        }
    }

    return mp[word] = false;
}

vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
    mp.clear();
    unordered_set<string> st(words.begin(), words.end());
    vector<string> result;

    for(string &word : words){
        st.erase(word);

        if(isconcatinated(word, st)){
            result.push_back(word);
        }

        st.insert(word);
    }

    return result;
}

int main(){
    int n;
    cin >> n;

    vector<string> words(n);
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    vector<string> result = findAllConcatenatedWordsInADict(words);

    for(string &word : result){
        cout << word << endl;
    }

    return 0;
}