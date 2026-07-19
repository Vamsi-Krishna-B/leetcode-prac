from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hash_map = {}
        for i,num in enumerate(nums):
            if num in hash_map:
                return True
            else:
                hash_map[num] = i
        return False

sol = Solution()
print(sol.containsDuplicate([1,3,4,2,6]))
print(sol.containsDuplicate([1,3,4,2,1]))
print(sol.containsDuplicate([1,3,1]))
        