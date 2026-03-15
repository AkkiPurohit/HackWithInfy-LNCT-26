#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int first = -1, last = -1;
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    st = 0;
    end = nums.size() - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (nums[mid] == target) {
            last = mid;
            st = mid + 1;
        }
        else if (nums[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return {first, last};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> result = searchRange(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}