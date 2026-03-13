#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int sz = nums.size();
    vector<int> ans(sz);

    for(int i = 0; i < sz; i++){
        int j = k % sz;
        ans[j] = nums[i];
        k++;
    }

    for(int i = 0; i < sz; i++){
        nums[i] = ans[i];
    }
}

int main(){
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    rotate(nums, k);

    cout << "Rotated array: ";
    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}