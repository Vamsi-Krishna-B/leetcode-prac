#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int value = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == value) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

void printVector(const vector<int>& values) {
    cout << "[";
    for (int i = 0; i < values.size(); i++) {
        cout << values[i];
        if (i != values.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}

int main() {
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {3, 3};
    vector<int> nums3 = {3, 2, 4};

    printVector(sol.twoSum(nums1, 9));
    printVector(sol.twoSum(nums2, 6));
    printVector(sol.twoSum(nums3, 6));

    return 0;
}
