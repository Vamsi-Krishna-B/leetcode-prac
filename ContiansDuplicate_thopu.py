from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(nums)!=len(set(nums))

sol = Solution()
print(sol.containsDuplicate([1,3,4,2,6]))
print(sol.containsDuplicate([1,3,4,2,1]))
print(sol.containsDuplicate([1,3,1]))
        