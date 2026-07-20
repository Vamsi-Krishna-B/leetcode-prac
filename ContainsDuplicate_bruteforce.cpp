#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 3, 4, 2, 6};
    vector<int> nums2 = {1, 3, 4, 2, 1};
    vector<int> nums3 = {1, 3, 1};

    cout << boolalpha;
    cout << sol.containsDuplicate(nums1) << "\n";
    cout << sol.containsDuplicate(nums2) << "\n";
    cout << sol.containsDuplicate(nums3) << "\n";

    return 0;
}
