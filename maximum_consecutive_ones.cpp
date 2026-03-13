#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int ans = 0;

    for(int num : nums){
        if(num == 1){
            count++;
            ans = max(count, ans);
        }
        else{
            count = 0;
        }
    }

    return ans;
}

int main(){
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0 or 1): ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int result = findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones: " << result << endl;

    return 0;
}