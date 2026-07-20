#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;

        for (int i = 0; i < nums.size(); i++) {
            if (hashMap.find(nums[i]) != hashMap.end()) {
                return true;
            }

            hashMap[nums[i]] = i;
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
