from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i] == nums[j]:
                    return True
        return False 

sol = Solution()
print(sol.containsDuplicate([1,3,4,2,6]))
print(sol.containsDuplicate([1,3,4,2,1]))
print(sol.containsDuplicate([1,3,1]))
        