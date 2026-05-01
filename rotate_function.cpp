#include <bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int>& nums) {
    int sz = nums.size();
    long ans = 0;
    long sum = 0;
    long f = 0;
    for (int i = 0; i < sz; i++) {
        sum += nums[i];
        f += i * nums[i];
    }

    ans = f;

    for (int j = 1; j < sz; j++) {
        f = f + sum - sz * nums[sz - j];
        ans = max(ans, f);
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 3, 2, 6};

    cout << "Max Rotate Function: " << maxRotateFunction(nums) << endl;

    return 0;
}