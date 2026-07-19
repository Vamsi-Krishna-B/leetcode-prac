#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums(nums.begin(), nums.end());
        return nums.size() != uniqueNums.size();
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
