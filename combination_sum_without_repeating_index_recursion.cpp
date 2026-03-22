#include <bits/stdc++.h>
using namespace std;

void findCombinations(int idx,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=idx;i<arr.size();i++){
        if(i>idx && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findCombinations(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
}

int main(){
    vector<int> candidates = {1,1,2};
    int target = 2;

    vector<vector<int>> ans;
    vector<int> ds;

    sort(candidates.begin(), candidates.end());

    findCombinations(0, target, candidates, ans, ds);

    for(auto &vec : ans){
        for(int x : vec){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}