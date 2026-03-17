#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n){
    if(n<=0){
        return 0;
    }
    if(n==1 || n==2 || n==3){
        return n;
    }

    vector<int> ans(n+1);
    ans[0]=0;
    ans[1]=1;
    ans[2]=2;

    for(int i=3;i<ans.size();i++){
        ans[i]=ans[i-1]+ans[i-2];
    }

    return ans[n];
}

int main(){
    int n;
    cin >> n;

    cout << climbStairs(n);

    return 0;
}