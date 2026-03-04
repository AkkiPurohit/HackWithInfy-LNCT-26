#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        int sign=1;
        int sz=s.length();
        int i=0;
        while(i<sz && s[i]==' '){
            i++;
        }
        if(i<sz && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-'){
            sign=-1;
            i++;
            }
            else{
                i++;
            }
        }
        while(i<sz && s[i]=='0'){
            i++;
        }
        while(i<sz && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans*sign>INT_MAX){
                return INT_MAX;
            }
            else if(ans*sign<INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return (ans*sign);
    }
};

int main(){
    Solution s;
    string input;
    getline(cin,input);
    cout<<s.myAtoi(input);
}