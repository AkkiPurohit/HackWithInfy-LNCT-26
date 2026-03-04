#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool ispalindrome(string &s,int st,int end){
        while(st<end){
            if(s[st]!=s[end]){
                return false;
            }
            else{
                st++;
                end--;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans="";
        int sz=s.length();
        for(int i=0;i<sz;i++){
            for(int j=i;j<sz;j++){
                if(ispalindrome(s,i,j)){
                    if(ans.length()<=j-i+1){
                        ans=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;
    string s;

    cout<<"Enter string: ";
    cin>>s;

    cout<<"Longest Palindromic Substring: "<<obj.longestPalindrome(s);

    return 0;
}